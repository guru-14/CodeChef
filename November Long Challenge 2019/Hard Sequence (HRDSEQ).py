a = [0]
i = 1
while i < 128:
    if i == 1:
        a.append(0)
    else:
        if a[i - 1] not in a[ : i - 1]:
            a.append(0)
        else:
            x = a[i - 1]
            for j in range(i - 2, -1, -1):
                if a[j] == x:
                    a.append((i - 1) - j)
                    break
    i += 1
           
for _ in range(int(input())):
    n = int(input())
    print (a[ : n].count(a[n - 1]))
