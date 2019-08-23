#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		ll a[n], mean = 0;	
		for(ll i = 0; i < n; i++)
		{
			cin >> a[i];
			mean += a[i];
		}
		if(mean % n != 0)
			cout << "Impossible" << endl;
		else
		{
			mean /= n;
			int flag = 0;
			ll i;
			for(i = 0; i < n; i++)
			{
				if(a[i] == mean)
				{
					flag = 1;
					break;
				}
			}
			if(flag == 1)
				cout << (i + 1) << endl;
			else
				cout << "Impossible" << endl;
		}
	}
	return 0;
}
