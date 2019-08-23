for _ in range(int(input())):
    n, k = map(int, input().split())
    if (n // k) % k == 0:
        print ("NO")
    else:
        print ("YES")
