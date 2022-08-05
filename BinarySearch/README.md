# Binary Search

## <a href="https://leetcode.com/problems/first-bad-version/" target="_blank">Leetcode 704</a>

Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

 

### Example 1:

Input: nums = [-1,0,3,5,9,12], target = 9

Output: 4

Explanation: 9exists in nums and its index is 4

### Example 2:

Input: nums = [-1,0,3,5,9,12], target = 2

Output: -1

Explanation: 2 does not exist in nums so return -1
 

### Constraints:

* 1 <= nums.length <= 104
* -104 < nums[i], target < 104
* All the integers in nums are unique.
* nums is sorted in ascending order.


### Solution 1 (Python)

```python
class Solution:
    def search(self, nums: List[int], target: int) -> int:
        left, right = 0, len(nums) - 1
        while left <= right:
            pivot = left + (right - left) // 2
            if nums[pivot] == target:
                return pivot
            if target < nums[pivot]:
                right = pivot - 1
            else:
                left = pivot + 1
        return -1
```

---------

## Leetcode 278: <a href="https://leetcode.com/problems/first-bad-version/" target="_blank">First Bad Version</a>

You are a product manager and currently leading a team to develop a new product. Unfortunately, the latest version of your product fails the quality check. Since each version is developed based on the previous version, all the versions after a bad version are also bad.

Suppose you have n versions [1, 2, ..., n] and you want to find out the first bad one, which causes all the following ones to be bad.

You are given an API bool isBadVersion(version) which returns whether version is bad. Implement a function to find the first bad version. You should minimize the number of calls to the API.

 

### Example 1:

Input: n = 5, bad = 4

Output: 4

Explanation:

call isBadVersion(3) -> false

call isBadVersion(5) -> true

call isBadVersion(4) -> true

Then 4 is the first bad version.

### Example 2:

Input: n = 1, bad = 1

Output: 1
 

### Constraints:

* 1 <= bad <= n <= 231 - 1 

### Solution 1 (Python)

```python
# The isBadVersion API is already defined for you.
# def isBadVersion(version: int) -> bool:

class Solution:
    def firstBadVersion(self, n: int) -> int:
        start, end = 1, n
        
        while(start < end):
            mid = (start + end) // 2
            if(isBadVersion(mid)):
                end = mid
            else:
                start = mid + 1
        return start
    
    
    
#Note: It has some different logic than binary search, value should be checked
```
------

## Leetcode 35: [Search Insert Position](https://leetcode.com/problems/search-insert-position/)

Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

### Example 1:

    Input: nums = [5,7,7,8,8,10], target = 8
    Output: [3,4]
### Example 2:

    Input: nums = [5,7,7,8,8,10], target = 6
    Output: [-1,-1]
### Example 3:

    Input: nums = [], target = 0
    Output: [-1,-1]
 

### Constraints:

* 0 <= nums.length <= 105
* -109 <= nums[i] <= 109
* nums is a non-decreasing array.
* -109 <= target <= 109

### Solution 1 (Python)
```python
class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        start, end = 0, len(nums) - 1
        
        while(start <= end):
            mid = (start + end) // 2
            if(nums[mid] == target):
                return mid
            elif(nums[mid] < target):
                start = mid + 1
            else:
                end = mid - 1
                
        return mid if nums[mid] > target else mid + 1
```

