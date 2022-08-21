# Two Pointers

## Leetcode 977: [Squares of a Sorted Array](https://leetcode.com/problems/squares-of-a-sorted-array/)

Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.
 

### Example 1:
    Input: nums = [-4,-1,0,3,10]
    Output: [0,1,9,16,100]
    Explanation: After squaring, the array becomes [16,1,0,9,100].
    After sorting, it becomes [0,1,9,16,100].
### Example 2:
    Input: nums = [-7,-3,2,3,11]
    Output: [4,9,9,49,121]
 

### Constraints:

    1 <= nums.length <= 104
    -104 <= nums[i] <= 104
    nums is sorted in non-decreasing order.
 

### Follow up: 
Squaring each element and sorting the new array is very trivial, could you find an O(n) solution using a different approach?

### Solution 1 (Python)

```python
class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        result = [0] * len(nums)
        l, r = 0, len(nums) - 1 # initial index
        while l <= r:
            left, right = abs(nums[l]), abs(nums[r])
            if left > right:
                result[r - l] = left * left
                l += 1
            else:
                result[r - l] = right * right
                r -= 1
        return result
    
    

    
#Note: Comparing Maxable numbers and filling square from end
```
## Leetcode 189: [Rotate Array](https://leetcode.com/problems/rotate-array/)

Given an array, rotate the array to the right by k steps, where k is non-negative.

 

### Example 1:

    Input: nums = [1,2,3,4,5,6,7], k = 3
    Output: [5,6,7,1,2,3,4]
    Explanation:
    rotate 1 steps to the right: [7,1,2,3,4,5,6]
    rotate 2 steps to the right: [6,7,1,2,3,4,5]
    rotate 3 steps to the right: [5,6,7,1,2,3,4]
### Example 2:

    Input: nums = [-1,-100,3,99], k = 2
    Output: [3,99,-1,-100]
    Explanation: 
    rotate 1 steps to the right: [99,-1,-100,3]
    rotate 2 steps to the right: [3,99,-1,-100]
 

### Constraints:

  * 1 <= nums.length <= 105
* -231 <= nums[i] <= 231 - 1
* 0 <= k <= 105

 

### Follow up:

* Try to come up with as many solutions as you can. There are at least three different ways to solve this problem.
* Could you do it in-place with O(1) extra space?

### Solution 1 (Python)
```python
class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        n = len(nums)
        k = k % n
        a = nums[n-k: n] + nums[0:n-k]
        for i in range(n):
            nums[i] = a[i]
```

## Leetcode 283: [Move Zeroes](https://leetcode.com/problems/move-zeroes/)
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

### Example 1:

    Input: nums = [0,1,0,3,12]
    Output: [1,3,12,0,0]
### Example 2:

    Input: nums = [0]
    Output: [0]
 

### Constraints:

* 1 <= nums.length <= 104
* -231 <= nums[i] <= 231 - 1


### Follow up: 
Could you minimize the total number of operations done?

### Solution 1 (Python)
```python
class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        
        n = len(nums)
        start = cur = 0
        
        while(cur < n):
            if(nums[cur] != 0):
                nums[start], nums[cur] = nums[cur], nums[start]
                start += 1
            cur += 1
```
## Leetcode 167: [Two Sum II - Input Array Is Sorted](https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/)

## Leetcode 344: [Reverse String](https://leetcode.com/problems/reverse-string/)

## Leetcode 557: [Reverse Words in a String III](https://leetcode.com/problems/reverse-words-in-a-string-iii/)
