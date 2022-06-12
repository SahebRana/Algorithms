t = int(input())

for i in range(t):
    n = int(input())
    if(n % 4 == 0):
        print('YES')
        lastElement = 3 * n // 2 -1
        sequence = [k for k in range(2, n + 1, 2)] + [k for k in range(1, n - 2, 2)] + [lastElement]
        print(' '.join(map(str, sequence)))
        
    else:
        print("NO")


# Link: https://codeforces.com/problemset/problem/1343/B

# Learn Summary: 
# 1.    The sum of odd numbers may be odd or even alternatively
# 2.    The sum of even numbers is always even
