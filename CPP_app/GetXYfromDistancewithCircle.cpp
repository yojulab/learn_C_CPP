#include <math.h>
#include <iostream>

#define PI 3.14159265358979323846

typedef double custem_t;

custem_t degreetoradian(custem_t degree)
{
    return ((PI / 180) * degree);
}
int main(int argc, char **argv)
{
    if (argc <= 1)
    {
        std::cout << "You have entered " << argc
                  << " arguments:"
                  << std::endl;
        return -1;
    }

    custem_t current_x = 10, current_y = 20, distance = 30;

    // custem_t current_x = 37.478985, current_y = 126.777528, distance = 30;

    custem_t radian = degreetoradian(std::stoi(argv[1]));

    custem_t target_x = current_x + distance * cos(radian);
    custem_t target_y = current_y + distance * sin(radian);

    std::cout << "target X : " << target_x << ", target Y : " << target_y << std::endl;

    for (int i = 0; i <= 180; i += 10)
    {
        radian = degreetoradian(i);

        target_x = current_x + distance * cos(radian);
        target_y = current_y + distance * sin(radian);

        std::cout << "Degree : " << i << " - target X, Y : " << target_x << ", " << target_y << std::endl;
    }

    return 0;
}