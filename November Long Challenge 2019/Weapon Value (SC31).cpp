for _ in range(int(input())):
    n = int(input())
    num = 0
    for _ in range(n):
        s = int(input(), 2)
        num ^= s
    num = bin(num)
    print (num[2:].count('1'))
