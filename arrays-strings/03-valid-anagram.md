## Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

### Approach

I used a frequency array of size 26 to count the occurrences of each lowercase letter in the first string. I then decreased the count for each character in the second string and checked whether all counts became zero.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The frequency array helps compare the characters efficiently. A single-character string is also handled correctly.