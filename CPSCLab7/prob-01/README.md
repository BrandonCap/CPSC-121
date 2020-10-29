# Lab 07 Circle Adder
This exercise is worth 5 points. The rubric is at the end of the README.

## Instructions
Write the program as specified making sure the output is exactly like the output shown in the example. Use the provided Makefile to build the program. You must develop your own testing regime; data files are provided as a starting point.

Operator overloading is covered in Chapter 11.6 of the textbook.

### Requirements
#### Overall Program Behavior
(This is a toy program. What we are calculating here is not geometrically correct or interesting. For the sake of simplicity, I'm cutting some mathematical corners so we can exercise our C++ skills.)

The program is run from the command line. The included Makefile shall build the program named `circ-adder`. The `circ-adder` program takes one command line argument which is a filename. The program opens the specified file and reads the contents. The file defines two circles. On the first line is the first circle's center x coordinate, center y coordinate, and radius. The next line defines the second circle in the same fashion.

First the program reports the circles' definitions by printing out each circle to the terminal. Printing out the circle must be performed by overloading the `<<` (insertion) operator.

Next it calculates the sum of the two circles. (Here's where I'm making stuff up.) For the sake of this exercise, we need to find a new circle which envelopes both circles. We'll define the center of the circle as the midpoint between the two circle centers. The new radius shall be defined as the sum of the two circles' radii.

To calculate the midpoint of a line segment defined by two points, ![\left(\frac{x_1 + x_2}{2},\frac{y_1 + y_2}{2}\right)](https://render.githubusercontent.com/render/math?math=%5Cleft%28%5Cfrac%7Bx_1%20%2B%20x_2%7D%7B2%7D%2C%5Cfrac%7By_1%20%2B%20y_2%7D%7B2%7D%5Cright%29&mode=inline).

An additional constraint is that the circle sum operation must be implemented by overloading the `+` (plus) operator. 

Once calculated, print out the new circle. Again, print out the circle using the overloaded `<<` operator.

#### Input File Format
Sample input files are provided for developing and testing.

Each file defines two circles. All the numbers are expressed as floating point numbers.

The first line of the file defines a circle. The first number is the x coordinate of the circle's center. The second number is the y coordinate of the circle's center. The third number is the circle's radius.

The second line of the file defines a circle. The first number is the x coordinate of the circle's center. The second number is the y coordinate of the circle's center. The third number is the circle's radius.

#### Output
The program initially outputs two lines to the terminal reporting the input circles and finally a final line reporting the 'sum' of the two circles.

Let's imagine that there are two circle, ((0.0, 0.0), 1.0) and ((7.0, 0.0), 0.5). The output of the program is the following:
```
((0.0, 0.0), 1.0)
((7.0, 0.0), 0.5)
((3.5, 0.0), 1.5)
```

#### Circle Class
The circle class is defined in the files Circle.cpp and Circle.hpp. You may use your Circle class from previous lab work as a starting point. You do not need to remove methods that are not used in this exercise, such as distanceTo(const Point& p) and isPointInsdie(const Point& p).

At a minimum, the Circle class shall have

* A constructor
* A deconstructor
* Private data members
* Public methods to access and mutate the private data members
* Overload the operator + as a method that belongs to the circle class.
* The following method `ostream& write(const ostream& out) const` where the object is written to `out` as a string in the fashion described previously, i.e. `((3.5, 0.0), 1.5)`.

Additionally, define a function `ostream& operator <<(ostream& out, const Circle& c)`. This function is not a method of the Circle class. It is a just a function. The only thing this function does is call the method `write( )` of the parameter named `c`.

#### Additional Requirements
The program has the following additional requirements:

* The program may not prompt the user for input.
* Classes must be used; you will not receive any credit if classes are not used.
* The classes must be defined in separate files, with the interface defined in the .hpp and the implementation in the .cpp files.
* You must define the methods as described in the instructions for credit.
* The exercise is due by 8am, April 21 (unless there is a documented accommodation). You must push all your commits to your GitHub repository by this deadline for credit. Late submission is not allowed.

# Rubric
This exercise is worth 5 points. Your program must compile, in other words be syntactically correct, before it is graded. Submissions that do not compile shall be assigned a zero grade. 

* Functionality (3 points): Your submission shall be assessed for the appropriate constructs and strategies to address the exercise.

* Readability (1 point): Your submission shall be assessed by checking whether your code passess the style and format check, as well as how well it follows the proper naming conventions, and internal documentation guidelines.

* Compilation (1 point): Your submission shall compile with no warnings. Compile with errors results in a zero grade.

