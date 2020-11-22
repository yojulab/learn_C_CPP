#include <fstream>
#include <iostream>
using namespace std;

//  ./Fstream
// You can write data to want you ! I want to write the files.
// This is a line.
// This is another line.
// I
int main()
{
    string filename = "Fstream.txt";
    // open a file in write mode.
    ofstream outfstream(filename);
    string data;
    if (outfstream.is_open())
    {
        outfstream << "This is a line." << endl;
        outfstream << "This is another line.\n";
        cout << "You can write data to want you !";
        cin >> data;
        outfstream << data << endl;

        outfstream.close();
        exit(1);
    }
    else
        cout << "Unable to open file";

    ifstream infstream(filename);
    if (infstream.is_open())
    {

        while (getline(infstream, data))
        {
            cout << data << '\n';
        }
        infstream.close();
    }
    else
        cout << "Unable to open file";
    
    return 0;
}
