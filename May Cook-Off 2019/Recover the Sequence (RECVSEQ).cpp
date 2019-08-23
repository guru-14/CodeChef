#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		long long a[n] = {0};
		for(long long i = 0; i < n; i++)
			cin >> a[i];
		
		long long d = a[1] - a[0];
		
		if(a[2] == (a[1] + d))
		{
			long long t = a[0];
			for(long long i = 0; i < n; i++)
			{
				cout << t << " ";
				t = t + d;
			}
		}
		else
		{
			if(a[3] == (a[1] + (2*d)))
			{
				long long t = a[0];
				for(long long i = 0; i < n; i++)
				{
					cout << t << " ";
					t = t + d;
				}
			}
			else
			{
				d = a[n-1] - a[n-2];
				
				if((a[1] + d) != a[2])
				{
					long long t = a[0];
					for(long long i = 0; i < n; i++)
					{
						cout << t << " ";
						t = t + d;
					}
				}
				else
				{
					long long t = a[1] - d;
					for(long long i = 0; i < n; i++)
					{
						cout << t << " ";
						t = t + d;
					}
				}
			}
		}
		cout << "\n";
	}
	return 0;
}
