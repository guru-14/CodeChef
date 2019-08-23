#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int r, c, stable = 1, a, adjacent;
		cin >> r >> c;
		for(int i = 0; i < r; i++)
		{
			for(int j = 0; j < c; j++)
			{
				cin >> a;
				if((stable == 1) && (a == 4))
				{
					stable = 0;
					continue;
				}
				if((stable == 1) && (a > 1))
				{
					if(((i == 0) && (j == 0)) || ((i == 0) && (j == c-1)) || ((i == r-1) && (j == 0)) || ((i == r-1) && (j == c-1)))
					{
						adjacent = 2;
						if(adjacent <= a)
						{
							stable = 0;
							continue;
						}
					}
					else
					{
						if((i == 0) || (i == r-1) || (j == 0) || (j == c-1))
						{
							adjacent = 3;
							if(adjacent <= a)
							{
								stable = 0;
								continue;
							}
						}
						else
						{
							adjacent = 4;
							if(adjacent <= a)
							{
								stable = 0;
								continue;
							}
						}
					}
				}
			}
		}
		if(stable == 0)
			cout << "Unstable\n";
		else
			cout << "Stable\n";
	}
	return 0;
}
