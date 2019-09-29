def C(n, r):
    if r > n - r:
        r = n - r
    res = 1
    for i in range(r):
        res *= (n - i)
        res //= (i + 1)
    return res

for _ in range(int(input())):
    n1, k = map(int, input().split())
    a = list(map(int, input().split()))
    a.sort()
    min_arr = a[0 : k]
    min_set = set(min_arr)
    ans = 1
    for i in min_set:
        n = a.count(i)
        r = min_arr.count(i)
        ans *= C(n, r)
    print (ans)
