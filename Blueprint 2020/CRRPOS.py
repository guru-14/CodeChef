# Problem link : https://www.codechef.com/BLIT2020/problems/CRRPOS

MOD = 1000000007

fact = [1, 1]
for i in range(2, 100005):
    x = ((i % MOD) * (fact[i - 1] % MOD)) % MOD
    fact.append(x)

for _ in range(int(input())):
    n = int(input())
    ans = 0
    for i in range(n):
        temp = ((fact[i] % MOD) * (fact[(n - 1) - i] % MOD)) % MOD
        ans = ((ans % MOD) + (temp % MOD)) % MOD
    print (ans)
