#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];
		for(int i = 0 ;i < n; i++) cin >> a[i];
		int min = *min_element(a, a + n);
		int max = *max_element(a, a + n);
		int min_index = min_element(a, a + n) - a;
		int max_index = max_element(a, a + n) - a;
		if(min_index < max_index) cout << min << " " << max << "\n";
		else cout << max << " " << min << "\n";
	}
	return 0;
}
