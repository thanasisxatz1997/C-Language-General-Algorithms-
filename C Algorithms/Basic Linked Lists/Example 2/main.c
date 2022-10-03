#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct ListNode
{
	int data;
	struct ListNode *next;
};
typedef struct ListNode node;


node* CreateLinkedList(node *head);

void PrintDataOfLastListElement(node *head);

int main(int argc, char *argv[]) {
	node* head;
	head=CreateLinkedList(head);
	PrintDataOfLastListElement(head);
	return 0;
}

node* CreateLinkedList(node *head)
{
	int x;
	node* newNode;
	newNode=head;
	printf("Give x, 0 to exit: ");
	scanf("%d",&x);
	if(x==0)
	{
		return NULL;
	}
	else
	{
		newNode=(node*)malloc(sizeof(node));
		newNode->data=x;
		head=newNode;
		printf("Give x, 0 to exit: ");
		scanf("%d",&x);
		while(x!=0)
		{
			newNode->next=(node*)malloc(sizeof(node));
			newNode=newNode->next;
			newNode->data=x;
			printf("Give x, 0 to exit: ");
			scanf("%d",&x);	
		}
		newNode->next=NULL;
	}
	return head;
}

void PrintDataOfLastListElement(node *head)
{
	node* checkedNode;
	checkedNode=head;
	node* previousNode;
	while(checkedNode!=NULL)
	{
		previousNode=checkedNode;
		checkedNode=checkedNode->next;
	}
	printf("The data of the last node is: %d",previousNode->data);
}
