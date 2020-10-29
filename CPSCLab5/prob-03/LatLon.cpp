/*

Brandon Capparelli
brandon.capparelli@csu.fullerton.edu
CPSC 121 - 03
3/3/20

*/

#include "LatLon.hpp"
#include <cmath>

using namespace std;

const float PI = 3.141592653589793;

// For every function, write a comment defining what the function does
// and clarify what the parameters mean.

float degrees_to_radians(float degrees)
{
  return degrees * PI / 180.0;
}

LatLon::LatLon()
{
}
LatLon::~LatLon()
{
}
LatLon::LatLon(float lat, float lon, string city)
{
  setLatitude(lat);
  setLongitude(lon);
  setCity(city);
}

float LatLon::getLatitude()
{
  return lat;
}
float LatLon::getLongitude()
{
  return lon;
}
string LatLon::getCity()
{
  return city;
}
void LatLon::setLatitude(float latitude)
{
  lat = latitude;
}
void LatLon::setLongitude(float longitude)
{
  lon = longitude;
}
void LatLon::setCity(string cityName)
{
  city = cityName;
}
ostream& LatLon::write(ostream& out)
{
  out << city << " " << lat << " " << lon << endl;
  return out;
}

// Calculate the distance between this and point using the haversine
// formula. See https://en.wikipedia.org/wiki/Haversine_formula
float LatLon::distanceFrom(LatLon& point)
{
  // Earth's average radius in km.
  float earth_radius = 6371.0;
  // The C++ math library uses radians, convert the latitudes from degress
  // to radians.
  float phi_this = degrees_to_radians(lat);
  float phi_point = degrees_to_radians(point.getLatitude());

  // Remember that the angle is measured from the center of the Earth.

  // Find the change in the angle between this point on Earth and that
  // point on Earth (North/South direction)
  float delta_phi = degrees_to_radians(point.getLatitude() - lat);

  // Find the change in the angle between this point on Earth and that
  // point on Earth (East/West direction)
  float delta_lambda = degrees_to_radians(point.getLongitude() - lon);

  // Calculate the square of half the chord length between this point and
  // that point.
  // Remember these points are on something that we're simplifying down
  // to a sphere.
  float a = sin(delta_phi/2.0) * sin(delta_phi/2.0) + cos(phi_this) * cos(phi_point) * sin(delta_lambda / 2.0) * sin(delta_lambda / 2.0);

  // Calculate the angular distance (in radians)
  float c = 2.0 * atan2(sqrt(a), sqrt(1.0 - a));

  // Since we know the angular distance, multiply this with the Earth's
  // average radius to arrive upon the distance between the two points.
  float distance = earth_radius * c;
  return distance;
}
