#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        long count[26] = {0};
        while(n--)
        {
            string str;
            cin >> str;
            for(int i = 0; i < str.length(); i++)
                count[str[i] - 'a']++;
        }
        long codechef_count[] = {2, 1, 1, 2, 1, 1};
        long cauldron_count[6] = {0};
        cauldron_count[0] = count[2];
        cauldron_count[1] = count[14];
        cauldron_count[2] = count[3];
        cauldron_count[3] = count[4];
        cauldron_count[4] = count[7];
        cauldron_count[5] = count[5];
        int c=0,flag=1;
        while(flag)
        {
            for(int i=0;i<6;i++)
            {
                cauldron_count[i]-=codechef_count[i];
                if(cauldron_count[i]<0)
                    flag=0;
            }
            if(flag!=0)
                c++;
        }
        cout << c <<"\n";
    }

    return 0;
}
