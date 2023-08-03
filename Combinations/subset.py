def generate_subsets(nums):
    def backtrack(start, path):
        result.append(path[:])

        for i in range(start, len(nums)):
            path.append(nums[i])
            # Recur with the next start position to include the current element
            backtrack(i + 1, path)
            # Backtrack and remove the last element to exclude the current element
            path.pop()

    result = []
    backtrack(0, [])
    return result


# Example usage for set {1, 2, 3}
elements = [1, 2, 3]
all_subsets = generate_subsets(elements)
print(all_subsets)
