def generate_combinations(nums, k):
    def backtrack(start, path):
        if len(path) == k:
            # A valid combination is found, add it to the result
            result.append(path[:])
            return

        for i in range(start, len(nums)):
            path.append(nums[i])
            # Recur for the next start position
            backtrack(i + 1, path)
            # Backtrack and remove the last element to explore other possibilities
            path.pop()  # That means the path length will not be larger than k

    result = []
    backtrack(0, [])
    return result

# Example usage for set {1, 2, 3} and k = 2
elements = [1, 2, 3]
k = 2
all_combinations = generate_combinations(elements, k)
print(all_combinations)
