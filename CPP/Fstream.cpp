#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    // char data[100];
    string data;

    // open a file in write mode.
    string filename = "afile.dat";
    fstream outfile;
    outfile.open(filename, ios::ate);

    cout << "Writing to the file" << endl;
    cout << "Enter your name: ";
    cin >> data;
    // cin.getline(data, 100);

    // write inputted data into the file.
    outfile << data << endl;

    cout << "Enter your age: ";
    cin >> data;
    // cin.ignore();

    // again write inputted data into the file.
    outfile << data << endl;

    // close the opened file.
    outfile.close();

    // open a file in read mode.
    fstream infile;
    infile.open(filename, ios::ate);

    cout << "Reading from the file" << endl;
    infile >> data;

    // write the data at the screen.
    cout << data << endl;

    // again read the data from the file and display it.
    infile >> data;
    cout << data << endl;

    // close the opened file.
    infile.close();

    return 0;
}
