#include <stdio.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node s;
int main()
{
s*head,*first,*second,*third,*temp;
head=(s*)malloc(sizeof(s));
first=(s*)malloc(sizeof(s));
second=(s*)malloc(sizeof(s));
third=(s*)malloc(sizeof(s));
head->data=100;
head->next=first;
first->data=200;
first->next=second;
second->data=300;
second->next=third;
third->data=400;
third->next=NULL;
temp=head;
while(temp!=NULL)
{
	printf("%d ",temp->data);
	temp=temp->next;
}
return 0;
}
