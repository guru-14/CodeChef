# Problem link : https://www.codechef.com/LTIME79B/problems/STUPMACH

for _ in range(int(input())):
    n = int(input())
    s = list(map(int, input().split()))
    ans = 0
    filled = 0
    m = [s[0]]
    ind = [0]
    for i in range(1, n):
        if s[i] < m[i - 1]:
            m.append(s[i])
            ind.append(i)
        else:
            m.append(m[i - 1])
            ind.append(ind[i - 1])
    i = n - 1
    while i > -1:
        ans += (i + 1) * (m[i] - filled)
        filled = m[i]
        i = ind[i] - 1
    print (ans)
