"""
Find the maximum profit of shareholders from the given rates of shares.
Shareholders can buy or sell shares in a day.

input: [2,3,1,5]
output: 5
input: [1,2,3,4,5,6,7,8,9]
output: 8
"""


def max_profit(prices):
    total_profit = 0

    for i in range(1, len(prices)):
        if prices[i] > prices[i - 1]:
            total_profit += prices[i] - prices[i - 1]

    return total_profit


# Test cases
input1 = [2, 3, 1, 5]
output1 = max_profit(input1)
print("Output for input1:", output1)  # Output should be 5

input2 = [1, 2, 3, 4, 5, 6, 7, 8, 9]
output2 = max_profit(input2)
print("Output for input2:", output2)  # Output should be 8


# Similar Problem:
# https://www.geeksforgeeks.org/maximum-profit-by-buying-and-selling-a-share-at-most-k-times/