/*
#include <stdio.h>
#include <stdlib.h>

void ReadStr(char *ptr);
void PrintStr(char *ptr);
int NumberOfWords(char *ptr);
void RemoveExtraSpaces(char *ptr);

int main(int argc, char *argv[]) {
	char array[50];
	char *aptr;
	aptr=&array[0];
	ReadStr(aptr);
	PrintStr(aptr);
	int words=NumberOfWords(aptr);
	printf("Number of words in the array: %d\n",words);
	RemoveExtraSpaces(aptr);
	words=NumberOfWords(aptr);
	printf("Number of words in the array after removing extra spaces: %d\n",words);
	return 0;
}

void ReadStr(char *ptr)
{
	//Write code here to read a string and put it in the array
}

void PrintStr(char *ptr)
{
	//Write code here to print the string read above
}

void RemoveExtraSpaces(char *ptr)
{
	//Write code here to remove extra adjacent spaces from the string
}

int NumberOfWords(char *ptr)
{
	//Write code here to return the number of words in the string
}

*/



#include <stdio.h>
#include <stdlib.h>

void ReadStr(char *ptr);
void PrintStr(char *ptr);
int NumberOfWords(char *ptr);
void RemoveExtraSpaces(char *ptr);

int main(int argc, char *argv[]) {
	char array[50];
	char *aptr;
	aptr=&array[0];
	ReadStr(aptr);
	PrintStr(aptr);
	int words=NumberOfWords(aptr);
	printf("Number of words in the array: %d\n",words);
	RemoveExtraSpaces(aptr);
	words=NumberOfWords(aptr);
	printf("Number of words in the array after removing extra spaces: %d\n",words);
	return 0;
}

void ReadStr(char *ptr)
{
	int i;
	char c;
	i=0;
	printf("Give str: ");
	scanf("%c",&c);
	while ((c!='\n')&&(i<50))
	{
		ptr[i]=c;
		i++;
		scanf("%c",&c);
	}
	ptr[i]='\0';
}

void PrintStr(char *ptr)
{
	int i;
	for(i=0;ptr[i]!='\0';i++)
	{
		printf("%c",ptr[i]);
	}
	printf("\n");
}

void RemoveExtraSpaces(char *ptr)
{
	
	int i=0;
	int j;
	while(ptr[i]!='\0' && i<50)
	{
		while(ptr[i]==' ' && ptr[i+1]==' ')
		{
			for(j=i;j<50;j++)
			{
				ptr[j]=ptr[j+1];
			}
		}
		i++;
	}
}

int NumberOfWords(char *ptr)
{
	int counter=0;
	int i=0;
	while(ptr[i]!='\0'&&i<50)
	{
		if(ptr[i]==' ')
		{
			counter++;
		}
		i++;
	}
	return counter+1;
}


