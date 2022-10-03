#include <stdio.h>
#include <stdlib.h>

int* CreateArray(int *size);
void SetArraySize(int *size);
void PrintArray(int *arr,int *size);

int main(int argc, char *argv[]) 
{
	int size;
	int *array;
	SetArraySize(&size);
	array=CreateArray(&size);
	PrintArray(array,&size);
	return 0;
}

int* CreateArray(int *size)
{
	int i;
	int* arr=NULL;
	arr=(int*)malloc((*size)*sizeof(int));
	for(i=0;i<*size;i++)
	{
		printf("Give element number %d of array: ",i);
		scanf("%d",&arr[i]);
	}
	return arr;
}

void SetArraySize(int *size)
{
	printf("Give size for the array: ");
	scanf("%d",size);
}

void PrintArray(int *arr,int *size)
{
	int i;
	printf("The array is: \n");
	for(i=0;i<(*size);i++)
	{
		printf("%d\n",arr[i]);
	}
}









