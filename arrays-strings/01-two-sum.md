## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a nested loop to check every possible pair of numbers in the array. For each pair, I checked whether their sum is equal to the target. When the pair is found, I return their indices.

### Complexity

- Time: O(n²)
- Space: O(1)

### Notes

The same element cannot be used twice, so the second loop starts from `i + 1`.
