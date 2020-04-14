# Problem link : https://www.codechef.com/DEC19B/problems/WATSCORE

for _ in range(int(input())):
    n = int(input())
    scores = [0] * 8
    for _ in range(n):
        p, s = map(int, input().split())
        if p == 9 or p == 10 or p == 11:
            continue
        else:
            if s > scores[p - 1]:
                scores[p - 1] = s
    print (sum(scores))
