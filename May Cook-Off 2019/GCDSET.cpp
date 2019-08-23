#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long l, r, g, count;
		cin >> l >> r >> g;
		
		long long start = l / g;
		if((start * g) < l)
			start++;
		
		long long end = r / g;
		
		count = (end - start) + 1;
		
		if(count == 1)
		{
			if((end * g) == g)
				count = 1;
			else
				count = 0;
		}
		
		cout << count << "\n";
	}
	return 0;
}
