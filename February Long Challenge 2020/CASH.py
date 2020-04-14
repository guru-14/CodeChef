# Problem link : https://www.codechef.com/FEB20B/problems/CASH

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    
    ans = 0

    rem = []
    fill = []
    for i in range(n):
        rem.append(a[i] % k)
        fill.append(k - rem[i])

    for i in range(1, n):
        rem[i] += rem[i - 1]
        fill[i] += fill[i - 1]

    for i in range(n):
        r = rem[i]
        f = fill[n - 1] - fill[i]
        if r > f:
            ans = r - f
            break
            
    if(ans % k == 0):
        ans = 0
    print (ans)
