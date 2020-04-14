# Problem link : https://www.codechef.com/MARCH20B/problems/CHPINTU

for _ in range(int(input())):
    n, m = map(int, input().split())
    f = list(map(int, input().split()))
    p = list(map(int, input().split()))
    d = {}
    for i in range(n):
        if f[i] in d:
            d[f[i]] += p[i]
        else:
            d[f[i]] = p[i]
    l = []
    for v in d.values():
        l.append(v)
    print (min(l))
