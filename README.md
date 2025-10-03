# Implementation of Recursion in C++

## Objective
Explore how recursion solves problems by defining functions that call themselves, applying it to factorials, summing integers, reversing strings, and reversing digits.

Software used: MinGW C++ compiler, Visual Studio Code, online C/C++ compiler.

***

## Program 1 Factorial using recursion
### Explanation and theory
This program computes the factorial of an input number via a self-referential function. The function returns 1 at the base case (when the argument equals 1) and otherwise returns the current number multiplied by the function called on the previous integer. In main, the user’s input is forwarded to this function and the product is displayed. The approach is concise and mirrors the mathematical definition of factorial, though for very large inputs an iterative approach or big-integer handling may be preferable.

### Algorithm
- Start
- Read integer d
- If d equals 1, return 1
- Otherwise, return d × funf(d − 1)
- Output the result
- End

***

## Program 2 Recursive sum of first n integers
### Explanation and theory
This code totals the first d natural numbers using a recursive breakdown. The function stops at 1 (base condition) and otherwise adds the current number to the sum produced by calling itself on d − 1. The main routine accepts d, invokes the function, and shows the sum. While the recursion is straightforward, for larger d you might use a loop or the direct formula n(n+1)/2 for efficiency.

### Algorithm
- Start
- Read integer d
- If d equals 1, return 1
- Else return d + funf(d − 1)
- Print the computed sum
- End

***

## Program 3 Reverse a string via recursion
### Explanation and theory
This routine outputs a string in reverse order by recursing to the end of the character array and printing on the way back. The function advances through the string until it reaches the null terminator, and during the unwind phase, prints each character, producing a reversed sequence. The main program captures a string and passes it to the recursive function to display the reverse.

### Algorithm
- Start
- Input string d
- If current character is not '\0', call function with pointer advanced by one
- After the recursive call returns, print the current character
- Show the reversed output
- End

***

## Program 4 Reverse digits of an integer using recursion
### Explanation and theory
This program prints an integer’s digits in reverse by processing the last digit first. The function emits i % 10, then recurses on i / 10, stripping one digit each step. When i reaches 0, recursion stops. The main function reads a number and invokes the routine to display the reversed digit sequence.

### Algorithm
- Start
- Read integer i
- If i > 0, print i % 10
- Recurse with i / 10
- Display the reversed digits
- End

***

## Conclusion
These four examples showcase recursion as a clear strategy for breaking problems into smaller subproblems: multiplying down for factorials, adding down for sums, unwinding characters to reverse strings, and peeling digits to reverse numbers. Each illustrates a tight mapping between a recursive definition and an implementation, emphasizing when and how recursion can yield simple, readable solutions.
