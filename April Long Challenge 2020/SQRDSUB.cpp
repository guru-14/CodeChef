// Problem link : https://www.codechef.com/APRIL20B/problems/SQRDSUB

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pl pair<ll, ll>
#define mapll map<ll, ll>

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
		ll powers_of_2[n] = {0};
		for(ll i = 0; i < n; i++){
			ll a; cin >> a;
			while(a % 2 == 0){
				powers_of_2[i] += 1;
				if(powers_of_2[i] > 1)
				    break;
				a /= 2;
			}
		}
		/*for(auto p : powers_of_2) 
			cout << p << " ";
		cout << "\n";*/
		// finding count of continguous subsequences which have sum = 1
		// then we will subtract this value from total number of continguous subsequences to get the answer
		ll total = (n * (n + 1)) / 2, sum = 0, ans = 0;
		mapll arr_sums;
		arr_sums.insert(pl(0, 1));
		for(ll i = 0; i < n; i++){
		    sum += powers_of_2[i];
		    mapll::iterator pos = arr_sums.find(sum - 1);
		    if(pos != arr_sums.end()){
		        ans += pos -> second;
		    }
		    pos = arr_sums.find(sum);
		    if(pos == arr_sums.end()){
		        arr_sums.insert(pl(sum, 1));
		    }
		    else{
		        pos -> second += 1;
		    }
		}
		ans = total - ans;
		cout << ans << "\n";
	}
	return 0;
}
