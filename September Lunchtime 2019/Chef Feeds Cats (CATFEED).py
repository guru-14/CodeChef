for _ in range(int(input())):
    n, m = map(int, input().split())
    a = list(map(int, input().split()))
    count = [0] * n
    ans = "YES"
    for i in a:
        count[i - 1] += 1
        if count[i - 1] == (min(count) + 2):
            ans = "NO"
            break
    print (ans)
