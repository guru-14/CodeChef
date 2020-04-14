// Prooblem link : https://www.codechef.com/problems/GDSUB

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	ll MOD = 1000000007;
	ll n, k;
	cin >> n >> k;
	ll a[n];
	for(ll i = 0; i < n; i++) cin >> a[i];
	set <ll> s(a, a + n);
	k = min(k, (ll)s.size());
	vector <ll> c;
	ll ans = 1;
	for(ll i : s) c.push_back(count(a, a + n, i));
	if(k == s.size())
	{
		for(ll freq : c) ans = (ans * (1 + freq)) % MOD;
	}
	else
	{
		ll dp[s.size()][s.size()] = {0};
		for(ll i = 0; i < k; i++)
		{
			for(ll j = 0; j < s.size() - i; j++)
			{
				if(i == 0)
				{
					dp[i][j] = c[j];
					ans = (ans + c[j]) % MOD;
				}
				else
				{
					ll sum = 0;
					for(ll z = j + 1; z <= s.size() - i; z++) sum += dp[i - 1][z] % MOD;
					dp[i][j] = ((dp[0][j] % MOD) * sum) % MOD;
					ans = (ans + dp[i][j]) % MOD;
				}
			}
		}
	}
	cout << ans << "\n";
	return 0;
}
