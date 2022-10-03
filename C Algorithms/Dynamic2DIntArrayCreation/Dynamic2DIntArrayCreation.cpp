#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ReadLinesCols(int *lines,int *cols);
int** CreateDynamic2DIntArray(int *lines,int *cols);
void PrintDynamic2DIntArray(int** Array,int *lines,int *cols);

int main(int argc, char *argv[]) {

	int** Array;
	int lines;
	int cols;
	ReadLinesCols(&lines,&cols);
	printf("The Array will have %d lines and %d cols.\n",lines,cols);
	Array=CreateDynamic2DIntArray(&lines,&cols);
	PrintDynamic2DIntArray(Array,&lines,&cols);
	return 0;
}

void ReadLinesCols(int *lines,int *cols)
{
	printf("Give number of lines for the array: ");
	scanf("%d",lines);
	printf("Give number of columms for the array: ");
	scanf("%d",cols);
}

int** CreateDynamic2DIntArray(int *lines,int *cols)
{
	int i,j;
	int **Array;
	int *line;
	Array=(int**)malloc((*lines)*sizeof(int*));
	
	for(i=0;i<*lines ;i++)
	{
		line=(int*)malloc((*cols)*sizeof(int));
		for(j=0;j<*cols;j++)
		{
			printf("Give number for line: %d , col: %d\n",i,j);
			scanf("%d",&line[j]);
		}
		Array[i]=line;
		line=line+1;
	}
	return Array;
	
	
}

void PrintDynamic2DIntArray(int** Array,int *lines,int *cols)
{
	int i,j;
	printf("\n");
	for(i=0;i<*lines;i++)
	{
		for(j=0;j<*cols;j++)
		{
			printf("%d",Array[i][j]);
		}
		printf("\n");
	}
}
