#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	ll t;
	cin >> t;
	while(t--)
	{
		ll n, m;
		cin >> n >> m;
		ll degree[n] = {0};
		ll last_u, last_v;
		int k = 0, ans[n];
		for(ll i = 0; i < n; i++) ans[i] = 1;
		for(ll i = 0; i < m; i++)
		{
			ll u, v;
			cin >> u >> v;
			degree[u - 1]++;
			degree[v - 1]++;
			if(i == (m - 1))
			{
				last_u = u;
				last_v = v;
			}
		}
		if(m % 2 == 0) k = 1;
		else
		{
			ll index = -1;
			for(ll i = n - 1; i >= 0; i--) 
			{
				if(degree[i] % 2)
				{
					index = i;
					break;
				}
			}
			if(index != -1)
			{
				k = 2;
				ans[index] = 2;
			}
			else
			{
				k = 3;
				ans[last_u - 1] = 2;
				ans[last_v - 1] = 3;
			}
		}
		cout << k << "\n";
		for(ll i = 0; i < n - 1; i++) cout << ans[i] << " ";
		cout << ans[n - 1] << "\n";
	}
	return 0;
}
