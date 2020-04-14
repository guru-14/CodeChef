# Problem link : https://www.codechef.com/TCFL2020/problems/TCFL20B

for _ in range(int(input())):
    n = int(input())
    d = {}
    a = ''
    b = 0
    for i in range(2 * n):
        if i % 2:
            b = int(input())
            d[b] = a
        else:
            a = input()
    for i in sorted(d):
        print (d[i])
