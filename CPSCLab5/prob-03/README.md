### Distance Between California Cities
This exercise is meant to be an extension of the previous exercise. Previously, a Cartesian coordinate was defined as a class and focused uniquely on storing one type of data, namely floating point values. In this exercise, the data type you are creating is a [latitude](https://en.wikipedia.org/wiki/Latitude) and [longitude](https://en.wikipedia.org/wiki/Longitude) pair along with the name of the point on the Earth that it represents.

The class has three data members. There are two floating point data members which represent latitude and longitude and a `string` which represents the name of the location. You are provided with five data files which contain twenty cities in California. Each file starts with the name of the city (with spaces exchanged for underscores `_`), the latitude, and finally the longitude. The latitude and longitude are expressed as floating point values. Positive value of of latitude mean degrees north of the Earth's Equator. Negative values represent degrees south of the Earth's Equator. Positive values of longitude represent degrees east from the Prime Meridian, while negative valus represent degrees west from the Prime Meridian. (Note that all the cities in California will have positive degrees latitude and negative degrees longitude because California is north of the Equator and east of the Prime Meridian.)

The objective of the program is to use the `LatLon` data type to read in twenty data points from the included data files, `location_data*.txt`, and identify the shortest distance and greatest distance defined by the twenty cities in the file. 

Generally, after ascertaining that there are command line arguments to process, the program shall open `argv[1]` and initialize an array of `LatLon` objects with the data. Next, define two floating point variables and four integer variables. (You may wish to define these variables in one or more arrays.) The six variables will represent the following:
* The pair of integer indices that represent the pair of points with the least distance
* The pair of integer indices that represent the pair of points with the greatest distance
* The greatest floating point distance
* The least floating point distance

The pair of indices represent the location in the array of the pair of `LatLon` objects that are the greatest or least distance.

Select a pair of `LatLon` objects and use that pair to initialize these six variables.

Using nested loops, iterate over every pair of `LatLon` objects and calculate the distance. Should the distance be less than the current maximum or minimum, update the state of your program accordingly.

Additionally, define the following [member functions](https://en.wikipedia.org/wiki/Method_(computer_programming)#Member_functions_in_C++) (aka [methods](https://en.wikipedia.org/wiki/Method_(computer_programming))):
```
float distanceFrom(LatLon& point);
float getLatitude( );
float getLongitude( );
string getCity( );
void setLatitude(float latitude);
void setLongitude(float longitude);
void setCity(string city);
ostream& write(ostream& out);
```

Note that in this exercise, we are making use of [references](https://en.wikipedia.org/wiki/Reference_(C%2B%2B)) rathern than [pointers](https://en.wikipedia.org/wiki/Pointer_(computer_programming)).

Finally, print out what was calculated like this:
```
Thermalito and Rohnerville have the greatest distance of 246.7 km.
Cometa and Placerville have the least distance of 97.93 km.
```

The pair of `LatLon`, `latlon_a` and `latlon_b` with the greatest or least distance is defined as the pair which has the greatest distance between them where `latlon_a != latlon_b` using the distance [haversine formula](https://en.wikipedia.org/wiki/Haversine_formula). An implementation is provided for you in `LatLon.cpp` with some notes on what is being calculated. The code is duplicated here for your review.
```
// Calculate the distance between this and point using the haversine
// formula. See https://en.wikipedia.org/wiki/Haversine_formula
float LatLon::distanceFrom(LatLon& point){
  // Earth's average radius in km.
  float earth_radius = 6371.0;
  // The C++ math library uses radians, convert the latitudes from degress
  // to radians.
  float phi_this = degrees_to_radians(latitude);
  float phi_point = degrees_to_radians(point.getLatitude( ));
  
  // Remember that the angle is measured from the center of the Earth.

  // Find the change in the angle between this point on Earth and that
  // point on Earth (North/South direction)
  float delta_phi = degrees_to_radians(point.getLatitude( ) - latitude);

  // Find the change in the angle between this point on Earth and that
  // point on Earth (East/West direction)
  float delta_lambda = degrees_to_radians(point.getLongitude( ) - longitude);

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
```


Much of the initial setup of the programs has already been done for you. It is your responsibility to complete the program and understand the mechanics of how the files are laid out.

To build the program use the `make` command. The Makefile's default target is to build `all` which results in creating the binary `citysolver`.
