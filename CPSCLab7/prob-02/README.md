# Lab 07 Vect2 Array
This exercise is worth 5 points. The rubric is at the end of the README.

## Instructions
Write the program as specified making sure the output is exactly like the output shown in the example. Use the provided Makefile to build the program. You must develop your own testing regime; data files are provided as a starting point.

Operator overloading is covered in Chapter 11.6 of the textbook.

Copy constructors are covered in Chapter 11.5 of the textbook.

### Requirements
#### Overall Program Behavior
The program is run from the command line. The included Makefile shall build the program named `vect-compare`. The `vect-compare` program takes one command line argument which is a filename. The program opens the specified file and reads the contents. The file defines a list of random 2D point specified as floating point numbers.

The first number in the file specifies how many points are in the file. Each subsequent line defines and x coordinate and y coordinate.

The main function has already been written. No changes are necessary. You must implement all that is needed in Vect2.hpp, Vect2.cpp, VectArray.hpp, and VectArray.cpp.

The main function reads in the contents of the input file. The first line is read and a VectArray of that size is created. Then the main function loops reading each line and creating a Vect2 object. The Vect2 object is then added to the VectArray object.

Once the VectArray is built from the data file, it is printed to the terminal. The `<<` operator is used which implies that the `<<` operator has been overloaded for at least VectArray and perhaps for Vect2.

Next a copy of the VectArray is made using a copy constructor. Since the VectArray contains an array of objects, a deep copy must be performed.

Once the copy is completed, the original array is compared to the copy using the `==` operator. This implies that the `==` operator was overloaded. Since this is a copy of the array, the `==` operator should return `true`. (A modest suggestion: define `!=` and then define `==` as not `!=`.) A message is printed reporting if the arrays are the same or not.

Finally, the main function deletes each of the arrays and exits cleanly, returning 0 to the shell.

#### Input File Format
Sample input files are provided for developing and testing.

Each file defines an arbitrary list of two dimensional points.

The first line of the file specifies how many points are given in the file. This number is an integer.

Each subsequent line is a pair of floating point numbers that represent a two dimensional point. The first number is the x coordinate and the second number is the y coordinate.

#### Output
The program initially outputs the contents of the file it just read and then a message to the terminal about the similarity of the copy that it just made.

Let's imagine that the input file contained two 2d points, (0.0, 0.0) and (7.0, 0.0). The output of the program is the following:
```
(0.0, 0.0)
(7.0, 0.0)
As I suspected, they are the same.
```

#### Vect2 Class
The Vect2 class is defined in the files Vect2.cpp and Vect2.hpp. You may use your implementation from lab 5 as a starting point for this exercise. You do not need to remove methods that are not used in this exercise.

At a minimum, the Vect2 class shall have

* A constructor
* A copy constructor, if needed
* Overloaded `==` and `!=`, if needed
* A deconstructor
* Private data members
* Public methods to access and mutate the private data members
* The following method `ostream& write(const ostream& out) const` where the object is written to `out` as a string in the fashion described previously, i.e. `(3.5, 0.0)`.

Additionally, define a function `ostream& operator <<(ostream& out, const Vect2& v)`. This function is not a method of the Vect2 class. It is a just a function. The only thing this function does is call the method `write( )` of the parameter named `v`.

#### VectArray Class
The VectArray class is defined in the files VectArray.cpp and VectArray.hpp.

At a minimum, the VectArray class shall have

* A constructor
* A copy constructor
* Overloaded `==`
* Overloaded `!=`, if needed
* A deconstructor
* Private data members, such as the arrays size and a pointer to the array
* Public methods to access and mutate the private data members
* The following method `ostream& write(const ostream& out) const` where the object is written to `out` as a string in the fashion described previously. When printed it will print out all the elements in it's array.

Additionally, define a function `ostream& operator <<(ostream& out, const VectArray& va)`. This function is not a method of the VectArray class. It is a just a function. The only thing this function does is call the method `write( )` of the parameter named `va`.

The constructor will need to use the `new` keyword to allocate memory.

The deconstructor will need to use the `delete` keyword to free allocated memory.

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

