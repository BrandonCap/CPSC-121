# Lab 08 Volume Finder
This exercise is worth 5 points. The rubric is at the end of the README.

## Instructions
Write the program as specified making sure the output is exactly like the output shown in the example. Use the provided Makefile to build the program. You must develop your own testing regime; data files are provided as a starting point.

Please read and understand Chapters 11.9 - 11.15 in the textbook. You may also find it fruitful to read [Virtual Function Specifier](https://en.cppreference.com/w/cpp/language/virtual) and [Inheritance in C++](https://en.cppreference.com/book/intro/inheritance) from [cppreference.com](https://en.cppreference.com/).

### Requirements
#### Overall Program Behavior
The program is run from the command line. The included Makefile shall build the program named `volume-finder`. The `volume-finder` program takes one command line argument which is a filename. The program opens the specified file and reads the contents. The file defines a volume that is either a right circular (cone)[https://en.wikipedia.org/wiki/Cone], a right circular [cylinder](https://en.wikipedia.org/wiki/Cylinder), or a [sphere](https://en.wikipedia.org/wiki/Sphere).

First the program initializes it's internal data structures depending on what type of volume is defined in the input file. For example, if the input file specifies a cone, then a Cone object is allocated on the heap using the `new` keyword. Data from the file is used to initialize the object. Since you don't know what is defined in the input file, the pointer variable in `main( )` shall be of type `Shape`. (This means that the Cone, Cylinder, and Sphere classes must inherit from Shape.)

Once the object is initialized, calculate the volume of the shape and print out a report to the terminal (see Example Output below).

Overload the `<<` operator for each type of shape similar to the previous lab exercise.

#### Input File Format
Sample input files are provided for developing and testing.

Each file defines a shape. The first number in each file defines the type of shape. There are three types of shapes:
* Cone, type 1, defines the radius and height on line 2
* Cylinder, type 2, defines the radius and height on line 2
* Sphere, type 3, defines the radius on line 2

#### Calculating Volume
Please review the information given at the start of this document about cones, cylinders and spheres.

To calculate the volume of a cone, use the formula ![V = \frac{1}{3} \pi r^2 h](https://render.githubusercontent.com/render/math?math=V%20%3D%20%5Cfrac%7B1%7D%7B3%7D%20%5Cpi%20r%5E2%20h&mode=inline). 

To calculate the volume of a cylinder, use the formula ![V = \pi r^2 h](https://render.githubusercontent.com/render/math?math=V%20%3D%20%5Cpi%20r%5E2%20h&mode=inline).

To calculate the volume of a sphere, use the formula ![V = \frac{4}{3} \pi r^3](https://render.githubusercontent.com/render/math?math=V%20%3D%20%5Cfrac%7B4%7D%7B3%7D%20%5Cpi%20r%5E3&mode=inline).


#### Output
The program outputs one line given one input file.

Given the input file volume_data_10.txt which contains
```
3
0.462791979848
```
Running the command `./volume-finder volume_data_10.txt` shall print
```
Sphere(radius=0.462792) has a volume of 0.415189
```

An example for a cone is:
```
Cone(radius=0.462792, height=1.0) has a volume of 0.224285
```

An example for a cylinder is:
```
Cylinder(radius=0.462792, height=1.0) has a volume of 0.672855
```

#### Shape Class
The class Shape is defined in Shape.hpp. The definition is complete enough that you do not need to add anything to Shape.hpp to complete this exercise. You are welcome to add more to the class.

At a minimum, the Shape class shall have

* A constructor
* Private data member _shape_type
* An extern const float named PI and defined in Shape.cpp
* A public method to get the shape type
* A pure virtual method `float volume( ) = 0`
* A virtual method `std::ostream& write(std::ostream& out)`
* Overload the << operator as a function (not a method - do not use friend!)

The file Shape.cpp has everything implemented and you do not need to modify it to complete the exercise. You are welcome to add more.

#### Cone, Cylinder, and Sphere Class
The Sphere class is defined in Sphere.hpp and Sphere.cpp. The class definition and the operator << definition are prewritten for you to help you get started. Sphere.cpp has a framework there to help you get started.

The Cone files (Cone.hpp & Cone.cpp) and the Cylinder files (Cylinder.hpp & Cylinder.cpp) are effectively empty files that you must complete using the Sphere.hpp & Sphere.cpp as a template of what to do.

#### Additional Requirements
The program has the following additional requirements:

* The program may not prompt the user for input.
* Classes must be used; you will not receive any credit if classes are not used.
* The classes must be defined in separate files, with the interface defined in the .hpp and the implementation in the .cpp files.
* You must define the methods as described in the instructions for credit.
* The exercise is due by 8am, April 29 (unless there is a documented accommodation). You must push all your commits to your GitHub repository by this deadline for credit. Late submission is not allowed.

# Rubric
This exercise is worth 5 points. Your program must compile, in other words be syntactically correct, before it is graded. Submissions that do not compile shall be assigned a zero grade. 

* Functionality (3 points): Your submission shall be assessed for the appropriate constructs and strategies to address the exercise.

* Readability (1 point): Your submission shall be assessed by checking whether your code passess the style and format check, as well as how well it follows the proper naming conventions, and internal documentation guidelines.

* Compilation (1 point): Your submission shall compile with no warnings. Compile with errors results in a zero grade.

