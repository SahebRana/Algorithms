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

        