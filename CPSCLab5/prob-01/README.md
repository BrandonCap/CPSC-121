### 2D Vector as a C++ Struct

In this exercise problem, you are tasked with creating a C++ struct named `struct vect` which has two int data members. The abstract data type represents a Cartesian coordinate. The objective of the program is to use the `vect` data type to read in five data points from the included data files, `data*.txt`, and identify the shortest distance and greatest distance defined by the five points in the file.

Generally, after ascertaining that there are command line arguments to process, the program shall open `argv[1]` and initialize an array of `vect` structs with the data. Next, define six integer variables. (You may wish to define these variables in one or more arrays.) The six variables will represent the following:
* The pair of indices that represent the pair of points with the least distance
* The pair of indices that represent the pair of points with the greatest distance
* The greatest distance
* The least distance

The pair of indices represent the location in the array of the pair of `vects` that are the greatest or least distance.

Select a pair of `vect` structs and use that pair to initialize these six variables.

Using nested loops, iterate over every pair of `vects` and calculate the distance. Should the distance be less than the current maximum or minimum, update the state of your program accordingly.

Additionally, define the following functions:
```
void setVect(vect* v, int x, int y);
int distance(vect* a, vect* b);
ostream& printVect(ostream& out, vect* v);
```

Finally, print out what was calculated like this:
```
vect[0] (0, 0) and vect[3] (0, 100) have the greatest distance of 100.
vect[1] (1, 1) and vect[2] (1, 2) have the least distance of 1.
```

The pair of `vect`, `vect_a` and `vect_b` with the greatest or least distance is defined as the pair which has the greatest distance between them where `vect_a != vect_b` using the distance formula:
![distance = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}](https://render.githubusercontent.com/render/math?math=distance%20%3D%20%5Csqrt%7B%28x_2%20-%20x_1%29%5E2%20%2B%20%28y_2%20-%20y_1%29%5E2%7D)

Much of the initial setup of the programs has already been done for you. It is your responsibility to complete the program and understand the mechanics of how the files are laid out.

To build the program use the `make` command. The Makefile's default target is to build `all` which results in creating the binary `vectstruct`.
