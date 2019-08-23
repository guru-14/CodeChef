for _ in range(int(input())):
    n, m, k, l, r = map(int, input().split())
    li = []
    for _ in range(n):
        c, p = map(int, input().split())
        if c < k:
            c = min(k, c + m)
        elif c > k:
            c = max(k, c - m)
        if c >= l and c <= r:
            li.append(p)
    if len(li):
        print (min(li))
    else:
        print (-1)
