#include <bits/stdc++.h>
using namespace std;
typedef short int si;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	si t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		ll a[n], ans[n] = {0};
		for(ll i = 0; i < n; i++) cin >> a[i];
		ll max = *max_element(a, a + n);
		ll count[max + 1] = {0};
		si visited[max + 1] = {0};
		for(ll i = 0; i < n; i++) count[a[i]]++;
		for(ll i = n - 1; i >= 0; i--)
		{
			if(a[i] == 1)
			{
				ans[i] += i;
				break;
			}
			count[a[i]]--;
			if(!visited[a[i]])
			{
				for(ll j = a[i]; j <= max; j += a[i])
				{
					ans[i] += count[j];
					visited[j] = 1;
				}
			}
		}
		max = *max_element(ans, ans + n);
		cout << max << "\n";
	}
	return 0;
}
