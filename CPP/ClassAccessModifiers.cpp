#include <iostream>

using namespace std;

class Box
{
public:
    double length;
    void setWidth(double param_width)
    {
        width = param_width;
    };

    double getWidth(void);
    void setLength(double length)
    {
        this->length = length;
    };

private:
    double width;

protected:
    double breadth;
};

// Member functions definitions
double Box::getWidth(void)
{
    return width;
};

class SmallBox : Box
{ // SmallBox is the derived class.
public:
    void setSmallBreadth(double);
    double getSmallBreadth(void);
};

// Member functions of child class
double SmallBox::getSmallBreadth(void)
{
    return breadth;
};

void SmallBox::setSmallBreadth(double param_breadth)
{
    breadth = param_breadth;
}

int main()
{
    Box BoxFirst;        // Declare BoxFirst of type Box
    Box BoxSecond;       // Declare BoxSecond of type Box
    double volume = 0.0; // Store the volume of a box here

    // box 1 specification
    //    BoxFirst.height = 5.0;    // Error
    BoxFirst.setWidth(5.0);
    BoxFirst.length = 6.0;

    // box 2 specification
    BoxFirst.setWidth(10.0);
    BoxSecond.length = 12.0;

    // volume of box 1
    //    volume = BoxFirst.height * BoxFirst.length;   // Error
    volume = BoxFirst.getWidth() * BoxFirst.length;
    cout << "Volume of BoxFirst : " << volume << endl;
    // Volume of BoxFirst : 60

    // volume of box 2
    volume = BoxSecond.getWidth() * BoxSecond.length;
    cout << "Volume of BoxSecond : " << volume << endl;
    // Volume of BoxSecond : 2.65133e-313

    SmallBox box;

    // set box width using member function
    box.setSmallBreadth(5.0);
    cout << "Breadth of box : " << box.getSmallBreadth() << endl;
    // Breadth of box : 5

    return 0;
}