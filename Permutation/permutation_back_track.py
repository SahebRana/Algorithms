def generate_permutations(nums):
    result = []
    def backtrack(start):
        if start == len(nums):
            # A valid permutation is found, add it to the result
            result.append(nums[:])
            return

        for i in range(start, len(nums)):
            # Swap the current element with the start element
            nums[start], nums[i] = nums[i], nums[start]
            # Recur for the next start position
            backtrack(start + 1)
            # Backtrack and undo the swap to explore other possibilities
            nums[start], nums[i] = nums[i], nums[start]

    backtrack(0)
    return result


# Example usage:
elements = [1, 2, 3]
all_permutations = generate_permutations(elements)
print(all_permutations)
