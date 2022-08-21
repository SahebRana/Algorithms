# Sliding Window

## Leetcode 3: [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/)

Given a string s, find the length of the longest substring without repeating characters.

 

### Example 1:
    Input: s = "abcabcbb"
    Output: 3
    Explanation: The answer is "abc", with the length of 3.

### Example 2:
    Input: s = "bbbbb"
    Output: 1
    Explanation: The answer is "b", with the length of 1.

### Example 3:
    Input: s = "pwwkew"
    Output: 3
    Explanation: The answer is "wke", with the length of 3.


Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

### Constraints:
    0 <= s.length <= 5 * 104
    s consists of English letters, digits, symbols and spaces.

### Solution 1 (Python)

```python
class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        i, j, ans = 0, 0, 0
        n = len(s)
        seen = set()
        while i < n and j < n:
            if s[j] not in seen:
                seen.add(s[j])
                ans = max(ans, int(len(seen)))
                j += 1
            else:
                seen.remove(s[i])
                i += 1
        return ans

# Window of variable length
# Updateable hash table

```