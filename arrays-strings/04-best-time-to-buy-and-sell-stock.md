# Best Time to Buy and Sell Stock

- **Difficulty:** Easy
- **LeetCode:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach

Keep track of the minimum price seen so far. For each price, calculate the profit if we sell on that day and update the maximum profit.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Notes / Edge Cases

- If prices only decrease, the maximum profit is 0.
- Tested with `{7, 1, 5, 3, 6, 4}` → `5`
- Tested with `{7, 6, 4, 3, 1}` → `0`