def permutations(arr):
    if len(arr) == 0:
        return [[]]
    else:
        result = []
        for i in range(len(arr)):
            rest = arr[:i] + arr[i + 1:]
            # print('rest',rest)
            for perm in permutations(rest):
                result.append([arr[i]] + perm)
        # print('result', result)
        return result

# Example usage:
elements = [1, 2, 3]
all_permutations = permutations(elements)
print(all_permutations)
