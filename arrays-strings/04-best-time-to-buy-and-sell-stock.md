## Problem: Best Time to Buy and Sell Stock (Easy)

**Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

### Approach

I kept track of the minimum price seen so far while scanning the array from left to right. For each price, I calculated the possible profit and updated the maximum profit whenever a better profit was found.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The stock must be bought before it is sold. If the prices continuously decrease, the maximum profit remains 0.