#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
            cin >> a[i];
        long max = 0;
        for(int i = 0; i < n - 1; i++)
        {
            for(int j = i + 1; j < n; j++)
            {
                long prod = a[i] * a[j], sum = 0;
                while(prod != 0)
                {
                    sum += prod % 10;
                    prod /= 10;
                }
                if(sum > max)
                    max = sum;
            }
        }
        cout << max << endl;
    }
    return 0;
}
