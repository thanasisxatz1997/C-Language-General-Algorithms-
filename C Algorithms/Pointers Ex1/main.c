
#include <stdio.h>
#include <stdlib.h>

void FillArrayWithZeros(char A[10][10]);
void PrintArray(char A[10][10]);
void FillArrayDiagonals(char A[10][10]);

int main(int argc, char *argv[]) {
	char A[10][10];
	FillArrayWithZeros(A);
	PrintArray(A);
	FillArrayDiagonals(A);
	PrintArray(A);
	return 0;
}

void FillArrayWithZeros(char A[10][10])
{
	int i;
	int j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			A[i][j]='0';
		}
	}
}

void PrintArray(char A[10][10])
{
	int i;
	int j;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%c",A[i][j]);
		}
		printf("\n");
	}
}

void FillArrayDiagonals(char A[10][10])
{
	int i;
	int j;
	char c;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			if(i==j)
			{
				A[i][j]='a';
			}else if(i+j==9)
			{
				A[i][j]='b';
			}
			else
			{
				c=i+'0';
				A[i][j]=c;
			}
		}
		printf("\n");
	}
}

