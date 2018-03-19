#include <stdio.h>

int main(void)
{
int m,n,a[10][10],b[10][10],flag=0;
scanf("%d %d",&m,&n);
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{
		scanf("%d",&a[i][j]);
	}
}
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{
		scanf("%d",&b[i][j]);
	}
}
for(int i=0;i<m;i++)
{
	for(int j=0;j<n;j++)
	{
		if(a[i][j]!=b[i][j])
		{
			flag=1;
			break;
		}
		else
		{
			flag==0;
		}
	}
}
if(flag==1)
{
printf("matrices are not equal");
}
else
{
	printf("both matrices are equal");
}
	return 0;
}
