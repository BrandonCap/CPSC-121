# Recursive Countdown - Lab 05
This exercise is worth 5 points. The rubric is at the end of the README.

## Instructions
Write the program as specified making sure the output is exactly like the output shown in the example. Use the provided Makefile to build the program. You must develop your own testing regime; data files are provided as a starting point.

### Requirements
#### Overall Program Behavior
The program is run from the command line. The included Makefile shall build the program named `countdown`. The `coundtown` program takes one command line argument which is the number to count down from. The program counts down from the target number to zero. The program performs this by using a for loop, a while loop, a do while loop, and a recursive call to a function. To make the program more insteresting, the program sleeps for one second between each printed line. (You may comment this out for testing purposes if you tire of waiting for your program to execute; be sure to include it in your final submission.)

Writing a for loop, while loop, and do while loop was covered in CPSC 120 and it is meant to be a review.

The recursive countdown function is the objective of this exercise.

#### Recursion
Recursion is covered in Chapter 14 of the textbook. Please read that chapter before attempting this exercise. (You'll find that this exercise is very simple.)

You will employ what's called tail recursion to mimic the behavior of a while loop. In a while loop, one checks the condition, executes the body, and at the end of the body - updates the state, etc. When the state is updated, such as through a counter, then the condition is checked again and breaks out of a loop if the condition is no longer true.

We'll use the same idea in a tail recursive function. The function will take a parameter such as an int. It will print the int, then decrement the int. Next the condition is checked. If the condition is true, the function is called again with a new parameter (that is one less), otherwise the function returns. You can also pass in a second parameter which defines the condition.

#### Output
Let's imagine that the program is run like this `countdown 3`. Then the output will look like this:
```
3
2
1
0
3
2
1
0
3
2
1
0
3
2
1
0
```

The program prints out 3, 2, 1, 0 once for a for loop, once for a while loop, once for a do-while loop, and once through recursion.

#### Additional Requirements
The program has the following additional requirements:

* The program may not prompt the user for input. Please use int argc and char* argv[].
* The exercise is due by 8am, April 15 (unless there is a documented accommodation). You must push all your commits to your GitHub repository by this deadline for credit. Late submission is not allowed.

# Rubric
This exercise is worth 5 points. Your program must compile, in other words be syntactically correct, before it is graded. Submissions that do not compile shall be assigned a zero grade. 

* Functionality (3 points): Your submission shall be assessed for the appropriate constructs and strategies to address the exercise.

* Readability (1 point): Your submission shall be assessed by checking whether your code passess the style and format check, as well as how well it follows the proper naming conventions, and internal documentation guidelines.

* Compilation (1 point): Your submission shall compile with no warnings. Compile with errors results in a zero grade.

