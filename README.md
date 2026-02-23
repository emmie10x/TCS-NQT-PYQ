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

---

## Problem 3: Temperature Classification and Average

### Problem Statement

Write a program that takes two temperature values as input and performs the following tasks:

1. Classify each temperature based on the following rules:
   - If temperature < 10 → print "it's very cool"
   - If 10 ≤ temperature ≤ 20 → print "it's cold"
   - If temperature > 20 → print "it's warm"

2. Print the classification for both temperatures (each on a new line).

3. Calculate and print the average of the two temperatures.

4. Print the two temperatures in reverse order.

### Input Format
Two space-separated integers representing temperature values.

### Output Format
Line 1 → Classification of first temperature  
Line 2 → Classification of second temperature  
Line 3 → Average  
Line 4 → Temperatures in reverse order  

### Sample Input
5 25

### Sample Output
it's very cool  
it's warm  
15.0  
25 5

---

Tower of Hanoi – Number of Moves
Problem Statement

Given an integer n representing the number of disks in the Tower of Hanoi problem, determine the total number of moves required to transfer all disks from the source rod to the destination rod.

You are not required to print the actual moves. Only print the total number of moves needed to solve the problem.

Input Format

A single integer n — the number of disks.

Output Format

Print a single integer representing the minimum number of moves required.

Constraints
1 ≤ n ≤ 30
Example 1
Input
1
Output
1
Explanation

With only 1 disk, it takes exactly 1 move.

Example 2
Input
3
Output
7
Explanation

The minimum number of moves required to solve the Tower of Hanoi problem with n disks is:

2^n - 1

For n = 3:

2^3 - 1 = 7
