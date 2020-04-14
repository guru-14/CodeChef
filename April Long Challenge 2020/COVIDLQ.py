# Problem link : https://www.codechef.com/APRIL20B/problems/COVIDLQ

for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    current = -1; flag = 1;
    for i in range(n):
        if a[i] == 1:
            if current != -1:
                if i - current < 6:
                    flag = 0
                    break
            current = i
    if flag:
        print ("YES")
    else:
        print ("NO")
