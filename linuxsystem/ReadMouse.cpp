#include <iostream>
#include <fstream>
// #include <unistd.h>
// #include <fcntl.h>

using namespace std;

int main(int argc, char **argv)
{
    // Open Mouse
    string filename = "/dev/input/mice";
    // open a file in write mode.
    ofstream outfstream(filename);
    if (outfstream.is_open())
    {
        int left, middle, right;
        signed char x, y;
        unsigned char data[3];
        while (1)
        {
            // Read Mouse
            outfstream.
            bytes = read(fd, data, sizeof(data));

            if (bytes > 0)
            {
                left = data[0] & 0x1;
                right = data[0] & 0x2;
                middle = data[0] & 0x4;

                x = data[1];
                y = data[2];
                printf("x=%d, y=%d, left=%d, middle=%d, right=%d\n", x, y, left, middle, right);
            }
        }
    }
    else
        cout << "Unable to open file";

    return 0;
}