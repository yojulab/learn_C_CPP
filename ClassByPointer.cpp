#include <iostream>

using namespace std;

class Box
{
public:
    // Constructor definition
    Box(double length = 2.1, double breadth = 3.1, double height = 4.1)
    {
        cout << "Constructor called." << endl;
        this->length = length;
        this->breadth = breadth;
        this->height = height;
    };
    double getVolume()
    {
        return length * breadth * height;
    };

private:
    double length;  // Length of a box
    double breadth; // Breadth of a box
    double height;  // Height of a box
};

int main(void)
{
    Box Box1(2.2, 3.2);      // Declare box1
    Box Box2(8.5, 6.3, 2.0); // Declare box2
    Box *ptrBox;             // Declare pointer to a class.

    // Save the address of first object
    ptrBox = &Box1;

    // Now try to access a member using member access operator
    cout << "getVolume of Box1: " << ptrBox->getVolume() << endl;
    // getVolume of Box1: 28.864

    // Save the address of second object
    ptrBox = &Box2;

    // Now try to access a member using member access operator
    cout << "getVolume of Box2: " << ptrBox->getVolume() << endl;
    // getVolume of Box2: 107.1

    return 0;
}