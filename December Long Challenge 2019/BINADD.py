# Problem link : https://www.codechef.com/DEC19B/problems/BINADD

from sys import stdin, stdout

for _ in range(int(stdin.readline())):
    a = int(stdin.readline(), 2)
    b = int(stdin.readline(), 2)
    c = 0
    while b > 0:
        u = a ^ b
        v = a & b
        a = u
        b = v << 1
        c += 1
    stdout.write(str(c) + '\n')
