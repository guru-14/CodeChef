// Problem link : https://www.codechef.com/APRIL20B/problems/STRNO

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	ll t; cin >> t;
	while(t--){
		ll x, k;
		cin >> x >> k;
		ll cnt = 0;
		while(x % 2 == 0){
			x /= 2;
			cnt += 1;
			if(cnt == k)
				break;
		}
		if(cnt == k){
			cout << "1\n";
			continue; 
		}
		for(ll i = 3; i * i <= x; i += 2){
			while(x % i == 0){
				x /= i;
				cnt += 1;
				if(cnt == k)
					break;
			}
			if(cnt == k)
				break;
		}
		if(cnt == k){
			cout << "1\n";
			continue; 
		}
		if(x > 2){
		    cnt += 1;
		}
		if(cnt < k)
			cout << "0\n";
		else
			cout << "1\n";
		}
	return 0;
}
