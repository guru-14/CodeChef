// Problem link : https://www.codechef.com/LTIME79B/problems/GUESSNUM

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		ll a, m, c = 0;
		cin >> a >> m;
		ll n_max = m / a, n_min = m / (a + 1);
		vector <ll> ans;
		for(ll i = n_min; i <= n_max; i++)
		{
			ll d = m - (a * i);
			if(d != 0)
			{
				if(i % d == 0)
				{
					c++;
					ans.push_back(i);
				}
			}
		}
		cout << c << "\n";
		for(ll i = 0; i < ans.size(); i++) cout << ans[i] << " ";
		cout << "\n";
	}
	return 0;
}
