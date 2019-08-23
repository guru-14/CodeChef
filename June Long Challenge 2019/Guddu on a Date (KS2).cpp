#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		long long sum = 0;
		for(long long i = 0; i < s.length(); i++)
			sum += s[i] - '0';
		if(sum % 10 == 0)
			s += '0';
		else if((sum+1) % 10 == 0)
			s += '1';
		else if((sum+2) % 10 == 0)
			s += '2';
		else if((sum+3) % 10 == 0)
			s += '3';
		else if((sum+4) % 10 == 0)
			s += '4';
		else if((sum+5) % 10 == 0)
			s += '5';
		else if((sum+6) % 10 == 0)
			s += '6';
		else if((sum+7) % 10 == 0)
			s += '7';
		else if((sum+8) % 10 == 0)
			s += '8';
		else
			s += '9';
			
		cout << s << endl;
	}
}
