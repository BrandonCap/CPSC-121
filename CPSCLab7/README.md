# Lab exercise 7 objectives
1. Use abstract data types (classes)
1. Use copy constructors
1. Overload operators as methods and functions
1. Allocate and deallocate memory
# Instructions
You must complete all exercise problems.

If you have questions let your instructor or the lab assistant know. You can also consult your classmates.

## Code Evaluation (compile, execute, and run unit test/style checker)
Each exercise has a Makefile. Read and understand each Makefile. Each problem will have a different binary as the target executable of the build.

Generically, the build process is:
```
make
./main
```

None of the exercises include tests. You are responsible to create your own testing regime.

## Testing Your Code
Computers only ever do exaxtly what they are told, exactly the way they are told it, and never anything else. Testing is an important process to writing a program. You need to test for the program to behave correctly and test that the program behaves incorrectly in a predictable way.

As programmers we have to remember that there are a lot of ways that we can write the wrong program and only one to a few ways to write the correct program. We have to be aware of [cognitive biases](https://en.wikipedia.org/wiki/List_of_cognitive_biases) that we may exercise that lead us to believe we have correctly completed our program. That belief may be incorrect and our software may have errors. [Errors in software](https://www.wired.com/2005/11/historys-worst-software-bugs/) may lead to loss of [life](https://www.nytimes.com/2019/03/14/business/boeing-737-software-update.html), [property](https://en.wikipedia.org/wiki/Mariner_1), [reputation](https://en.wikipedia.org/wiki/Pentium_FDIV_bug), or [all of the above](https://en.wikipedia.org/wiki/2009%E2%80%9311_Toyota_vehicle_recalls).

### Test strategy
Start simple, and work your way up. Good tests are specific, cover a broad range of fundamentally different possibilities, can identify issues quickly, easily, and directly, without need for much set up, and can almost be diagnosed by inspection if the code fails to execute the test correctly.

Data files are provided to help you devise your own testing strategies. As an exercise, incorporate the testing process into your Makefile such that `make test` will run your own tests.

## Submission (push your code to GitHub)
```
git add main.cpp
git commit -m "Type a comment telling what you are submitting to GitHub"
git push
```

# Rubric
Each exercise is worth 5 points. There is a total of 15 points possible. Your program must compile, in other words be syntactically correct, before it is graded. Submissions that do not compile shall be assigned a zero grade. 

For each problem:
* Functionality (3 points): Your submission shall be assessed for the appropriate constructs and strategies to address the exercise.

* Compilation (1 point): Your submission shall compile with no warnings. Compile with errors results in a zero grade.

* Readability (1 point): Your submission shall be assessed by checking whether your code passess the style and format check, as well as how well it follows the proper naming conventions, and internal documentation guidelines.
