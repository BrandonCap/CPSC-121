/*

Brandon Capparelli
brandon.capparelli@csu.fullerton.edu
CPSC 121 - 03
3/3/20

*/

#include <iostream>

// This is a header guard.
// Read more about it at https://en.wikipedia.org/wiki/Include_guard
#ifndef _LATLON_HPP_
#define _LATLON_HPP_

using namespace std;

// For every function, write a comment defining what the function does
// and clarify what the parameters mean.

float degrees_to_radians(float degrees);

class LatLon
{
  private:
    float lat;
    float lon;
    string city;
  public:
    LatLon();
    ~LatLon();
    LatLon(float lat, float lon, string name);
    // Returns the number of kilometers between this LatLon and the
    // LatLon point. Assume's the earth's radius is about 6,371 KM.
    // Angles must be in radians for use with the C++ math library.
    float distanceFrom(LatLon& point);
    float getLatitude();
    float getLongitude();
    string getCity();
    void setLatitude(float latitude);
    void setLongitude(float longitude);
    void setCity(string cityName);
    ostream& write(ostream& out);
};

#endif
// The #endif matches the #ifdef at the start of the file
// This is the end of the header guard.
