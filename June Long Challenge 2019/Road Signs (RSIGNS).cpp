#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long t, initial = 10;
	scanf("%lld", &t);
	vector <long long> cache;
	//pre-computing
	cache.push_back(10);
	for(long long i = 0; i < 10000000; i++)
	{
		initial = (initial<<1) % 1000000007;
		cache.push_back(initial);
	}
	
	while(t--)
	{
		long long k, ans, x = cache[cache.size() - 1];
		scanf("%lld", &k);
		while(cache.size() < k)
		{
			x = (x<<1) % 1000000007;
			cache.push_back(x);
		}
		printf("%lld\n", cache[k-1]);
	}
}
