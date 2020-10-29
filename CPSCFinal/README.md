# Final
This is the second part of the final exam. It is worth 20 points. The rubric is at the end of the README.

## Instructions
The practical GitHub lab part shall take place on Tuesday, May 12 from 1pm to 3pm. Your repositories will be available to be checked out at 1pm on that day and your final commit must be by 3pm on the same day. You may use your notes, textbook, your laboratory exercises, and homework during the exam. You may not consult other people, use a web browser, or use a search engine such as Google or Bing.

You shall work individually and shall not communicate with other people about your work on this exercise.

Should you have any questions, please contact the instructor by email.

You are to write a program that calculates the area of a polygon. The polygon is given as an input file. The program shall output to the screen information about the polygon and the area of the polygon. The programs must match the output demonstrated in the section titled "Example Output".

Data files are provided in the repository for testing.

### Requirements
#### Overall Program Behavior
The program works with a simplified definition of polygon. For this exercise, assume that a polygon is an equilateral, convex polygon.

The program is run from the command line. The included Makefile shall build the program named `area-finder`. The `area-finder` program takes one command line argument which is a file name. The program opens the specified file and reads the contents. The file defines the number of sides the polygon has and the length of one side on the first line.

First the program initializes it's internal data structures depending on what type of polygon is defined in the input file. For example, if the input file specifies a triangle, then a Triangle object is allocated on the heap using the `new` keyword. Data from the file is used to initialize the object. Since you don't know what is defined in the input file, the pointer variable in `main( )` shall be of type `Polygon`. (This means that the Triangle and Octagon classes must inherit from Polygon.)

Once the object is initialized, calculate the area of the polygon and print out a report to the terminal (see Example Output below).

Overload the `<<` operator for each type of shape similar to the previous lab exercise.


#### Input File Format
Sample input files are provided for developing and testing.

Each file defines a polygon. There are only two types of polygons that this program understands. The first is a triangle, which has 3 equally long sides. And the second is an octagon which has 8 equally long sides.

The first number in each file defines the type of polygon; it is an integer. If the first number is 3 then it is a triangle. If the first number is 8 then it is an octagon. Anything other than a 3 or an 8 is undefined and your program should exit.

The second number is the length of a side of the given polygon; it is a float.

#### Calculating Area
To calculate the area of an equilateral convex triangle, use the formula ![A = \frac{\sqrt{3}}{4} a^2](https://render.githubusercontent.com/render/math?math=A%20%3D%20%5Cfrac%7B%5Csqrt%7B3%7D%7D%7B4%7D%20a%5E2) where A is the area and a is the length of a side.

To calculate the area of an equilateral convex octagon, use the formula ![A = 2 (1+\sqrt{2}) a^2](https://render.githubusercontent.com/render/math?math=A%20%3D%202%20%281%2B%5Csqrt%7B2%7D%29%20a%5E2) where A is the area and a is the length of a side.

As a convenience, the constants `SQRT_2` and `SQRT_3` are defined in Polygon.hpp.

#### Example Output
The program outputs one line given one input file.
Given the input file polygon_data_08.txt which contains
```
8 0.0223680292914
```
Running the command `./area-finder polygon_data_08.txt` shall print
```
Octagon(side_length = 0.022368) has an area of 0.0024158
```

Below is an exhaustive list of all the computed outcomes of the given data files.
```
./area-finder polygon_data_01.txt
Triangle(side_length = 0.338283) has an area of 0.0495521
./area-finder polygon_data_02.txt
Octagon(side_length = 0.38199) has an area of 0.704548
./area-finder polygon_data_03.txt
Octagon(side_length = 0.278495) has an area of 0.374491
./area-finder polygon_data_04.txt
Triangle(side_length = 0.847934) has an area of 0.311333
./area-finder polygon_data_05.txt
Octagon(side_length = 0.368848) has an area of 0.656902
./area-finder polygon_data_06.txt
Triangle(side_length = 0.201118) has an area of 0.0175147
./area-finder polygon_data_07.txt
Octagon(side_length = 0.400066) has an area of 0.772805
./area-finder polygon_data_08.txt
Octagon(side_length = 0.022368) has an area of 0.0024158
./area-finder polygon_data_09.txt
Octagon(side_length = 0.390996) has an area of 0.73816
./area-finder polygon_data_10.txt
Triangle(side_length = 0.142757) has an area of 0.00882461
./area-finder polygon_data_11.txt
Octagon(side_length = 0.1514) has an area of 0.110677
./area-finder polygon_data_12.txt
Octagon(side_length = 0.457298) has an area of 1.00973
./area-finder polygon_data_13.txt
Octagon(side_length = 0.97958) has an area of 4.63325
./area-finder polygon_data_14.txt
Octagon(side_length = 0.45524) has an area of 1.00066
./area-finder polygon_data_15.txt
Octagon(side_length = 0.267949) has an area of 0.346666
./area-finder polygon_data_16.txt
Triangle(side_length = 0.12225) has an area of 0.00647142
./area-finder polygon_data_17.txt
Triangle(side_length = 0.170643) has an area of 0.0126089
./area-finder polygon_data_18.txt
Triangle(side_length = 0.00643942) has an area of 1.79553e-05
./area-finder polygon_data_19.txt
Octagon(side_length = 0.770189) has an area of 2.86418
./area-finder polygon_data_20.txt
Triangle(side_length = 0.991284) has an area of 0.425498
```

#### Polygon Class
The Polygon class is defined in the files Polygon.cpp and Polygon.hpp.

At a minimum, the Polygon class shall have

* A constructor
* Private data members
* Public methods to access the the private data members
* A pure virtual area method
* A virtual write method

In the same pair of files, overload the `operator<<` such that it can print out information about a Polygon by calling the Polygon's write method.

#### Triangle Class
The Triangle class is defined in the files Triangle.cpp and Triangle.hpp.

At a minimum, the Triangle class shall have

* A constructor
* Private data members
* Public methods to access and mutate the private data members
* An implementation of area
* An implementation of write

In the same pair of files, overload the `operator<<` such that it can print out information about a Triangle by calling the Triangle's write method.

#### Octagon Class
The Octagon class is defined in the files Octagon.cpp and Octagon.hpp.

At a minimum, the Octagon class shall have

* A constructor
* Private data members
* Public methods to access and mutate the private data members
* An implementation of area
* An implementation of write

In the same pair of files, overload the `operator<<` such that it can print out information about a Octagon by calling the Octagon's write method.

#### Additional Requirements
The program has the following additional requirements:

* The program may not prompt the user for input.
* Classes must be used; you will not receive any credit if classes are not used.
* The classes must be defined in separate files, with the interface defined in the .hpp and the implementation in the .cpp files.
* The exercise is due by Tuesday, May 12 at 3pm (unless there is a documented accommodation). You must push all your commits to your GitHub repository by this deadline for credit. Late submission is not allowed.

# Rubric
This exercise is worth 20 points. Your program must compile, in other words be syntactically correct, before it is graded. Submissions that do not compile shall be assigned a zero grade. 

* Functionality (10 points): Your submission shall be assessed for the appropriate constructs and strategies to address the exercise.

* Readability (8 point): Your submission shall be assessed by checking whether your code passess the style and format check, as well as how well it follows the proper naming conventions, and internal documentation guidelines.

* Compilation (2 point): Your submission shall compile with no warnings. Compile with errors results in a zero grade.

