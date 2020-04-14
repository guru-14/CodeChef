# Problem link : https://www.codechef.com/DEC19B/problems/PLMU

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    ans = 0
    count_0 = [0] * n
    count_2 = [0] * n
    if a[0] == 0:
        count_0[0] = 1
    elif a[0] == 2:
        count_2[0] = 1
    for i in range(1, n):
        if a[i] == 0:
            count_0[i] = count_0[i - 1] + 1
            count_2[i] = count_2[i - 1]
        elif a[i] == 2:
            count_0[i] = count_0[i - 1]
            count_2[i] = count_2[i - 1] + 1
        else:
            count_0[i] = count_0[i - 1]
            count_2[i] = count_2[i - 1]
    for i in range(n - 1):
        if a[i] == 0:
            ans += count_0[n - 1] - count_0[i]
        elif a[i] == 2:
            ans += count_2[n - 1] - count_2[i]
    print (ans)
