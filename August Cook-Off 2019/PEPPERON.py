for _ in range(int(input())):
    n = int(input())
    x = []
    y = []
    for _ in range(n):
        pep = input()
        x.append(list(pep[ : n // 2]).count("1"))
        y.append(list(pep[n // 2 : ]).count("1"))
    p1 = sum(x)
    p2 = sum(y)
    ans = abs(p1 - p2)
    for i in range(n):
        p1_new = (p1 - x[i]) + y[i]
        p2_new = (p2 - y[i]) + x[i]
        temp = abs(p1_new - p2_new)
        if temp < ans:
            ans = temp
    print (ans)
