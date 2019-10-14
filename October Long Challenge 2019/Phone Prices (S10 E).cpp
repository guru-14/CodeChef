#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t;
	cin >> t;
	while(t--)
	{
		int n, ans = 1;
		cin >> n;
		int p[n];
		for(int i = 0; i < n; i++) cin >> p[i];
		for(int i = 1; i < n; i++)
		{
			int j = i - 1, flag = 1;
			while(j >= 0 && j >= (i - 5))
			{
				if(p[i] >= p[j])
				{
					flag = 0;
					break;
				}
				j--;
			}
			if(flag == 1) ans++;
		}
		cout << ans << "\n";
	}
	return 0;
}
