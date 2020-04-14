# Problem link : https://www.codechef.com/LTIME80B/problems/BFRIEND

for _ in range(int(input())):
    ans = 0
    n, a, b, c = map(int, input().split())
    f = list(map(int, input().split()))
    for i in range(n):
        time = abs(a - f[i]) + abs(f[i] - b) + c
        if i == 0:
            ans = time
        else:
            if time < ans:
                ans = time
    print (ans)
