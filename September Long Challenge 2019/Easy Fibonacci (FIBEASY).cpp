#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		int p = (int)log2(n);
		if(p == 0 || p == 1) cout << p << endl;
		else
		{
		    if(n < ((ll)pow(2, p))) p--;
			if(p % 4 != 1) cout << p % 4 << endl;
			else cout << "9" << endl;
		}
	}
	return 0;
}
