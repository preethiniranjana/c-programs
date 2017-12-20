#include <stdio.h>
int main(void) 
{
int h1,m1,h2,m2,m3,m4,h3,m5;
scanf("%d:%d",&h1,&m1);
scanf("%d:%d",&h2,&m2);
m3=(h1*60)+m1;
m4=(h2*60)+m2;
if(m3>m4)
{
	h3=(m3-m4)/60;
	m5=(m3-m4)%60;
printf("%d:%d",h3,m5);	
}
else
{
	h3=(m4-m3)/60;
	m5=(m4-m3)%60;
	printf("%d:%d",h3,m5);
}
	return 0;
}
