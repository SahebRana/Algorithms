n, m = map(int, input().split())
a = list(map(int, input().split()))
a.sort()
sm = 0
i=0
while  i < m and a[i] < 0:
    sm += a[i]
    i +=1
print(-1 * sm)

# Link: https://codeforces.com/problemset/problem/34/B
#
# 1.    Short circuit logic should be implemented correctly, in this problem if I use a[i] < 0 first, it will exit list limit