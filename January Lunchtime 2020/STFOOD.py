# Problem link : https://www.codechef.com/LTIME80B/problems/STFOOD

for _ in range(int(input())):
    n = int(input())
    ans = 0
    for _ in range(n):
        s, p, v = map(int, input().split())
        s += 1
        p //= s
        profit = p * v
        if profit > ans:
            ans = profit
    print (ans)
