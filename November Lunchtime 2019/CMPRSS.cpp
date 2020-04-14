// Problem link : https://www.codechef.com/LTIME78B/problems/CMPRSS/

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
		string ans = "";
		ll n; cin >> n;
		ll a[n];
		for(ll i = 0; i < n; i++) cin >> a[i];
		ll i = 0;
		while(i < n)
		{
			ll c = 0;
			while(a[i] == (a[i + 1] - 1))
			{
				i++;
				c++;
			}
			if(c >= 2)
			{
				if(ans != "") ans += "," + to_string(a[i] - c) + "..." + to_string(a[i]);
				else ans += to_string(a[i] - c) + "..." + to_string(a[i]);
			}
			else if(c == 1)
			{
				if(ans != "") ans += "," + to_string(a[i] - 1) + "," + to_string(a[i]);
				else ans += to_string(a[i] - 1) + "," + to_string(a[i]);
			}
			else
			{
				if(ans != "") ans += "," + to_string(a[i]);
				else ans += to_string(a[i]);
			}
			i++;
		}
		cout << ans << "\n";
	}
	return 0;
}
