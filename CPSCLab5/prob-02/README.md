### 2D Vector as a C++ Class
This exercise is meant to be a contrast to the previous exercise. Previously, a Cartesian coordinate was defined as a `struct`. In this exercise, the Cartesian coordinate is defined as a `class`. Note the similarities and differences between these two programs. The class that you are using is named `Vect2` and defined in `Vect2.hpp` and `Vect2.cpp`.

The class has two data members. The abstract data type represents a Cartesian coordinate. Similar to the previous exercise however the data members are of float type. The objective of the program is to use the `Vect2` data type to read in five data points from the included data files, `float_data*.txt`, and identify the shortest distance and greatest distance defined by the five points in the file. 

Additionally, note that a `struct` does not need to have a constructor or deconstructor defined. A class does. Further consider that if you are creating an array of objects, the compiler has to construct them before you have a chance to construct them with the data from the file. For this reason, it is best to define a constructor that takes no arguments and transparently constructs our objects.

Generally, after ascertaining that there are command line arguments to process, the program shall open `argv[1]` and initialize an array of `Vect2` objects with the data. Next, define two floating point variables and four integer variables. (You may wish to define these variables in one or more arrays.) The six variables will represent the following:
* The pair of integer indices that represent the pair of points with the least distance
* The pair of integer indices that represent the pair of points with the greatest distance
* The greatest floating point distance
* The least floating point distance

The pair of indices represent the location in the array of the pair of `Vect2` objects that are the greatest or least distance.

Select a pair of `Vect2` objects and use that pair to initialize these six variables.

Using nested loops, iterate over every pair of `Vect2` objects and calculate the distance. Should the distance be less than the current maximum or minimum, update the state of your program accordingly.

Additionally, define the following [member functions](https://en.wikipedia.org/wiki/Method_(computer_programming)#Member_functions_in_C++) (aka [methods](https://en.wikipedia.org/wiki/Method_(computer_programming))):
```
int getX( );
int getY( );
void setX(int x);
void setY(int y);
ostream& write(ostream& out);
```

Finally, print out what was calculated like this:
```
Vect2[0] (0.0, 0.0) and Vect2[3] (0.0, 100.0) have the greatest distance of 100.
Vect2[1] (1.0, 1.0) and Vect2[2] (1.0, 2.0) have the least distance of 1.
```

The pair of `Vect2`, `vect_a` and `vect_b` with the greatest or least distance is defined as the pair which has the greatest distance between them where `vect_a != vect_b` using the distance formula:
![distance = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}](https://render.githubusercontent.com/render/math?math=distance%20%3D%20%5Csqrt%7B%28x_2%20-%20x_1%29%5E2%20%2B%20%28y_2%20-%20y_1%29%5E2%7D)

Much of the initial setup of the programs has already been done for you. It is your responsibility to complete the program and understand the mechanics of how the files are laid out.

To build the program use the `make` command. The Makefile's default target is to build `all` which results in creating the binary `vectclass`.
