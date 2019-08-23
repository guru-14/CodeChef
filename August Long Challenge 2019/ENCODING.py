MOD = 1000000007
hash_dict = {}
for _ in range(int(input())):
    nl, l = map(int, input().split())
    nr, r = map(int, input().split())
    ans = 0
    for i in range(l, r + 1):
        if i in hash_dict:
            ans = ((ans % MOD) + (hash_dict[i] % MOD)) % MOD
        else:
            num = str(i)
            n = num[0]
            for j in range(1, len(num)):
                if num[j] == num[j - 1]:
                    n += "0"
                else:
                    n += num[j]
            hash_dict[i] = int(n)
            ans = ((ans % MOD) + (int(n) % MOD)) % MOD
        print (hash_dict[i])
    #print (ans)
