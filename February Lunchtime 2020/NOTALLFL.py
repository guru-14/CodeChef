# Problem link : https://www.codechef.com/LTIME81B/problems/NOTALLFL

for _ in range(int(input())):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    s = set()
    count = 0
    ans = 0
    for i in range(len(a)):
        s.add(a[i])
        if len(s) == k:
            s = set()
            s.add(a[i])
            if(count > ans):
                ans = count
            count = 1
        else:
            count += 1
    if(count > ans):
        ans = count
    print (ans)
