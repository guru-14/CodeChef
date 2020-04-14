// Problem link : https://www.codechef.com/DEC19B/problems/SUBSPLAY

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int t;
ll n, ans, i;
string s;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin >> t;
	while(t--)
	{
		cin >> n >> s;
		ans = 0;
		ll count[26] = {0}, previous_occurrence[26] = {0};
		for(i = 0; i < n; i++)
		{
			count[s[i] - 'a']++;
			if(count[s[i] - 'a'] > 1)
			{
				ll k = (n - i) + previous_occurrence[s[i] - 'a'];
				if(k > ans) ans = k;
			}
			previous_occurrence[s[i] - 'a'] = i;
		}
		cout << ans << "\n";
	}
}
