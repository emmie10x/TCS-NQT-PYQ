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

---

## Problem 6: Minimum Value in Matrix with Validation

### Problem Statement

Write a program to find the minimum value in a given matrix.

1. Take two integers **m** and **n** as input representing the number of rows and columns.
2. If **m <= 0** or **n <= 0**, print **invalid input**.
3. Otherwise, read the matrix elements.
4. Print the minimum value present in the matrix.

### Input Format

First line contains two integers **m** and **n**.  
Next **m** lines contain **n** space-separated integers representing the matrix.

### Output Format

Print **invalid input** if matrix size is invalid.  
Otherwise, print the minimum value in the matrix.

### Constraints

-10^6 ≤ matrix element ≤ 10^6  
-10^3 ≤ m, n ≤ 10^3  

### Sample Input

3 3  
1 2 3  
3 -3 4  
-1 2 3  

### Sample Output

-3  

### Explanation

The matrix elements are checked one by one.  
The smallest value in the matrix is **-3**.

### Sample Input

0 3  

### Sample Output

invalid input  

### Explanation

Since **m = 0**, the matrix size is invalid.

---
---

## Problem 7: 2D Array Row Order Based on Even/Odd Row Index

### Problem Statement

Write a program to print the elements of a 2D array based on row index rules.

1. Take two integers **m** and **n** as input representing the number of rows and columns.
2. Read the matrix elements.
3. If a row index is **even (0, 2, 4, ...)**, print elements from **left to right**.
4. If a row index is **odd (1, 3, 5, ...)**, print elements from **right to left**.
5. Print all elements in a single line separated by spaces.

---

### Input Format

First line contains two integers **m** and **n**.  
Next **m** lines contain **n** space-separated integers representing the matrix.

---

### Output Format

Print the elements in a single line separated by spaces following the row-order rule.

---

### Constraints

-10^4 ≤ matrix element ≤ 10^4  
1 ≤ m, n ≤ 100  

---

### Sample Input

4 4  
1 2 3 4  
5 6 7 8  
9 10 11 12  
13 14 15 16  

---

### Sample Output

1 2 3 4 8 7 6 5 9 10 11 12 16 15 14 13  

---

### Explanation

Row 0 → Even index → Printed left to right → 1 2 3 4  
Row 1 → Odd index → Printed right to left → 8 7 6 5  
Row 2 → Even index → Printed left to right → 9 10 11 12  
Row 3 → Odd index → Printed right to left → 16 15 14 13  

All elements are printed in a single line following the given pattern.

---

---

## Problem 8: Permutations of a String

### Problem Statement

Write a program to find the total number of distinct permutations of a given string.

1. Take a string **S** as input.
2. If the string contains duplicate characters, count only distinct permutations.
3. Print the total number of distinct permutations.

---

### Input Format

A single line containing a string **S** of length **n**.

---

### Output Format

Print an integer representing the total number of distinct permutations.

---

### Constraints

1 ≤ length of S ≤ 10  
S contains only uppercase English letters (A–Z)  

---

### Sample Input

ABC

### Sample Output

6

---

### Explanation

All permutations of ABC are:

ABC  
ACB  
BAC  
BCA  
CAB  
CBA  

Total distinct permutations = 6  

---

### Sample Input

AAB

### Sample Output

3

---

### Explanation

Permutations of AAB are:

AAB  
ABA  
BAA  

Although total permutations considering positions are 6 (3!),  
since two characters are identical, only 3 permutations are distinct.

---

### Approach

If all characters are unique:

Total permutations = n!

If duplicates exist:

Total distinct permutations =  

n! / (f₁! × f₂! × f₃! × ...)

Where:
- n = length of string  
- f₁, f₂, ... are frequencies of repeating characters  

---

# Problem 9: Anagram Checker

## Problem Statement

You are given two strings **str1** and **str2**.  
Your task is to determine whether the given strings are anagrams of each other or not.

Two strings are considered **anagrams** if they contain the same characters with the same frequencies, possibly in a different order.

---

## Input Format

- The first line contains string `str1`
- The second line contains string `str2`

---

## Output Format

- Print `"Anagrams"` if both strings are anagrams.
- Print `"Not Anagrams"` otherwise.

---

## Constraints

