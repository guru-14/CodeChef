for _ in range(int(input())):
    n = int(input())
    a = list(map(int, input().split()))
    ans = 0
    xor = []
    xor.append(a[0])
    for i in range(1, n):
        xor.append(xor[i - 1] ^ a[i])
    hash_dict = {}
    for k in range(0, n):
        if xor[k] == 0:
            ans += k
        if xor[k] in hash_dict:
            ans += ((k - 1) * hash_dict[xor[k]][1]) - hash_dict[xor[k]][0]
            hash_dict[xor[k]][0] += k
            hash_dict[xor[k]][1] += 1
        else:
            hash_dict[xor[k]] = [k, 1]
    print (ans)
