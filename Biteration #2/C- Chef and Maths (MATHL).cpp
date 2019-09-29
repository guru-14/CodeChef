#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll MOD = 1000000007;
    vector <ll> fact;
    fact.push_back(1);
    fact.push_back(1);
    vector <ll> ans;
    ans.push_back(1);
    ans.push_back(1);
    for(ll i = 2; i <= 1000000; i++)
    {
    	fact.push_back((i * fact[i - 1]) % MOD);
    	ans.push_back((fact[i] * ans[i - 1]) % MOD);
	}
	ll t;
	cin >> t;
	while(t--)
	{
	    ll n;
	    cin >> n;
	    cout << ans[n] << "\n";
	}
	return 0;
}
