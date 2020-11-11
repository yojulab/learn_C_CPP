#include <iostream>

using namespace std;

// first name space
namespace first_space {
   void func()
   {
      cout << "Inside first_space" << endl;
   }
} // namespace first_space

// second name space
namespace second_space {
   void func()
   {
      cout << "Inside second_space" << endl;
   }
} // namespace second_space

using namespace first_space;

// #include "under/NameSpacesUsingOthers.cpp"
#include "under/NameSpacesUsingOthers.h"   // C++ way
using namespace third_space;

#include "under/NameSpacesUsingOthersWithoutNamespace.h" // C way

int main() {
   // This calls function from first name space.
   // func();     // Error When add using namespace third_space
   first_space::func();
   // Inside first_space
   second_space::func();
   
   // Outside second_space
   third_space::func();

   // Outside without namespace
   funcWithoutNamespace();
   return 0;
}