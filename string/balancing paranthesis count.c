#include <stdio.h>
#include<string.h>
int main(void) 
{
int i,count=0,flag=0;
char a[10];
scanf("%s",a);
int l=strlen(a);
for(i=0;i<l;i++)
{
	if(a[i]=='(' || a[i]==')')
	{
		count++;	
	}
}
if(count%2==0)
{
printf("%d",count/2);
}
else
{
	printf("-1");
}
	return 0;
}
