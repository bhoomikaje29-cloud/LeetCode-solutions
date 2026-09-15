## Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

### Approach

I compared the characters at the same position across all strings. I continued until a character differed or one of the strings ended, and the matching characters formed the common prefix.

### Complexity

- Time: O(n × m)
- Space: O(1)

### Notes

If there is no common prefix, the result is an empty string. The solution also handles cases where all strings are identical.