#include <iostream>

using namespace std;
class Line
{
public:
   void setLength(double len);
   double getLength(void);
   Line();           // This is the constructor declaration
   Line(double len); // This is the constructor
   ~Line();          // This is the destructor: declaration

private:
   double length;
};

// Member functions definitions including constructor
Line::Line(void)
{
   cout << "Object is being created" << endl;
}
Line::Line(double len)
{
   cout << "Object is being created, length = " << len << endl;
   length = len;
}
Line::~Line(void)
{
   cout << "Object is being deleted" << endl;
}
void Line::setLength(double len)
{
   length = len;
}
double Line::getLength(void)
{
   return length;
}

// Main function for the program
int main()
{
   Line lineFirst;
   // Object is being created
   // set lineFirst length
   lineFirst.setLength(6.0);
   cout << "Length of lineFirst : " << lineFirst.getLength() << endl;
   // Length of lineFirst : 6

   Line lineSecond(10.0);
   // Object is being created, length = 10
   cout << "Length of lineSecond : " << lineSecond.getLength() << endl;
   // Length of lineSecond : 10
   // Object is being deleted
   // Object is being deleted
   return 0;
}
