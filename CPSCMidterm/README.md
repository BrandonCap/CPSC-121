# Midterm
This is the second part of the midterm exam. It is worth 10 points. The rubric is at the end of the README.

## Instructions
The exam's second part shall be posted online via Titanium and it shall be a programming assignment accessible through GitHub. The link to the GitHub assignment shall be available starting at 8am, Thursday, March 19. The second part is due by 8pm, Friday, March 20. You may use your textbook, notes, laboratory assignments during the exam, and online references such as cppreference.com. You may not use Internet search engines such as Google, or online forums such as Stack Overflow.

You shall work individually and shall not communicate with other people about your work on this exercise.

Should you have any questions, please contact the instructor by email or during office hours through Zoom.

You are to write a program that identifies if a specified point is inside or outside of a given circle. The circle and point data are defined in an input file given in the exercise's repository. The program shall output to the screen whether a given point is inside or outside the circle. The points are two dimensional points in a plane. The circle is defined by a center point and a radius.

Data files are provided in the repository for testing.

### Requirements
#### Overall Program Behavior
The program is run from the command line. The included Makefile shall build the program named `circ`. The `circ` program takes one command line argument which is a filename. The program opens the specified file and reads the contents. The file defines a circle on the first line. The remaining lines define ten points.

First the program reports the circle's definition.

Next it processes each point. For each point, calculate if the point is inside or outside the circle. If it is inside, print a message that the given point is inside the circle. If it is outside, print a message that the given point is outside. Points that fall on the circle's boundary are considered inside the circle.

To calculate if a point is outside a circle, calculate if the distance from the given point to the circle's center is greater than it's radius. The distance formula is ![distance=\sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}](https://render.githubusercontent.com/render/math?math=distance%3D%5Csqrt%7B%28x_2%20-%20x_1%29%5E2%20%2B%20%28y_2%20-%20y_1%29%5E2%7D&mode=inline).

#### Input File Format
Sample input files are provided for developing and testing.

Each file defines one circle and ten points. All the numbers are expressed as floating point numbers.

The first line of the file defines a circle. The first number is the x coordinate of the circle's center. The second number is the y coordinate of the circle's center. The third number is the circle's radius.

Each subsequent line defines a point. The first number on each line is the point's x coordinate. The second number on each line is the point's y coordinate.

There are always ten points in each file.

#### Output
The program outputs one line for each point processed reporting if the point is inside or outside the circle.

Let's imagine that there are two points, (0.0, 0.0) and (7.0, 0.0), and there is a circle centered at the origin (0.0, 0.0) with a radius of 4.0. The output of the program is the following:
```
(0.0, 0.0) is inside the circle((0.0, 0.0), 4.0)
(7.0, 0.0) is outside the circle((0.0, 0.0), 4.0)
```
#### Point Class
The point class is defined in the files Point.cpp and Point.hpp.

At a minimum, the Point class shall have

* A constructor
* A deconstructor
* Private data members
* Public methods to access and mutate the private data members

#### Circle Class
The circle class is defined in the files Circle.cpp and Circle.hpp.

At a minimum, the Point class shall have

* A constructor
* A deconstructor
* Private data members
* Public methods to access and mutate the private data members
* A method named float distanceTo(const Point& p) which calculates the distance from the circle's center to the given point.

#### Additional Requirements
The program has the following additional requirements:

* The program may not prompt the user for input.
* Classes must be used; you will not receive any credit if classes are not used.
* The classes must be defined in separate files, with the interface defined in the .hpp and the implementation in the .cpp files.
* The exercise is due by 8pm, Friday, March 20 (unless there is a documented accommodation). You must push all your commits to your GitHub repository by this deadline for credit. Late submission is not allowed.

# Rubric
This exercise is worth 10 points. Your program must compile, in other words be syntactically correct, before it is graded. Submissions that do not compile shall be assigned a zero grade. 

* Functionality (5 points): Your submission shall be assessed for the appropriate constructs and strategies to address the exercise.

* Readability (4 point): Your submission shall be assessed by checking whether your code passess the style and format check, as well as how well it follows the proper naming conventions, and internal documentation guidelines.

* Compilation (1 point): Your submission shall compile with no warnings. Compile with errors results in a zero grade.

