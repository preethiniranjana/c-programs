#include <stdio.h>
#include<string.h>
int main(void) 
{
char a[10];
int len,i,temp,j,count;
scanf("%s",a);
len=strlen(a);
for(i=0;i<len;i++)
{
	count=1;
	temp=a[i];
	if((a[i]>=65&&a[i]<=90)||(a[i]>=97&&a[i]<=122))
	{
		for(j=i+1;j<len;j++)
		{
			if(temp==a[j])
			{
				count++;
				if(count>1)
				{
					a[j]='+';
				}
			}
		}
			printf("%c"-"%d",a[i],count);
	}

}
	return 0;
}

