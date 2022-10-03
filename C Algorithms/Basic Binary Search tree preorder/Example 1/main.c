#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct TreeNode
{
	char data;
	struct TreeNode *left;
	struct TreeNode *right;
};
typedef struct TreeNode node;

void InsertNode(node* *nodeptr,char data);

void Preorder(node *nodeptr);

int main(int argc, char *argv[]) {
	node *bst;
	bst=NULL;
	InsertNode(&bst,50);
	InsertNode(&bst,60);
	InsertNode(&bst,40);
	InsertNode(&bst,45);
	InsertNode(&bst,30);
	Preorder(bst);
	return 0;
}

void InsertNode(node* *nodeptr,char data)
{
	if((*nodeptr)==NULL)
	{
		(*nodeptr)=(node*)malloc(sizeof(node));
		(*nodeptr)->data=data;
		(*nodeptr)->left=NULL;
		(*nodeptr)->right=NULL;
	}
	else
	{
		if(data<((*nodeptr)->data))
		{
			InsertNode(&((*nodeptr)->left),data);
		}
		else
		{
			InsertNode(&((*nodeptr)->right),data);
		}
	}
}

void Preorder(node *nodeptr)
{
	if(nodeptr!=NULL)
	{
		
		Preorder(nodeptr->left);
		
		Preorder(nodeptr->right);
		printf("%d\n",nodeptr->data);
	}
}
