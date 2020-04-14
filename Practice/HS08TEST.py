x, y = map(float, input().split())
if (x + 0.5) > y or x % 5 != 0:
    print ("%.2f"%y)
else:
    y -= (x + 0.5)
    print ("%.2f"%y)
