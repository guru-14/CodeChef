// Problem link : https://www.codechef.com/MARCH20B/problems/ENGXOR

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while(t--)
    {
        ll n, q, odd = 0, even = 0;
        cin >> n >> q;
        for(ll i = 0; i < n; i++)
        {
            ll a;
            cin >> a;
            if(__builtin_popcount(a) % 2)
                odd++;
            else
                even++;
        }
        while(q--)
        {
            ll p;
            cin >> p;
            ll ans_even = even, ans_odd = odd;
            if(__builtin_popcount(p) % 2)
            {
                ll temp;
                temp = ans_odd;
                ans_odd = ans_even;
                ans_even = temp;
            }
            cout << ans_even << " " << ans_odd << "\n";
        }
    }
    return 0;
}
