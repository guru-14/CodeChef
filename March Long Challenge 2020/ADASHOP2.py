# Problem link : https://www.codechef.com/MARCH20B/problems/ADASHOP2

r = [1, 8, 7, 6, 1, 2, 1, 4, 3, 2, 1, 5, 8, 3, 4, 5, 8, 7, 8, 7]
c = [1, 8, 7, 8, 3, 4, 5, 8, 7, 8, 7, 3, 6, 1, 2, 1, 4, 3, 2, 1]

for _ in range(int(input())):
    ans = len(r)
    r0, c0 = map(int, input().split())
    if r0 == c0:
        if r0 == 1:
            ans -= 1
            print (ans)
            for i in range(1, len(r)):
                print (r[i], c[i])
        else:
            print(ans)
            for i in range(len(r)):
                print (r[i], c[i])
    else:
        d = (r0 + c0) // 2
        ans += 1
        print(ans)
        print (d, d)
        for i in range(len(r)):
            print (r[i], c[i])
