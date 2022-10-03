#include <stdio.h>
#include <stdlib.h>

char* CreateArray();
void PrintArray(char* array);

int main(int argc, char *argv[]) 
{
	char* array;
	array=CreateArray();
	PrintArray(array);
	return 0;
}

char* CreateArray()
{
	char *array=NULL;
	char c;
	int i=0;
	array=(char*)malloc(1*sizeof(char));
	scanf("%c",&c);
	while(c!='\n')
	{
		array[i]=c;
		i++;
		array=(char*)realloc(array,(i+1)*sizeof(char));
		scanf("%c",&c);
	}
	array[i+1]='\0';
	return array;
}

void PrintArray(char* array)
{
	int i=0;
	while(array[i]!='\0')
	{
		printf("%c",array[i]);
		i++;
	}
}









