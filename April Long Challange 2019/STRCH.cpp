#include <iostream>
using namespace std;

int main()
{
	long long t,sum,temp;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		string str;
		char ch;
		cin>>str;
		cin>>ch;
		sum=0;
		temp=0;
		for(int i=0;i<n;i++)
		{
			if(str[i]==ch)
			{
				sum+=(i+1);
				temp=i+1;
			}
			else
				sum+=temp;
		}
		cout<<sum<<"\n";
	}
}
