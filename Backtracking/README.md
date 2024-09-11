# Backtracking

## <a href="https://leetcode.com/problems/permutations/" target="_blank">LeetCode 46. Permutations</a>


Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

 

### Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

### Example 2:

Input: nums = [0,1]
Output: [[0,1],[1,0]]
Example 3:

Input: nums = [1]
Output: [[1]]
 

### Constraints:

* 1 <= nums.length <= 6
* -10 <= nums[i] <= 10
* All the integers of nums are unique.


### Solution 1 (Python)

```python
class Solution:
    def permute(self, nums: List[int]) -> List[List[int]]:
        length_of_nums = len(nums)
        loop_length = length_of_nums - 1
        ans = []
        arr = list(nums)

        def backtrack(index):
            if(index == loop_length):
                ans.append(list(arr))
                return
            for i in range(index, length_of_nums):
                arr[index], arr[i] = arr[i], arr[index]
                backtrack(index + 1)
                arr[index], arr[i] = arr[i], arr[index]
        
        backtrack(0)
        return ans
```

---------