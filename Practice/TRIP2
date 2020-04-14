#Problem link : https://www.codechef.com/problems/TRIP2

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    if n == 1:
        if a[0] == -1:
            a[0] = 1
        print ("YES")
        print (a[0])
        continue
    flag = 1
    first = -1
    for i in range(n):
        if a[i] != -1:
            first = i
            break
    for i in range(n - 1):
        if a[i] != -1:
            if a[i] == a[i + 1]:
                flag = 0
                break
        else:
            if i == 0:
                if first == -1:
                    a[i] = 1
                else:
                    if first % 2 == 0:
                        a[i] = a[first]
                    else:
                        if a[first] != 1:
                            a[i] = 1
                        else:
                            if a[i + 1] != 2:
                                a[i] = 2
                            else:
                                if k >= 3:
                                    a[i] = 3
                                else:
                                    flag = 0
                                    break
            else:
                if a[i - 1] != 1:
                    if a[i + 1] != 1:
                        a[i] = 1
                    else:
                        if a[i - 1] != 2:
                            a[i] = 2
                        else:
                            if k >= 3:
                                a[i] = 3
                            else:
                                flag = 0
                                break
                else:
                    if a[i + 1] != 2:
                        a[i] = 2
                    else:
                        if k >= 3:
                            a[i] = 3
                        else:
                            flag = 0
                            break
    if flag == 0:
        print ("NO")
        continue
    else:
        if a[n - 1] == -1:
            if a[n - 2] != 1:
                a[n - 1] = 1
            else:
                a[n - 1] = 2
        print ("YES")
        print (*a)
