// Problem link : https://www.codechef.com/CCOD2020/problems/MOTU001

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    ll t; cin >> t;
    while(t--){
        ll a, b, c, x;
        cin >> a >> b >> c;
        x = (c - b) / a;
        cout << ((a*x) + b) << "\n";
    }
    return 0;
}
