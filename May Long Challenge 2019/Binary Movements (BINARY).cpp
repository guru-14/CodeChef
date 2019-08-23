#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n, z;
		cin >> n >> z;
		short a[n];
		for(long long i = 0; i < n; i++)
			cin >> a[i];
		
		short flag = 0;
		
		while((z--) && (flag == 0))
		{
			flag = 1;
			long long i = 0;
			while(i < (n-1))
			{
				if((a[i] == 0) && (a[i+1] == 1) )
				{
					a[i] = 1;
					a[i+1] = 0;
					i+=2;
					flag = 0;
				}
				else
					i++;
			}
		}
		for(long long i = 0; i < n; i++)
			cout << a[i] << " ";
			
		cout << endl;
	}
}
