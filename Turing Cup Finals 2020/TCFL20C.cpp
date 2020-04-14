// Problem link : https://www.codechef.com/TCFL2020/problems/TCFL20C

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int num[] = {3, 3, 3, 3, 3, 4, 3, 4};
ll MOD = 1000000007;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        ll ans = 1;
        for(auto i : s){
            int index = (i - '0') - 2;
            ans = (ans * num[index]) % MOD;
        }
        cout << ans << "\n";
    }
    return 0;
}
