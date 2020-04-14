// Problem link : https://www.codechef.com/UWCOI20/problems/UWCOI20B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n, odd = 0, even = 0;
        cin >> n;
        for(ll i = 0; i < n; i++){
            ll a;
            cin >> a;
            if(a % 2)
                odd++;
            else
                even++;
        }
        cout << (odd * even) << "\n";
    }
    return 0;
}
