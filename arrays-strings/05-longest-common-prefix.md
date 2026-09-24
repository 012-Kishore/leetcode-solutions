# Longest Common Prefix

- **Difficulty:** Easy
- **LeetCode:** https://leetcode.com/problems/longest-common-prefix/

## Approach

Compare the strings character by character and keep only the common prefix shared by all strings.

## Time Complexity

O(n × m)

## Space Complexity

O(m)

## Notes / Edge Cases

- If there is no common prefix, the result is an empty string.
- Tested with `{"flower", "flow", "flight"}` → `fl`
- Tested with `{"dog", "racecar", "car"}` → empty string