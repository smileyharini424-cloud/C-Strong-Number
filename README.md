# C Strong Number

## Explanation

This program checks whether a given number is a strong number.

A strong number is a number in which the sum of the factorials of its digits is equal to the original number.

For example:

145 = 1! + 4! + 5!

145 = 1 + 24 + 120

145 = 145

Therefore 145 is a strong number.

## Problem Statement

Write a C program to determine whether a given integer is a strong number.

## Features

- Accepts a positive integer
- Extracts individual digits
- Calculates factorial of each digit
- Adds the factorial values
- Compares the sum with the original number
- Uses a separate factorial function

## How It Works

The program reads a number and stores its original value.

Each digit is extracted using the modulus operator.

The factorial of each digit is calculated using the factorial() function.

The factorial values are added together.

Finally the sum is compared with the original number.

If both values are equal, the number is a strong number.

## Technologies Used

- C
- GCC Compiler
- Code Editor

## Data Structure Used

No data structure is used.

## Methods Used

- main()
- factorial()
- printf()
- scanf()

## Control Structures Used

- do while loop
- for loop
- if else statement

## Operators Used

- %
- /
- +
- *
- ==
- <=

## Program Flow

Start
↓
Read number
↓
Store original number
↓
Extract last digit
↓
Calculate factorial of digit
↓
Add factorial to sum
↓
Remove last digit
↓
Repeat until all digits are processed
↓
Compare sum with original number
↓
Display result
↓
End

## Sample Input

Enter a positive integer: 145

## Sample Output

145 is a strong number.

## Sample Input 2

Enter a positive integer: 123

## Sample Output 2

123 is not a strong number.

## Time Complexity

O(d × 10)

where d is the number of digits.

Since each digit is at most 9, the factorial calculation performs a bounded number of operations.

## Space Complexity

O(1)

## Key Learning

This program introduces user-defined functions and shows how one function can be used repeatedly inside another part of a program.

## File Location

strong_number.c

## Repository Structure

C-Strong-Number/
├── README.md
└── strong_number.c

## Author

V.Harini
