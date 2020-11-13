#include <iostream>
using namespace std;

int funcInsde(); // function declaration

// #include "under/NameSpacesUsingOthers.cpp"
#include "under/NameSpacesUsingOthers.hpp"
using namespace third_space;

#include "under/NameSpacesUsingOthersWithoutNamespace.hpp"

int main()
{ // function call
   int i = funcInsde();
   cout << "main() : " << i << endl;
   third_space::func();
   funcOutside();
   return 0;
}

int funcInsde()
{ // function definition
   cout << "funcInsde" << endl;
   return 5;
}
