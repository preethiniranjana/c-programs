#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
int data;
struct node *next;
struct node *prev;
}n;
int main()
{
n*head,*a,*b,*c,*temp;
int no,no1,no2;
head=(n*)malloc(sizeof(n));
a=(n*)malloc(sizeof(n));
b=(n*)malloc(sizeof(n));
c=(n*)malloc(sizeof(n));
head=a;
head->prev=NULL;
scanf("%d %d %d",&no,&no1,&no2);
a->data=no;
a->next=b;
b->prev=a;
b->data=no1;
b->next=c;
c->prev=b;
c->data=no2;
c->next=NULL;
temp=head;
while(temp!=NULL)
{
printf("%d ",temp->data);
temp=temp->next;
}
return 0;
}
