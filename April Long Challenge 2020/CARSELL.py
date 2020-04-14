# Problem link : https://www.codechef.com/APRIL20B/problems/CARSELL

mod = 1000000007
for _ in range(int(input())):
    n = int(input())
    p = list(map(int, input().split()))
    p.sort()
    c = 0; ans = 0;
    for i in range(n - 1, -1, -1):
        p[i] -= c
        if p[i] <= 0:
            break
        ans = (ans + p[i]) % mod
        c += 1
    print (ans)
