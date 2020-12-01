#include <math.h>
#include <iostream>
#include <string>

#define PI 3.141592

double degreetoradian(int degree){
    return ((PI/180)*degree);
}
int main(int argc, char **argv){
    std::cout << "You have entered " << argc
         << " arguments:"
         << std::endl;

    for (int i = 0; i < argc; ++i)
        std::cout << argv[i] << std::endl;

    int x = 10, y =20, r = 30;
    std::string str = argv[1];
    double radian = degreetoradian(std::stoi(str));

    int newx = x + r * cos(radian);
    int newy = y + r * sin(radian);

    std::cout << "new X : " << newx << ", new Y : " << newy << std::endl;
    return 0;
}