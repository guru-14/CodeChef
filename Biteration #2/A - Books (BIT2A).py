for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = [0] * n
    b[n - 1] = 0
    c = 1
    for i in range(n - 2, -1, -1):
        if a[i] == a[i + 1]:
            b[i] = b[i + 1]
            c += 1
        else:
            b[i] = c
            c += 1
    print (*b)
