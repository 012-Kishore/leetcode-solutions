# Valid Anagram

- **Difficulty:** Easy
- **LeetCode:** https://leetcode.com/problems/valid-anagram/

## Approach

Use a frequency array of size 26 to count the characters in both strings. Increment the count for characters in the first string and decrement it for characters in the second string. If all counts are zero, the strings are anagrams.

## Time Complexity

O(n)

## Space Complexity

O(1)

## Notes / Edge Cases

- Both strings must have the same length.
- Different character frequencies mean the strings are not anagrams.
- Tested with a typical case: `anagram`, `nagaram` → `true`
- Tested with an edge case: `rat`, `car` → `false`