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

## Problem 4: Tower of Hanoi – Number of Moves

### Problem Statement

Write a program that determines the minimum number of moves required to solve the Tower of Hanoi problem.

1. Take an integer **n** as input representing the number of disks.
2. Calculate the minimum number of moves required to transfer all disks from the source rod to the destination rod.
3. Do not print the actual sequence of moves.
4. Print only the total number of moves.

### Input Format

A single integer **n** representing the number of disks.

### Output Format

A single integer representing the minimum number of moves required.

### Constraints

1 ≤ n ≤ 30

### Sample Input

3

### Sample Output

7

### Explanation

The minimum number of moves required is:

2ⁿ − 1

For n = 3:

2³ − 1 = 7

---

## Problem 5: Most Frequent Height Difference

### Problem Statement

Write a program that determines the most frequent absolute difference between adjacent tree heights.

1. Take an integer **n** as input representing the number of trees.
2. Take **n** space-separated integers representing the heights of the trees.
3. Calculate the absolute difference between every pair of adjacent trees.
4. Print the difference that occurs the maximum number of times.
5. If any height is negative, print **invalid**.
6. If all differences occur only once, print **non**.

### Input Format

First line contains a single integer **n**.  
Second line contains **n** space-separated integers representing tree heights.

### Output Format

Print the most frequent absolute difference.  
Print **invalid** if any height is negative.  
Print **non** if all differences occur only once.

### Constraints

2 ≤ n ≤ 10^5  
−10^9 ≤ height ≤ 10^9

### Sample Input

5  
2 4 6 8 10

### Sample Output

2

### Explanation

The absolute differences between adjacent trees are:

|4 − 2| = 2  
|6 − 4| = 2  
|8 − 6| = 2  
|10 − 8| = 2  

The difference **2** occurs 4 times, which is the maximum frequency.
