#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		ll x[n], h[n], diff[n];
		for(ll i = 0; i < n; i++) cin >> x[i] >> h[i];
		sort(h, h + n);
		diff[0] = x[1] - x[0];
		for(ll i = 1; i < n - 1; i++) diff[i] = (x[i] - x[i - 1]) + (x[i + 1] - x[i]);
		diff[n - 1] = x[n - 1] - x[n - 2];
		sort(diff, diff + n);
		ll ans = 0;
		for(ll i = 0; i < n; i++) ans += h[i] * diff[i];
		cout << ans << "\n";
	}
	return 0;
}
