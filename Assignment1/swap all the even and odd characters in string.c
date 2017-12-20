#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[10],temp;
	int i,len;
	scanf("%s",a);
	len=strlen(a);
	if(len%2==0)
	{
	for(i=0;i<strlen(a);i+=2)
	{
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
	}
	printf("%s",a);
	}
	else
	{
	for(i=0;i<strlen(a);i+=3)
	{
	temp=a[i];
	a[i]=a[i+1];
	a[i+1]=temp;
	}
           printf("%s",a);
}

	return 0;
}
