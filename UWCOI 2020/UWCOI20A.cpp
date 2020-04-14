// Problem link : https://www.codechef.com/UWCOI20/problems/UWCOI20A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll max = 0;
        for(ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            if(a > max)
                max = a;
        }
        cout << max << "\n";
    }
    return 0;
}
