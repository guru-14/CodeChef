// Problem link : https://www.codechef.com/APRIL20B/problems/UNITGCD

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
		ll n; cin >> n;
			if(n == 1){
				cout << "1\n1 1\n";
			}
			else if(n == 2){
				cout << "1\n2 1 2\n";
			}
			else if(n == 3){
				cout << "1\n3 1 2 3\n";
			}
			else{
				cout << (n / 2) << "\n";
				cout << "3 1 2 3\n";
				ll loop_count = n - 3;
				if(loop_count % 2 == 0){
					for(ll i = 4; i < n; i += 2){
						cout << "2 " << i << " " << (i + 1) << "\n";
					}
				}
				else{
					ll i = 4;
					for(ll j = 1; j <= (loop_count / 2); j++, i += 2){
						cout << "2 " << i << " " << (i + 1) << "\n";
					}
					cout << "1 " << i << "\n";
				}
			}
			//cout << "-----------------------\n";
		}
	return 0;
}
