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
int main() {
   // This calls function from first name space.
   func();
   // Inside first_space
   second_space::func();
   // Inside second_space
   return 0;
}