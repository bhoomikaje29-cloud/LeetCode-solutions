## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store opening brackets. Whenever a closing bracket is found, I checked whether it matches the most recent opening bracket. The string is valid only when all brackets are correctly matched and the stack is empty at the end.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The stack follows the last-in-first-out principle, which makes it suitable for matching nested brackets.