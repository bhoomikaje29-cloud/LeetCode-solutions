## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used two pointers, left and right, to define the search range. I checked the middle element and moved the search range to the left or right half depending on the target value.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

Binary search works on a sorted array. If the target is not present, the function returns -1.