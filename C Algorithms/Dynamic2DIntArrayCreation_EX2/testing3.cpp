#include <stdio.h>
#include <stdlib.h>

void Set2DArraySize(int *lines,int *cols);
int** Create2DArray(int *lines,int *cols);
void Print2DArray(int** arr,int* lines,int* cols);

int main(int argc, char *argv[]) 
{
	int **array;
	int lines;
	int cols;
	Set2DArraySize(&lines,&cols);
	printf("Array will have %d lines and %d collumns.\n",lines,cols);
	array=Create2DArray(&lines,&cols);
	Print2DArray(array,&lines,&cols);
	free(array);
	return 0;
}

int** Create2DArray(int *lines,int *cols)
{
	int i,j;
	int** arr=NULL;
	arr=(int**)malloc((*lines)*sizeof(int*));
	int* line;
	for(i=0;i<(*lines);i++)
	{
		line=(int*)malloc((*cols)*sizeof(int));
		for(j=0;j<(*cols);j++)
		{
			printf("Give value for element in line %d and col %d: ",i,j);
			scanf("%d",&line[j]);
		}
		arr[i]=line;
		line=line+1;
	}
	return arr;
}

void Set2DArraySize(int *lines,int *cols)
{
	printf("Give lines for 2D array: ");
	scanf("%d",lines);
	printf("Give columns for 2D array: ");
	scanf("%d",cols);
}

void Print2DArray(int** arr,int* lines,int* cols)
{
	int i,j;
	printf("Printed 2D Array: \n");
	for(i=0;i<(*lines);i++)
	{
		for(j=0;j<(*cols);j++)
		{
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
}









