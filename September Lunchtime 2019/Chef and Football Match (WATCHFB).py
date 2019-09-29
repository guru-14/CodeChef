for _ in range(int(input())):
    n = int(input())
    a = 0
    b = 0
    for _ in range(n):
        choice, a1, b1 = map(int, input().split())
        if choice == 1:
            a = a1
            b = b1
            print ("YES")
        else:
            if a1 == b1:
                a = a1
                b = b1
                print ("YES")
            else:
                if max(a1, b1) >= max(a, b) and min(a1, b1) < max(a, b):
                    print ("YES")
                    if a > b:
                        a = max(a1, b1)
                        b = min(a1, b1)
                    else:
                        a = min(a1, b1)
                        b = max(a1, b1)
                else:
                    print ("NO")
