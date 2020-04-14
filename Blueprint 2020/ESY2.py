# Problem link : https://www.codechef.com/BLIT2020/problems/ESY2

for _ in range(int(input())):
    n = int(input())
    l = list(map(int, input().split()))
    count = [0] * 100005
    for i in l:
        count[i] += 1
    print ('0'+' '+str(count.index(max(count))))
