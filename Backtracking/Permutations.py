class Solution:
    def permute(self, nums: list[int]) -> list[list[int]]:
        length_of_nums = len(nums)
        loop_length = length_of_nums - 1
        ans = []
        arr = list(nums)

        def backtrack(index):
            if index == loop_length:
                ans.append(list(arr))
                return
            for i in range(index, length_of_nums):
                arr[index], arr[i] = arr[i], arr[index]
                backtrack(index + 1)
                arr[index], arr[i] = arr[i], arr[index]

        backtrack(0)
        return ans

# Sample input
sample_input = [1, 2, 3]

# Create an instance of the Solution class
solution = Solution()

# Call the permute method with the sample input
result = solution.permute(sample_input)

# Print the result
print(result)