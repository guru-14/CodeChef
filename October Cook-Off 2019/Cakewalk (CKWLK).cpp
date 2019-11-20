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
		ll n, c = 0;
		cin >> n;
		while(n % 10 == 0)
		{
			n /= 10;
			c++;
		}
		if(n & (n - 1)) cout <<"No\n";
		else
		{
			ll two = (ll)log2(n);
			if(c >= two) cout <<"Yes\n";
			else cout <<"No\n";
		}
	}
	return 0;
}
