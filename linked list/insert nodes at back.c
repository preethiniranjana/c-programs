#include <stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node s;
s *head=NULL;
void create(s **head1)
{
s *newnode;
newnode=(s*)malloc(sizeof(s));
int no;
scanf("%d ",&no);
newnode->data=no;
newnode->next=(*head1);
(*head1)=newnode;
}

void display(s*temp)
{
while(temp!=NULL)
{
	printf("%d ",temp->data);
	temp=temp->next;
}
}
int main()
{
create(&head);
create(&head);
create(&head);
display(head);
}
