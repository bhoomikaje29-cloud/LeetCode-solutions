## Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

### Approach

I used a position variable to place all non-zero elements at the beginning of the array while maintaining their original order. After placing all non-zero elements, I filled the remaining positions with zeroes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The solution modifies the array in place and keeps the relative order of the non-zero elements unchanged.