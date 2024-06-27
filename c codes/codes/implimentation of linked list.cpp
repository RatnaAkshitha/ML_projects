#include<stdio.h>
#include<stdlib.h>
int main()
{
   stuctnode{
   int data;
   stuct node *next;
};
     structnode *head;
     structnode *new node;
     structnode *temp;
     head=null;
     int choice,count=1;
     while(choice==1)
     {
     	new node=(struct node*)malloc(size of(struct node));
     	printf("enter the data:\n");
     	scanf("%d",&new node->data);
     	new node->next=0;
     	if(head==0)
     	{
     		head=temp=new node;
		 }
		 else
		 {
		 	temp->next=new node;
		 	temp=new node;
		 printf("do u want to continue(0,1)?\n");
		 scanf("%d",&choice);
	}
	printf("-------------\n");
	temp=head;
	while("temp!=0")
	{
		printf("\n%d\n",temp->data);
		temp=temp->next;
		count++;
	}
	printf("\ncount=%d",count);
}
