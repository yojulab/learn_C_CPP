#include <cmath>
#include <iostream>

template <typename T>
class CPoint
{
public:
    T x;
    T y;

public:
    CPoint() : x(0), y(0) {}
    CPoint(T _x, T _y) : x(_x), y(_y) {}
};

template <typename T1, typename T2>
T1 GetDistance(const T1 &p1, const T2 &p2)
{
    return std::sqrt(T((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y)));
}

int main()
{
    CPoint<double> p1(432, 189);
    CPoint<int> p2(38, 392);

    auto dDistance = GetDistance(p1, p2);
    // std::cout << dDistance << std::endl;

    return 0;
}