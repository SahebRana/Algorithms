import sys
n, q = map(int, input().split())
p = list(map(int, input().split()))
p.sort(reverse=True)
s = sys.stdin.read().split('\n')
cs = [0]
cs.append(p[0])
for i in range(1, n):
    cs.append(cs[i]+p[i])
for i in range(q):
    x, y = map(int, s[i].split())
    print(cs[x] - cs[x-y])


# Link: https://codeforces.com/contest/1697/problem/B

# Learn Summary:
# 1.    The Sum of sorted elements between a range can be calculated from the cumulative sum
# 2.    sys.stdin.read() can be used for multi lines input