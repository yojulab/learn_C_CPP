#include <iostream>

using namespace std;

// ~$ ./BasicInputOutput 1>./cout.log 2>./cerr.log
// sang
// ...
// ~$ cat cout.log
// Please enter your name and age : Your name is: sanghun, age is: 49
// Please enter your name and age : Your name is: hun, age is: 21
// ~$ cat cerr.log
// cerr Error message : Unable to read....
// clog Error message : Unable to read....

int main()
{
    char name[50], age[5];
    cout << "Please enter your name and age : ";
    cin >> name >> age;
    cout << "Your name is: " << name << ", age is: " << age << endl;

    string str_name, str_age;
    cout << "Please enter your name and age : ";
    cin >> str_name >> str_age;
    cout << "Your name is: " << str_name << ", age is: " << str_age << endl;

    char str[] = "Unable to read....";
    cerr << "cerr Error message : " << str << endl;
    clog << "clog Error message : " << str << endl;
}