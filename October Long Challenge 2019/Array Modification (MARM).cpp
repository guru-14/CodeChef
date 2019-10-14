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
		ll n, k, div, rem, mid, b;
		cin >> n >> k;
		div = k / n;
		rem = k % n;
		ll A[n], ans[n] = {0}, count[n] = {0};
		for(ll i = 0; i < n; i++) cin >> A[i];
		for(ll i = 0; i < rem; i++) count[i] = div + 1;
		for(ll i = rem; i < n; i++) count[i] = div;
		if(n % 2)
		{
			mid = (n - 1) / 2;
			if(count[mid] == 0) ans[mid] = A[mid];
			else ans[mid] = 0;
		}
		else mid = n / 2;
		for(ll a = 0; a < mid; a++)
		{
			b = (n - (a % n)) - 1;
			if(count[a] % 3 == 0) ans[a] = A[a];
			else if(count[a] % 3 == 1) ans[a] = A[a] ^ A[b];
			else ans[a] = A[b];
			if(count[b] % 3 == 0) ans[b] = A[b];
			else if(count[b] % 3 == 1) ans[b] = A[a];
			else ans[b] = A[a] ^ A[b];
		}
		for(ll i = 0; i < n - 1; i++) cout << ans[i] << " ";
		cout << ans[n - 1] << "\n";
	}
	return 0;
}
