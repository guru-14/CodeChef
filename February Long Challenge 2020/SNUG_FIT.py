# Problem link : https://www.codechef.com/FEB20B/problems/SNUG_FIT

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    a.sort()
    b.sort()
    ans = 0
    for i in range(n):
        ans += min(a[i], b[i])
    print(ans)
