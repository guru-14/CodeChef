# Problem link : https://www.codechef.com/JAN20B/problems/BRKBKS

for _ in range(int(input())):
    s, w1, w2, w3 = map(int, input().split())
    if w1 + w2 + w3 <= s:
        print (1)
    else:
        if ((w1 <= s) and ((w2 + w3) <= s)) or (((w1 + w2) <= s) and (w3 <= s)):
            print (2)
        else:
            print (3)
