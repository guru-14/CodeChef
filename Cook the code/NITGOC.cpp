// Problem link : https://www.codechef.com/CCOD2020/problems/NITGOC

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll gcd(ll a, ll b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll x, y;
        cin >> x >> y;
        if(gcd(x, y) == 1){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
    return 0;
}
