#include <iostream>
using namespace std;

int funcInsde();			// function declaration

#include "under/NameSpacesUsingOthers.cpp"
using namespace third_space;

int main() {			// function call 
   int i = funcInsde();      
   third_space::func();
   return 0;
}

int funcInsde() {			// function definition
   return 0;
}
