#include <stdio.h>
int main(void)
{	
	int n,k,i,a[10],temp,j;
	scanf("%d %d",&n,&k);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<k;i++)
	{
		temp=a[0];
		for(j=0;j<n;j++)
		{
			a[j]=a[j+1];
		}
		a[n-1]=temp;
	}
	for(i=0;i<n;i++)
	{
	printf("%d",a[i]);
	}
	return 0;
}
