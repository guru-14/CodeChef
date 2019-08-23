#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int count[26] = {0};
		for(int i = 0; i < s.length(); i++)
			count[s[i] - 'a']++;
		
		int odd_count = 0;
		for(int i = 0; i < 26; i++)
		{
			if((count[i] % 2) != 0)
				odd_count++;
		}
		
		if((s.length() % 2) == 0)
		{
			if(odd_count == 2)
				cout << "DPS\n";
			else
				cout << "!DPS\n";
		}
		else
		{
			if((odd_count == 1) || (odd_count == 3))
				cout << "DPS\n";
			else
				cout << "!DPS\n";
		}
	}
	return 0;
}
