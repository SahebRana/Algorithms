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

## Leetcode 567: [Permutation in String](https://leetcode.com/problems/permutation-in-string/)

Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

 

### Example 1:
    Input: s1 = "ab", s2 = "eidbaooo"
    Output: true
    Explanation: s2 contains one permutation of s1 ("ba").

### Example 2:
    Input: s1 = "ab", s2 = "eidboaoo"
    Output: false
 

### Constraints:
- 1 <= s1.length, s2.length <= 104
- s1 and s2 consist of lowercase English letters.

### Solution 1 (Java)

```java
// From tutorial 6


public class Solution {
    public boolean checkInclusion(String s1, String s2) {
        if (s1.length() > s2.length())
            return false;
        int[] s1map = new int[26];
        int[] s2map = new int[26];
        for (int i = 0; i < s1.length(); i++) {
            s1map[s1.charAt(i) - 'a']++;
            s2map[s2.charAt(i) - 'a']++;
        }
        
        int count = 0;
        for (int i = 0; i < 26; i++)
            if (s1map[i] == s2map[i])
                count++;
                
        for (int i = 0; i < s2.length() - s1.length(); i++) {
            int r = s2.charAt(i + s1.length()) - 'a', l = s2.charAt(i) - 'a';
            if (count == 26)
                return true;
            s2map[r]++;
            if (s2map[r] == s1map[r])
                count++;
            else if (s2map[r] == s1map[r] + 1)
                count--;
            s2map[l]--;
            if (s2map[l] == s1map[l])
                count++;
            else if (s2map[l] == s1map[l] - 1)
                count--;
        }
        return count == 26;
    }
}
```