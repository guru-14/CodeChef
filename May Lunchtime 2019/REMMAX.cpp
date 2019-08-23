#include<bits/stdc++.h>
using namespace std;

int isPowerOfTen(long long input) 
{

    if (input % 10 != 0 || input == 0) 
	{
        return 0;
    }

    if (input == 10) 
	{
        return 1;
    }

    return isPowerOfTen(input/10);
}

long long numlen(long long n)
{
	return (long long)(log10(n) + 1);
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		long long rev = 0;
		long long temp;
		
		if(isPowerOfTen(n) == 1)
			n--;
		
		while(numlen(n) != 1)
		{
			if(n % 10 != 9)
			{
				temp = n - ((n % 10) + 1);
				if(numlen(temp) < numlen(n))
				{
					while(n != 0)
					{
						rev = (10 * rev) + (n % 10);
						n /= 10;
					}
					break;
				}
				else
				{
					rev = (10 * rev) + 9;
					n = temp / 10;
				}
			}
			else
			{
				rev = (10 * rev) + 9;
				n = n / 10;
			}
		}
		if(numlen(n) == 1)
			rev = (10 * rev) + n;
		
		long long num = 0;
		while(rev != 0)
		{
			num = (10 * num) + (rev % 10);
			rev /= 10;
		}
		cout << num << "\n";
	}
	return 0;
}
