#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t; 
	cin >> t;
	while(t--)
	{
		int n, Q; 
		cin >> n >> Q;
		long long int dp[n] = {0}, b;
		for(int i = 0; i < n - 1; i++)
		{
			cin >> b;
			if(i % 2 == 0) dp[i + 1] = dp[i] + b;
			else dp[i + 1] = dp[i] - b;
		}
		while(Q--)
		{
			int p, q; 
			cin >> p >> q;
			if(q < p)
			{
				int temp = p;
				p = q;
				q = temp;
			}
			if((q - p) % 2 == 0) cout << "UNKNOWN" << "\n";
			else
			{
				if(p % 2 != 0) cout << (dp[q - 1] - dp[p - 1]) << "\n";
				else cout << (dp[p - 1] - dp[q - 1]) << "\n";
			}
		}
	}
	return 0;
}
