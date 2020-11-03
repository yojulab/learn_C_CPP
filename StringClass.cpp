#include <iostream>
#include <string>

using namespace std;

int main()
{

    string str1 = "Hello";
    string str2 = "World";
    string str3;
    int len;

    // copy str1 into str3
    str3 = str1;
    cout << "str3 : " << str3 << endl;
    // str3 : Hello

    // concatenates str1 and str2
    str3 = str1 + str2;
    cout << "str1 + str2 : " << str3 << endl;
    // str1 + str2 : HelloWorld

    // total length of str3 after concatenation
    len = str3.size();
    cout << "str3.size() :  " << len << endl;
    // str3.size() :  10

    return 0;
}