for _ in range(int(input())):
    n = int(input())
    k = int(input())
    l = [k // n] * n
    rem = k % n
    for i in range(len(l)):
        if rem == 0:
            break
        else:
            l[i] += 1
            rem -= 1
    c1 = 1
    for i in range(len(l) - 1):
        if l[i] == l[i + 1]:
            c1 += 1
        else:
            break
    c2 = n - c1
    m = min(c1, c2)
    if c1 == c2:
        print (2 * m - 1)
    else:
        print (2 * m)
