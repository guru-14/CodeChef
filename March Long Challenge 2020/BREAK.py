# Problem link : https://www.codechef.com/MARCH20B/problems/BREAK

t, s = map(int, input().split())
for _ in range(t):
    l = []
    n = int(input())
    a = list(map(int, input().split()))
    b = list(map(int, input().split()))
    a.sort()
    b.sort()
    if s == 2:
        print ("YES")
    else:
        if a[0] >= b[0]:
            print ("NO")
            continue
        flag = 1
        l = [a[0], b[0]]
        for i in range(1, n):
            if a[i] not in l:
                flag = 0
                break
            elif a[i] >= b[i]:
                flag = 0
                break
            else:
                l.append(a[i])
                l.append(b[i])
        if flag:
            print ("YES")
        else:
            print ("NO")
