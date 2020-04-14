# Problem link : https://www.codechef.com/JAN20B/problems/CHFDORA

for _ in range(int(input())):
    n, m = map(int, input().split())
    a = []
    for i in range(n):
        l = list(map(int, input().split()))
        a.append(l)
    ans = n * m
    for i in range(1, n - 1):
        for j in range(1, m - 1):
            x1 = j - 1
            x2 = j + 1
            y1 = i - 1
            y2 = i + 1
            while (x1 >= 0 and x2 < m and y1 >= 0 and y2 < n):
                if (a[i][x1] == a[i][x2] and a[y1][j] == a[y2][j]):
                    ans += 1
                else:
                    break
                x1 -= 1
                x2 += 1
                y1 -= 1
                y2 += 1
    print (ans)
