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
		long long result, l = 0, r = 0;
		
		if((n % 2) == 0)
		{
			for(long long i = 1; i <= (n/2); i++)
			{
				l = (l + i + (l * i)) % 1000000007;
				r = (r + (n - i + 1) + (r * (n - i + 1))) % 1000000007;
			}
			result = (l + r + (l * r)) % 1000000007;
		}
		else
		{
			long long middle = (n + 1) / 2;
			for(long long i = 1; i < middle; i++)
			{
				l = (l + i + (l * i)) % 1000000007;
				r = (r + (n - i + 1) + (r * (n - i + 1))) % 1000000007;
			}
			result = (l + middle + (l * middle)) % 1000000007;
			result = (result + r + (result * r)) % 1000000007;
		}
			
		cout << result << endl;
	}
	return 0;
}
