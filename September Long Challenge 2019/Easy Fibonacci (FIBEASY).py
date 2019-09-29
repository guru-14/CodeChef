import math

for _ in range(int(input())):
    n = int(input())
    p = int(math.log2(n))
    if p == 0 or p == 1:
        print (p)
    else:
        if n < 2 ** p:
            p -= 1
        if p % 4 == 1:
            print (9)
        else:
            print (p % 4)
