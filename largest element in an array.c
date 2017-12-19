#include <stdio.h>
int max(int[],int);
int main(void) 
{
int a[]={10,45,60,32,67,88,99,10};
int size=8,out;
out=max(a,size);
printf("%d",out);
}
int max(int a[],int size)
{
	int i,t=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>t)
		{
		t=a[i];
		}
	}
	return t;
}
