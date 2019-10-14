#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		ll n, m, q;
		cin >> n >> m >> q;
		ll count_r[n] = {0}, count_c[m] = {0};
		while(q--)
		{
			ll r, c;
			cin >> r >> c;
			count_r[r - 1]++;
			count_c[c - 1]++;
		}
		ll odd_r = 0, even_r, odd_c = 0, even_c;
		for(ll i = 0; i < n; i++) if(count_r[i] % 2) odd_r++;
		for(ll i = 0; i < m; i++) if(count_c[i] % 2) odd_c++;
		even_r = n - odd_r;
		even_c = m - odd_c;
		ll ans = (odd_r * even_c) + (even_r * odd_c);
		cout << ans << "\n";
	}
	return 0;
}
