# BCA-106: Lab on C — Ultimate Practice Question Bank

This repository contains the complete bank of practice questions compiled directly from the official syllabus for **BCA-106: Lab on C**. These questions are systematically organized exercise by exercise—containing exactly 10 targeted assignments per module—to help you build logic, debug workflows, and gain total mastery over the C programming language.

---

## 📋 Master Exercise Index
1. [Exercise 1: Basics](#exercise-1-basics)
2. [Exercise 2: Operators (Part 1)](#exercise-2-operators-part-1)
3. [Exercise 3: Operators (Part 2)](#exercise-3-operators-part-2)
4. [Exercise 4: Decision Statements](#exercise-4-decision-statements)
5. [Exercise 5: Switch Operations](#exercise-5-switch-operations)
6. [Exercise 6: Basic Loop Operations](#exercise-6-basic-loop-operations)
7. [Exercise 7: Advanced Loops](#exercise-7-advanced-loops)
8. [Exercise 8: 1-D Arrays](#exercise-8-1-d-arrays)
9. [Exercise 9: 2-D Arrays](#exercise-9-2-d-arrays)
10. [Exercise 10: Strings](#exercise-10-strings)
11. [Exercise 11: Math Functions and I/O Functions](#exercise-11-math-functions-and-io-functions)
12. [Exercise 12: Functions](#exercise-12-functions)
13. [Exercise 13: Functions and Recursion](#exercise-13-functions-and-recursion)
14. [Exercise 14: Structures](#exercise-14-structures)
15. [Exercise 15: File Operations using Command Line Arguments](#exercise-15-file-operations-using-command-line-arguments)
16. [A Mini Project](#a-mini-project)

---

### Exercise 1: Basics
* **Question 1:** Write a C program to print the sample text strings `"hello world"` and `"Welcome to C Programming"` using different layout configurations with escape sequences like `\n` and `\t`.
* **Question 2:** Write a program to display the data sizes and valid numerical ranges of all primary data types (`char`, `int`, `float`, `double`) supported by your C compiler.
* **Question 3:** Write a program that demonstrates how to initialize, assign values to, and print variables belonging to diverse data types.
* **Question 4:** Write a program to declare multiple variables of different data types in a single line, assign them constants, and output them with matching descriptive text labels.
* **Question 5:** Write a program that intentionally triggers a compilation warning or error by overflowing a standard data type variable (e.g., assigning a value outside the valid range of a `short int`), and document your observations.
* **Question 6:** Write a program to print a formatted layout showing your name, registration number, college, and stream using a single `printf` statement with complex escape characters.
* **Question 7:** Write a program that illustrates the use of both single-line (`//`) and multi-line (`/* ... */`) comments, ensuring code segments inside comments are ignored by the compiler.
* **Question 8:** Write a program to define and use global vs. local variables of the same name and observe how the compiler resolves variable scope during execution.
* **Question 9:** Write a program to print special symbolic characters on the console window that are normally interpreted as syntax, specifically the percentage symbol (`%`), backslash (`\`), and double quotes (`"`).
* **Question 10:** Write a program to demonstrate the use of symbolic constants using both the `#define` preprocessor directive and the `const` variable modifier, and explain their operational differences.

---

### Exercise 2: Operators (Part 1)
* **Question 1:** Write a program to accept two numerical values and demonstrate all standard arithmetic operators (`+`, `-`, `*`, `/`, `%`).
* **Question 2:** Write a program to demonstrate the evaluation behavior of logical operators (`logical AND` and `logical OR`) using different truth values.
* **Question 3:** Write a program to read a circle's radius from the keyboard, calculate its area, and output the final result in both standard floating-point format and exponential scientific notation.
* **Question 4:** Write a program to calculate Simple Interest based on user-supplied values for Principal ($P$), Rate ($R$), and Time ($T$).
* **Question 5:** Write a program to perform temperature conversion from Fahrenheit to Centigrade and vice-versa.
* **Question 6:** Write a program to accept the length and breadth of a rectangle and compute both its total surface perimeter and area.
* **Question 7:** Write a program to swap the contents of two separate numeric variables *with* the utilization of a temporary third variable.
* **Question 8:** Write a program to swap the contents of two separate numeric variables *without* utilizing or declaring any temporary third variable.
* **Question 9:** Write a program to calculate the direct straight-line distance between two coordinates $(x_1, y_1)$ and $(x_2, y_2)$ using the mathematical distance formula.
* **Question 10:** Write a program to accept the marks obtained by a student across 5 subjects, then compute and print the cumulative total marks and the final calculated average percentage.

---

### Exercise 3: Operators (Part 2)
* **Question 1:** Write a program to illustrate the practical comparison outputs of all relational operators (`<`, `>`, `<=`, `>=`, `==`, `!=`).
* **Question 2:** Write a program to read two numbers and check their equivalence using only the conditional/ternary operator (`? :`).
* **Question 3:** Write a program to demonstrate and explain the difference between the pre-increment (`++a`) and post-increment (`a++`) operations on an initialized variable.
* **Question 4:** Write a program to demonstrate and explain the difference between the pre-decrement (`--a`) and post-decrement (`a--`) operations on an initialized variable.
* **Question 5:** Write a program to compute the exact volume of a sphere, a cone, and a cylinder. Assume that dimensions are input as integers and use explicit type casting wherever necessary to retain accuracy.
* **Question 6:** Write a program to accept an integer value and use compound assignment operators (`+=`, `-=`, `*=`, `/=`, `%=`) to modify and print the variable state at each step.
* **Question 7:** Write a program to read two integers and perform bitwise manipulation operations, specifically demonstrating `Bitwise AND` (`&`), `Bitwise OR` (`|`), and `Bitwise XOR` (`^`).
* **Question 8:** Write a program to illustrate the behavioral shifts of data bits using the bitwise left-shift (`<<`) and right-shift (`>>`) operators on user-supplied unsigned integer fields.
* **Question 9:** Write a program that reads an integer and determines the number of bytes it occupies dynamically by deploying the unary `sizeof` operator.
* **Question 10:** Write a program to evaluate the following complex mathematical expression based on user inputs, strictly respecting standard C operator precedence rules:  
  $$\text{Result} = a \times b / c + (d - e) \, \% \, f$$

---

### Exercise 4: Decision Statements
* **Question 1:** Write a program to read a student's marks in six individual subjects and apply an `if-else` statement to determine and print whether they have passed or failed overall.
* **Question 2:** Write a program to calculate the real and complex roots of a quadratic equation using an `if-else` structure.
* **Question 3:** Write a program to calculate a household electricity utility bill. The program must read the starting and ending meter readings, calculate the total units consumed, and apply the following multi-tiered charging rates:
  * **1 to 100 units:** Rs 1.50 per unit.
  * **101 to 300 units:** Rs 2.00 per unit for the excess units over 100.
  * **301 to 500 units:** Rs 2.50 per unit for the excess units over 300.
  * **501 units & above:** Rs 3.25 per unit for the excess units over 500.
* **Question 4:** Write a program to check whether a user-input year is a Leap Year or a standard year by testing centurial and non-centurial criteria.
* **Question 5:** Write a program to accept three numbers from the keyboard and determine the absolute maximum/largest value using nested `if` and `else` statements.
* **Question 6:** Write a program to check whether a given integer is an even or odd number without using the modulus (`%`) operator.
* **Question 7:** Write a program that evaluates an integer input and classifies it as either a positive number, a negative number, or zero.
* **Question 8:** Write a program to read a single character from the console keyboard and classify it as an uppercase alphabet, a lowercase alphabet, a numerical digit, or a special symbol character.
* **Question 9:** Write a program to accept the cost price and selling price of an item from the user, determine if the transaction yielded a profit or a loss, and calculate the exact profit/loss percentage.
* **Question 10:** Write a program to accept three angles from the user and check whether they can form a valid triangle (the sum of all three internal angles must equal exactly 180 degrees).

---

### Exercise 5: Switch Operations
* **Question 1:** Write a menu-driven program to perform basic calculator arithmetic operations (`+`, `-`, `*`, `/`) using a `switch case` statement.
* **Question 2:** Write a program that takes an alphabet key representing VIBGYOR and displays its corresponding spectrum color name using a `switch case` statement.
* **Question 3:** Write a program to read a single alphabet character and determine if it is a vowel or a consonant using a `switch case` structure.
* **Question 4:** Write a program that inputs an integer from 1 to 7 and prints the corresponding day name of the week using a `switch case` statement.
* **Question 5:** Write a program that inputs a month number (1 to 12) and prints the total number of days contained inside that specific month, using a fall-through `switch case` optimization.
* **Question 6:** Write a program that reads a student's grade character ('A', 'B', 'C', 'D', 'F') and prints out the matching performance feedback description using a `switch` selection framework.
* **Question 7:** Write a menu-driven program that offers options to compute the area of a circle, square, or rectangle based on the integer option picked by the user.
* **Question 8:** Write a program using a `switch` statement to read an integer selection code (1 or 2) to check if a number is even or odd, or to check if it is positive or negative.
* **Question 9:** Write a program to accept a single character representing gender classification codes ('M', 'F', 'O') and output the full corresponding structural title.
* **Question 10:** Write a program that utilizes a nested `switch` configuration to manage user path workflows for a basic multi-tier college department selection system.

---

### Exercise 6: Basic Loop Operations
> ⚠️ **Note:** Complete each of the following programs using all three loop constructs: `for`, `while`, and `do-while` loops.

* **Question 1:** Write a program to isolate and calculate the sum of the individual digits of any given integer.
* **Question 2:** Write a program to check whether a given integer is a palindrome number or not.
* **Question 3:** Write a program to calculate and display all prime numbers within a user-specified numerical range.
* **Question 4:** Write a program to display the full multiplication tables from 1 to 10, but use control flow overrides to completely skip generating the tables for 3 and 5.
* **Question 5:** Write a program to accept an integer value from the user and calculate its exact mathematical Factorial value using a loop block.
* **Question 6:** Write a program to take an input integer and generate its completely reversed numeric sequence (e.g., input 1234 yields output 4321).
* **Question 7:** Write a program to test whether a given user-input integer matches the criteria for an Armstrong Number (sum of cubes of its digits equals the number itself).
* **Question 8:** Write a program to check whether a given number is a Perfect Number (equal to the sum of its proper positive divisors, excluding the number itself).
* **Question 9:** Write a program to check whether a given number is a Strong Number (the sum of the factorials of its individual digits is equal to the original number).
* **Question 10:** Write a program to compute the cumulative sum of all odd integers and the cumulative product of all even integers within a numerical boundary range input by the user.

---

### Exercise 7: Advanced Loops
* **Question 1:** Write a program to generate and print the Fibonacci series up to a user-defined limit value of $N$.
* **Question 2:** Write a program to read an integer and verify whether that specific given number belongs to the Fibonacci sequence or not.
* **Question 3:** Write a program to read two separate numbers, base $x$ and terms $n$, and then compute the exact sum of the following Geometric Progression (GP) series: $1 + x + x^2 + x^3 + \dots + x^n$.
* **Question 4:** Write a program using nested loops to print the following numerical pattern layout format:
  ```text
  1
  12
  123
  1234
* **Question 5:** Write a program using nested loop structures to render an inverted right-angled star triangle layout:
  ```
            ****
            ***
            **
            *
  ```
* **Question 6:** Write a program to generate and display Floyd’s Triangle up to a user-specified number of rows:
```
            1
            2 3
            4 5 6
            7 8 9 10
```
* **Question 7:** Write a program to print a full isosceles pyramid layout configuration using nested space-control loops:
```
               *
              ***
             *****
            *******
```
* **Question 8:** Write a program to generate the rows of Pascal’s Triangle up to a specific height limit entered by the user.
* **Question 9:** Write a program using nested loops to construct the following alphabetical pattern layout format:
```
            A
            AB
            ABC
            ABCD
```
* **Question 10:** Write a program to compute the mathematical sum calculation of the following harmonic progression series up to n terms:
```
             Sum = 1 + 1/2 + 1/3 + 1/4 + ... + 1/n
```

### EXERCISE 8: 1-D ARRAYS
----------------------------------------
Question 1: Write a program to allocate and store 10 integer elements inside a 1-D array, and subsequently print the combined sum of all contained items.
Question 2: Write a program to parse a 1-D array and extract both the absolute minimum and maximum elements present within it.
Question 3: Write a program to traverse a 1-D array and keep a total count of the number of positive values, negative values, and zero elements stored inside it.
Question 4: Write a program to find the location index of a target search value inside a 1-D array using the Linear Search technique.
Question 5: Write a program to sort a collection of array numbers in ascending order using the Bubble Sort algorithm technique.
Question 6: Write a program to find and extract the second-largest unique numerical value from a populated 1-D integer array.
Question 7: Write a program to reverse the index alignment configuration of elements stored inside a 1-D array in-place without declaring an auxiliary backup array.
Question 8: Write a program to read a 1-D array containing duplicate integer values, remove all duplicate occurrences, and shift elements to form a clean, condensed array.
Question 9: Write a program to calculate and display the individual frequency rate of occurrence for every element contained within a 1-D array.
Question 10: Write a program to read two separate, pre-sorted 1-D arrays from the user and merge them together into a third comprehensive array while preserving the sorted order.

EXERCISE 9: 2-D ARRAYS
----------------------------------------
Question 1: Write a program to perform matrix addition and matrix subtraction on two-dimensional data grids.
Question 2: Write a program to perform matrix multiplication after explicitly checking the column-to-row compatibility constraints of both input matrices.
Question 3: Write a program to read a matrix grid and display its corresponding transposed matrix.
Question 4: Write a program to parse a square matrix and compute the sum of its main (primary) diagonal and secondary diagonal elements.
Question 5: Write a program to verify whether a user-input square matrix matches the criteria for an Identity Matrix.
Question 6: Write a program to perform scalar matrix multiplication by accepting a constant multiplier value and scaling every index position in a 2-D array.
Question 7: Write a program to evaluate whether a user-supplied square matrix is a Symmetric Matrix (where the matrix equals its transpose).
Question 8: Write a program to compute and display the sum of every individual row and every individual column of a 2-D matrix grid separately.
Question 9: Write a program to analyze a 2-D matrix and check if it qualifies as a Sparse Matrix (containing more zero elements than non-zero elements).
Question 10: Write a program to extract and display only the Upper Triangular elements of a user-supplied square matrix grid, setting all lower fields to zero.

EXERCISE 10: STRINGS
----------------------------------------
Question 1: Write a program demonstrating various string manipulation techniques using standard built-in functions (such as strcpy, strcat, strlen, and strcmp).
Question 2: Write a program to read a list of multiple strings from the keyboard and output them re-arranged in ascending alphabetical order.
Question 3: Write a program to verify if a given text string is a palindrome using two distinct methods: a) with built-in string functions, and b) manually without using any library string functions.
Question 4: Write a program to manually concatenate two distinct string inputs using fundamental array loop manipulation techniques without strcat.
Question 5: Write a program to read a line of text and count the total number of vowels, consonants, digits, and white spaces present inside it.
Question 6: Write a program to manually reverse a character string input in-place without using the standard library strrev function.
Question 7: Write a program to toggle the case of every alphabet inside a string (convert lowercase to uppercase and vice-versa, leaving numbers and symbols untouched).
Question 8: Write a program to manually compare two text strings character-by-character without utilizing the library function strcmp, returning 0 if identical or the numerical difference if they diverge.
Question 9: Write a program to manually copy the data contents of a source string into a destination character array without utilizing the library function strcpy.
Question 10: Write a program to search for a specific character inside a string and output its total frequency count along with all index locations where it was detected.

EXERCISE 11: MATH FUNCTIONS AND I/O FUNCTIONS
----------------------------------------
Question 1: Write a program to read numeric parameters from the keyboard and solve calculations using the standard library functions abs(), sqrt(), floor(), ceil(), and pow().
Question 2: Write a program to capture and display single-character inputs using unformatted console functions getch() and putch().
Question 3: Write a program to read and display comprehensive text segments using the unformatted function streams getchar(), putchar(), gets(), and puts().
Question 4: Write a program using the <math.h> library to compute the trigonometric sine, cosine, and tangent values for a given angle input in degrees (convert degrees to radians first).
Question 5: Write a program to validate exponential scale shifts by calling the natural logarithm function log() and the exponential function exp() over numeric inputs.
Question 6: Write a program that demonstrates the explicit behavioral differences between using getch(), getche(), and getchar() for capturing individual characters from the terminal stream.
Question 7: Write a program to illustrate how gets() can introduce buffer overflow vulnerabilities compared to formatted scanf(), and write a safe method to read string lines.
Question 8: Write a program to demonstrate the use of advanced formatting width codes inside printf to display floating-point values aligned precisely to 2, 4, and 6 decimal places.
Question 9: Write a program that uses math utilities to find the absolute value of floating data inputs using fabs() alongside standard integer abs() executions.
Question 10: Write a program that implements a basic character masking terminal pipeline (e.g., capturing a password input character-by-character using getch() while printing asterisks * onto the active console display).

EXERCISE 12: FUNCTIONS
----------------------------------------
Question 1: Write a program to find the sum of two numbers using a basic user-defined function routine.
Question 2: Write a function to find the product of two numbers that is structured without arguments and without a return type.
Question 3: Write a function to calculate the difference between two numbers that is structured without arguments but with a return type.
Question 4: Write a function to find the sum of two numbers that is structured with arguments but coding without a return type.
Question 5: Write a function to find the product of two numbers that is structured completely with arguments and with a return type.
Question 6: Write a user-defined function named findMax that takes three floating-point parameters and returns the absolute largest number among them.
Question 7: Write a modular program containing a helper function checkPrime that accepts an integer parameter and returns 1 if prime or 0 if composite.
Question 8: Write a program with a user-defined function that evaluates whether an input parameter is an even or odd number, executing the print routine entirely from inside the helper block.
Question 9: Write a function that accepts the dimensions of a rectangle, computes its area, and transfers that calculated value back to the main() scope for printing.
Question 10: Write a modular currency conversion program that features individual standalone functions for transforming Rupees into Dollars, Euros, and Pounds based on exchange constant variables.

EXERCISE 13: FUNCTIONS AND RECURSION
----------------------------------------
Question 1: Write a program to swap the contents of two separate memory variables using two distinct signature frameworks: a) Call By Value, and b) Call By Reference.
Question 2: Create a program that computes the Factorial of a number and finds its Greatest Common Divisor (GCD) using both non-recursive loops and recursive function modules.
Question 3: Write a program to perform all foundational arithmetic operations (+, -, *, /) dynamically by manipulating memory address locations with pointers.
Question 4: Write a program to execute a matrix addition routine by addressing and traversing the 2-D coordinates using pointer references instead of array subscript indices.
Question 5: Write a program to traverse and output all individual elements of a 1-D array using a pointer step increment strategy.
Question 6: Write a user-defined function to compute the exact character length of a string by processing its memory references with a pointer loop until encountering the null terminator.
Question 7: Write a program to clone all values from a source 1-D array into a target destination array utilizing pointer arithmetic tracking workflows.
Question 8: Write a recursive function module that computes the N-th term of the Fibonacci sequence and explain how the stack frames execute.
Question 9: Write a program to search for a target value inside a sorted integer array using a recursive implementation of the Binary Search algorithm.
Question 10: Write a program that declares, initializes, and resolves value tracking using a pointer-to-pointer configuration (a Double Pointer structure ptr).

EXERCISE 14: STRUCTURES
----------------------------------------
Question 1: Write a program to create a custom user-defined structure for a bank account holder with fields for name, account number, address, and balance. Initialize and display the structured data records for five separate account holders.
Question 2: Write a program using structures to calculate the cumulative total marks of an individual student, and then evaluate the aggregate average marks for a batch of 10 students.
Question 3: Create a structure called traveler containing members for train no, coach no, seat no, source, destination, gender, age, name, and departure date. Write routines to populate and display this structure array.
Question 4: Write a program that illustrates the syntax requirement for passing an entire composite structure entity as an input argument into a function subroutine.
Question 5: Write a program to model a Book structure holding variables for title, author, pages, and price. Use an array of structures to manage a collection of 3 books and print out the books matching an user-searched author name.
Question 6: Write a program featuring a structure named Time with fields for hours, minutes, and seconds. Write an execution routine that adds two separate Time objects together, correctly adjusting for overflow parameters.
Question 7: Write a program utilizing a structure named Distance to store measurements in feet and inches. Write routines to sum up two separate Distance record tracks, converting every 12 inches into an additional foot.
Question 8: Write a program to demonstrate the operational syntax and layout of a nested structure configuration (placing a DateOfBirth structure inside an outer Employee record block).
Question 9: Write a program to test and demonstrate the explicit memory size differences between a struct definition and a union definition containing identical internal members using sizeof.
Question 10: Create an Employee structure tracking empId, name, department, and salary. Build a program to read records for 5 employees and isolate and display the full profile details of the individual drawing the highest salary.

EXERCISE 15: FILE OPERATIONS USING COMMAND LINE ARGUMENTS
----------------------------------------
Question 1: Write a standalone terminal program that copies the exact data contents of an existing source file into a newly created target destination file using argc and argv parameters.
Question 2: Write a program to open an external file stream and reverse the chronological order of the first n text characters stored inside it using command-line input variables.
Question 3: Write a command-line program that accepts a filename as an argument, opens it, and counts the exact number of characters, lines, and words contained inside the document.
Question 4: Write a program that reads a target word and a filename via command-line arguments, parses the text document, and checks whether the search word exists inside it.
Question 5: Write a terminal script program that accepts two text filenames as arguments, reads both streams, and merges their contents sequentially into a third combined output file.
Question 6: Write a program that reads an integer flag via command-line arguments along with a filename, and prints out only the first N rows of text content from that specified file.
Question 7: Write a basic file encryption terminal tool that reads a target filename via command-line parameters, shifts every character byte by a fixed numerical key, and saves the modified data back onto disk.
Question 8: Write a file utility tool using command-line arguments that appends a user-input string block to the very end of an existing text file without overwriting old data records.
Question 9: Write a program that reads two filenames via command line inputs, compares them character-by-character, and prints out whether the two files are identical or diverge.
Question 10: Write a file metadata extraction utility program using command line arguments that opens a file stream, calculates its exact total file storage footprint size in kilobytes, and outputs the metric to the user.

A MINI PROJECT
----------------------------------------
Capstone Question: Synthesize multiple modular core workflows, matrix/string arrays, pointer management rules, structure definitions, and file handling pipelines together into a cohesive, functional application solution (e.g., an automated Student Management System, a Bank Record Keeping Suite, or an Inventory Control Application).
