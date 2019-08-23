for _ in range(int(input())):
    n = int(input())
    c = list(map(int, input().split()))
    h = list(map(int, input().split()))
    radiation = [0] * n
    for i in range(n):
        radiation[max(0, i - c[i])] += 1
        if i + c[i] < n - 1:
            radiation[i + c[i] + 1] -= 1
    for i in range(1, n):
        radiation[i] += radiation[i - 1]
    radiation.sort()
    h.sort()
    if radiation == h:
        print ("YES")
    else:
        print ("NO")
