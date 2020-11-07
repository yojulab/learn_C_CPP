#include <iostream>

using namespace std;

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
    cerr << "Error message : " << str << endl;
    clog << "Error message : " << str << endl;
}