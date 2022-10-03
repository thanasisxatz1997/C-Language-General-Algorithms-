#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student
{
	int aem;
	int vath[5];	
};


struct listNode
{
	struct student data;
	struct listNode *next;
};
typedef struct listNode node;

void PrintLastNodeResults(node *head);

node* createLinkedList(node *head);

int main(int argc, char *argv[]) {
/*	node *head;
	head=NULL;
	head=createLinkedList(head);
	PrintLastNodeResults(head);
	
	return 0;*/
	int n=2;
	int x;
	x=MyF(n);
	printf("%d",x);
}

node* createLinkedList(node *head)
{
	node *newNode;
	int aem;
	int i;
	
	printf("Give aem for a student, type 0 to exit: ");
	scanf("%d",&aem);
	if(aem==0)
	{
		return NULL;
	}
	else
	{
		newNode=(node*)malloc(sizeof(node));
		newNode->data.aem=aem;
		for(i=0;i<5;i++)
		{
			printf("Give grade number %d for student with aem, %d :",i,aem);
			scanf("%d",&newNode->data.vath[i]);
		}
		head=newNode;
		printf("Give aem for a student, type 0 to exit: ");
		scanf("%d",&aem);
		while(aem!=0)
		{
			newNode->next = (node *) malloc(sizeof(node));
			newNode = newNode->next;
			newNode->data.aem=aem;
			for(i=0;i<5;i++)
			{
				printf("Give grade number %d for student with aem, %d :",i,aem);
				scanf("%d",&newNode->data.vath[i]);
			}
			printf("Give aem for a student, type 0 to exit: ");
			scanf("%d",&aem);	
		}
		newNode->next=NULL;
	}
	return head;
}

void PrintLastNodeResults(node *head)
{
	int i;
	node *checkedNode = head;
	node *previousNode= head;
	while (checkedNode != NULL)
	{
		previousNode=checkedNode;
		checkedNode=checkedNode->next;
	}
	printf("The aem of the last student is: %d\n",previousNode->data.aem);
	printf("The grades of the last student are:\n");
	for(i=0;i<5;i++)
	{
		printf("Grade numher%d: %d\n",i,previousNode->data.vath[i]);
	}
}

int MyF(int n)
{
	int x;
	if(n==1||n==2)
	{
		x=1;
	}
	else
	{
		x=MyF(n-2)+MyF(n-1);
	}
	return x;
}
