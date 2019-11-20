for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    qty = 0
    ans = -1
    for i in range(n):
        qty += a[i]
        if qty >= k:
            qty -= k
        else:
            ans = i + 1
            break
    if ans == -1:
        print("YES")
    else:
        print("NO", end = " ")
        print(ans)
