# Problem link : https://www.codechef.com/LTIME81B/problems/POPGATES

for _ in range(int(input())):
    n, k = map(int, input().split())
    l = list(map(str, input().split()))
    heads = 0
    tails = 0
    for i in l:
        if i == 'H':
            heads += 1
        else:
            tails += 1
    head_count = 0
    for _ in range(k):
        if (head_count % 2):
            if l[len(l) - 1] == 'H':
                l[len(l) - 1] = 'T'
            else:
                l[len(l) - 1] = 'H'
        if l[len(l) - 1] == 'H':
            heads -= 1
            tails, heads = heads, tails
            l.pop()
            head_count += 1
        else:
            tails -= 1
            l.pop()
    print (heads)
