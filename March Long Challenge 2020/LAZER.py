# Problem link : https://www.codechef.com/MARCH20B/problems/LAZER

for _ in range(int(input())):
    n, q = map(int, input().split())
    a = list(map(int, input().split()))
    m = []
    c = []
    for i in range(1, n):
        x1 = i
        #x2 = i + 1
        y1 = a[i - 1]
        y2 = a[i]
        slope = (y2 - y1)# // (x2 - x1)
        m.append(slope)
        intercept = y1 - (slope * x1)
        c.append(intercept)
    for i in range(q):
        ans = 0
        x1, x2, y = map(int, input().split())
        for j in range(n - 1):
            xl = j + 1
            xr = j + 2
            if m[j] == 0:
                if y != a[j]:
                    #print ("1")
                    continue
                else:
                    if ((xl < x1) and (xr <= x1)) or ((xl >= x2) and (xr > x2)):
                        #print ("2")
                        continue
                    else:
                        #print ("3")
                        ans += 1
                        continue
            else:
                if ((x2 == xl) and (y == a[j])) or ((x1 == xr) and (y == a[xl])):
                    #print ("4")
                    continue
                else:
                    x = (y - c[j]) / m[j]
                    #print (x)
                    if (((x >= float(x1)) and (x <= float(x2))) and ((x >= float(xl)) and (x <= float(xr)))):
                        #print ("5")
                        ans += 1
                        continue
                    else:
                        #print ("6")
                        continue
        print (ans)
