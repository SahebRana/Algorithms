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