- 1 ≤ length of str1, str2 ≤ 10^5  
- All characters are lowercase English alphabets.

---

## Sample Input 1

```
listen
silent
```

## Sample Output 1

```
Anagrams
```

---

## Sample Input 2

```
hello
world
```

## Sample Output 2

```
Not Anagrams
```

---

# Approach 1: Sorting Method

## Explanation

1. If lengths of both strings are different → return `Not Anagrams`
2. Sort both strings
3. Compare sorted strings
4. If equal → `Anagrams`, else → `Not Anagrams`

### Time Complexity
O(n log n)

### Space Complexity
O(1)

## C++ Code (Sorting Method)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.length() != s2.length()) {
        cout << "Not Anagrams" << endl;
        return 0;
    }

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if (s1 == s2)
        cout << "Anagrams" << endl;
    else
        cout << "Not Anagrams" << endl;

    return 0;
}
```

---

# Approach 2: Frequency Array (Optimized Approach)

## Explanation

Since the strings contain only lowercase letters:

1. Create an integer array of size 26 (for letters a–z)
2. Increase count for characters in first string
3. Decrease count for characters in second string
4. If all values in array become 0 → strings are anagrams

### Time Complexity
O(n)

### Space Complexity
O(1)

## C++ Code (Optimized Method)

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;

    if (s1.length() != s2.length()) {
        cout << "Not Anagrams" << endl;
        return 0;
    }

    int freq[26] = {0};

    for (int i = 0; i < s1.length(); i++) {
        freq[s1[i] - 'a']++;
        freq[s2[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (freq[i] != 0) {
            cout << "Not Anagrams" << endl;
            return 0;
        }
    }

    cout << "Anagrams" << endl;
    return 0;
}
```

---

# Interview Explanation (Short Version)

Since the strings contain only lowercase characters,  
I used a frequency array of size 26.

I incremented the count for characters of the first string and decremented for the second string.  

If all values in the array are zero at the end, it means both strings have identical character frequencies, hence they are anagrams.

Time Complexity: O(n)  
Space Complexity: O(1)

---

# Final Recommendation

For lowercase alphabets → Use Frequency Array (Best Solution)  
For mixed characters → Use unordered_map

---

---

## Problem 10: Standard Deviation of an Array

### Problem Statement

Write a program to calculate the standard deviation of a given array of integers.

The standard deviation is calculated using the formula:

σ = √( Σ (xi − mean)² / n )

Where:
- xi is each element of the array  
- mean is the average of all elements  
- n is the number of elements  

Print the standard deviation rounded to two decimal places.

---

### Input Format

First line contains an integer **n** — the number of elements.  
Second line contains **n** space-separated integers.

---

### Output Format

Print the standard deviation rounded to two decimal places.

---

### Constraints

1 ≤ n ≤ 10^5  
-10^5 ≤ array[i] ≤ 10^5  

---

### Sample Input

5  
2 4 4 4 5  

### Sample Output

0.98  

---

### Explanation

Mean = (2 + 4 + 4 + 4 + 5) / 5 = 3.8  

Squared differences:

(2 − 3.8)² = 3.24  
(4 − 3.8)² = 0.04  
(4 − 3.8)² = 0.04  
(4 − 3.8)² = 0.04  
(5 − 3.8)² = 1.44  

Sum of squared differences = 4.8  

Variance = 4.8 / 5 = 0.96  

Standard deviation = √0.96 = 0.98  

---

### Sample Input

5  
1 1 1 1 1  

### Sample Output

0.00  

---

### Approach

1. Calculate the sum of all elements.
2. Compute the mean = sum / n.
3. For each element, calculate (xi − mean)² and add them.
4. Divide the total by n to get variance.
5. Take square root of variance to get standard deviation.
6. Print result with two decimal precision.

---

### C++ Implementation

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    double sum = 0;

    // Input and sum calculation
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    // Mean
    double mean = sum / (double)n;

    // Calculate squared differences
    double sd = 0;
    for(auto i : arr) {
        double temp = (double)i - mean;
        sd += temp * temp;
    }

    // Variance
    sd = sd / (double)n;

    // Standard deviation
    cout << fixed << setprecision(2) << sqrt(sd);

    return 0;
}
