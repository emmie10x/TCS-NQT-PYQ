# TCS NQT Practice Problems (C++)

This repository contains solutions to TCS NQT coding practice problems implemented in C++.

## Problem 1: Prime Index Sum Calculator

### Problem Statement

Write a program that takes two integers X and Y as input.

1. Find the Xth prime number and call it A.
2. Find the Yth prime number and call it B.
3. Compute the value of C using the formula:

C = (A + B) - 1

4. Print the value of C.

### Input Format
Two space-separated integers X and Y.

### Output Format
A single integer representing the value of C.

### Constraints
1 ≤ X, Y ≤ 10^4

### Sample Input
2 3

### Sample Output
7

---

## Problem 2: Prime Digit Sum Multiplication

### Problem Statement

Write a program to perform the following tasks:

1. Take two positive integers m and n as input.
2. Find the m-th and n-th prime numbers.
3. For each of these prime numbers, calculate the sum of its digits repeatedly until the result becomes a single digit.
4. Let the digit sum of the m-th prime be m1.
5. Return the value of:

m × m1

Note: Even though n1 is computed, only m × m1 is returned.

### Input Format
Two space-separated positive integers m and n.

### Output Format
A single integer representing m × m1.

### Constraints
1 ≤ m, n ≤ 1000

### Sample Input
5 6

### Sample Output
10
