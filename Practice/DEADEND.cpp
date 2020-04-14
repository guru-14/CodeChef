// Problem link : https://www.codechef.com/problems/DEADEND

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll t; cin >> t;
	while(t--)
	{
		ll n; cin >> n;
		ll a[n], ans = 0;
		for(ll i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		for(ll i = 0; i < n; i++)
		{
			if(i == 0)
			{
				if((a[i + 1] - a[i]) > 1)
				{
					ans++;
					a[i]++;
				}
			}
			else if(i == (n - 1)) 
			{
			    if(a[i] - a[i - 1] > 1) 
			        ans++;
			}
			else
			{
				if(((a[i] - a[i - 1]) > 1) && ((a[i + 1] - a[i]) > 1))
				{
					ans++;
					a[i]++;
				}
			}
		}
		cout << ans << "\n";
	}
	return 0;
}
