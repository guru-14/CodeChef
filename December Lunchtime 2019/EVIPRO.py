# Problem link : https://www.codechef.com/LTIME79B/problems/EVIPRO

def f(s, l, r):
    u = list(s)
    for i in range(l, r + 1):
        if u[i] == '1':
            u[i] = '0'
        else:
            u[i] = '1'
    c = 0
    for i in range(len(u) - 1):
        if u[i] == u[i + 1]:
            c += 1
    return c

for _ in range(int(input())):
    s = input()
    ans = 0
    for i in range(len(s)):
        for j in range(i, len(s)):
            x = f(s, i, j)
            ans += x
    print(ans)
