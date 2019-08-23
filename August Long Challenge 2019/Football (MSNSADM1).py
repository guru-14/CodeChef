for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    score = []
    for i in range(n):
        if 20 * a[i] > 10 * b[i]:
            score.append(20 * a[i] - 10 * b[i])
        else:
            score.append(0)
    print (max(score))
