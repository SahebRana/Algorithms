class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        n = len(nums)
        k = k % n
        a = nums[n-k: n] + nums[0:n-k]
        for i in range(n):
            nums[i] = a[i]
        
        