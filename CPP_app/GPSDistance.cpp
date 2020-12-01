#include <iostream>
#include <cmath>

class LatLong
{
public:
    double latitude = 0;
    double longitude = 0;

    LatLong(double _lat, double _long)
    {
        latitude = _lat;
        longitude = _long;
    }
};

// return : KM
double calcDistance(LatLong start, LatLong end)
{
    double distance = 0;

    double startLatitudeRadian = start.latitude * M_PI / 180; // M_PI = 3.141592..
    double startLongitudeRadian = start.longitude * M_PI / 180;
    double endLatitudeRadian = end.latitude * M_PI / 180;
    double endLongitudeRadian = end.longitude * M_PI / 180;

    distance = acos(sin(startLatitudeRadian) * sin(endLatitudeRadian) + cos(startLatitudeRadian) * cos(endLatitudeRadian) * cos(endLongitudeRadian - startLongitudeRadian));

    distance = distance * 6371;

    return distance;
}

int main()
{
    LatLong latlong01(37.514055, 127.033377);
    LatLong latlong02(35.846386, 128.577047);

    std::cout << "latlong01, latlong02 : " << calcDistance(latlong01, latlong02) << " km\n" << std::endl; 
    // real : 230.94 km, calc : 230.938536 km

    return 0;
}