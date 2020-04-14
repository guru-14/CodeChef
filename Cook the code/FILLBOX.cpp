// Problem link : https://www.codechef.com/CCOD2020/problems/FILLBOX

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll n, k, p, q;
        cin >> n >> k >> p >> q;
        ll dp[n][2];
        if(p == q){
            dp[0][1] = 1;
            dp[0][0] = 0;
        }
        else{
            dp[0][1] = 0;
            dp[0][0] = 1;
        }
        for(ll i = 1; i < n; i++){
            dp[i][1] = dp[i - 1][0];
            dp[i][0] = (((dp[i - 1][1] * (k - 1)) % mod) + ((dp[i - 1][0] * (k - 2)) % mod)) % mod;
        }
        cout << dp[n - 1][1] << "\n";
    }
    return 0;
}
