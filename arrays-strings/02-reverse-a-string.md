## Problem: Reverse a String (Easy)

**Link:** https://leetcode.com/problems/reverse-string/

### Approach

I used two pointers, one starting from the beginning of the string and the other from the end. I swapped the characters at these positions and moved the pointers toward the center until they met.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The string is reversed in place without using another array. A single-character string is an edge case and does not require any swap.