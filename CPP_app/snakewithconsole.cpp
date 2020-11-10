#include <iostream> // Standard Header
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <termios.h>
#include <stdio.h>

using namespace std;

/// Global Dimension
const int width = 50;               // Boundary Width
const int height = 25;              // Boundary Height
const char block = '#';             // Block Char

#ifdef  _WIN32  // Teminal Command (Linux: clear | Windows : clr )
const char *clearcommand = "clr"; 
#else
const char *clearcommand = "clear"; 
#endif

/// global arrays for Data Records
int background[height][width]; /// Background Array
int snake[50][2];              /// Maximum Snake Length
int food[2] = {0, 0};          /// Snake Food Array
int score = 0;                 /// Score
int snakelen = 3;              /// Snake Starting Length
int snakemovementspeedx = 1;   /// Horizontal Speed
int snakemovementspeedy = 1;   /// Vertical Speed
int lap = 200;                 /// Waiting Time Betweeen Frames

/// Initialise background borders Onto Array
void initialise_background(void)
{
    int i;

    // insert top border
    for (i = 0; i < width; i++)
    {
        background[0][i] = 1;
    }

    // insert left border
    for (i = 0; i < height; i++)
    {
        background[i][0] = 1;
    }

    // insert right border
    for (i = 0; i < height; i++)
    {
        background[i][width - 1] = 1;
    }

    // insert bottom border
    for (i = 0; i < width; i++)
    {
        background[height - 1][i] = 1;
    }
}

/// Initialise Snake Coordinates
void initialise_snake(void)
{

    snake[0][0] = 3; /// Coordinates x
    snake[0][1] = 3; /// Coordinates y

    snake[1][0] = 3 + 1; /// Coordinates x
    snake[1][1] = 3;     /// Coordinates y

    snake[2][0] = 3 + 2; /// Coordinates x
    snake[2][1] = 3;     /// Coordinates y

    snake[3][0] = 3 + 3; /// Coordinates x
    snake[3][1] = 3;     /// Coordinates y

    snake[4][0] = 3 + 4; /// Coordinates x
    snake[4][1] = 3;     /// Coordinates y
}

/// Declearing Global Temporary Variable To Save Memory
int bytesWaiting, i;
int px, py, nx, ny;
char k;
int h, w;
int x, y;
int movementx = snakemovementspeedx; /// Snake Movement
int movementy = 0;                   /// Snake Movement

int _kbhit()
{
    static const int STDIN = 0;
    static bool initialized = false;

    if (!initialized)
    {
        // Use termios to turn off line buffering
        termios term;
        tcgetattr(STDIN, &term);
        term.c_lflag &= ~ICANON;
        tcsetattr(STDIN, TCSANOW, &term);
        setbuf(stdin, NULL);
        initialized = true;
    }

    //int bytesWaiting;
    ioctl(STDIN, FIONREAD, &bytesWaiting);
    return bytesWaiting;
}

/// Reaction On Press Button Of Keyboard
void reaction_on_keyboard(const char k)
{
    if (k == 'd' || k == '6')
    {
        // Right Turn
        movementx = snakemovementspeedx;
        movementy = 0;
    }
    else if (k == 'a' || k == '4')
    {
        // Left Turn
        movementx = -snakemovementspeedx;
        movementy = 0;
    }
    else if (k == 'w' || k == '8')
    {

        // Turn UP
        movementx = 0;
        movementy = -snakemovementspeedy;
    }
    else if (k == 's' || k == '2')
    {
        // Turn Down
        movementx = 0;
        movementy = snakemovementspeedy;
    }
    else if (k == 'q' || k == 'z' || k == 'c')
    {
        cout << "[+] Exit Safely [+]" << endl;
        exit(0);
    }
}

/// Clear Background
void clear_background(void){
    system(clearcommand);
}

void draw_snake_in_background(const int rev){
    //int x,y;

    for(i=0; i<snakelen; i++){
        x = snake[i][0];
        y = snake[i][1];
        if((x!=0)&&(y!=0)){
        background[y][x]=rev;
        }

    }

}

/// Print Array Frame
void print_array_frame(void){

    for(h=0; h<height; h++){

        for(w=0; w<width; w++){
            i=background[h][w];

            if(i==1){
            cout << block;
            }else if (i==2){
            cout << "+";
            }else{
            cout << " ";
            }

        }
        cout << endl;
    }
}

void mainloop(void){

    clear_background();          // clear background
    draw_snake_in_background(1); // Install Snake
    print_array_frame();         // Print Frame
    draw_snake_in_background(0); // Uninstall Snake

}

void loop(void)
{
    int frame = 0;
    x = 0;
    y = 0;

    while (x < 500)
    {
        // sleepcp(lap);

        if (_kbhit()) /// If keyboard hit
        {
            cin >> k; /// Character
            reaction_on_keyboard(k);
        }

        mainloop();                                                                 /// RUn Main Loop FUnction
        // update_snake_coordination();                                                /// Update Snake COordination
        // check_over_lapping();                                                       /// Check Snake status
        // cook_food();                                                                /// Make Sure Food is available
        // capture_food();                                                             /// Snake Eaten Food Or Not
        cout << "< Frame : " << frame << "  | Score  : " << score << " > " << endl; /// Print Status
        frame++;
    }
}

/// Main Trigger Function
int main(int argc, char **argv)
{
    initialise_background(); /// Install All Variables
    initialise_snake();      /// Install Snake data
    loop();                  /// run Update Loop
    return 0;
}