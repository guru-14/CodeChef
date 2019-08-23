#include <stdio.h>

int main(void) 
{
	// your code goes here
	
	int i,n;
	scanf("%d",&n);
	int a[n];
	
	for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	
	int max = a[0];
	
	for(i=1;i<n;i++)
	{
	    if(a[i]>max)
	        max = a[i];
	}
	
	int sec_max = a[0];
	
	for(i=1;i<n;i++)
	{
	    if(a[i]>sec_max && a[i]<max)
	        sec_max = a[i];
	}
	
	printf("%d",sec_max%max);
	
	return 0;
}
