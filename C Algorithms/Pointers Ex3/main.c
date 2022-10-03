#include <stdio.h>
#include <stdlib.h>
#define N 3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void read(int data[N][N]);
void transpose(const int data[N][N],int trans[N][N]);
void print(const int data[N][N]);

int main(int argc, char *argv[]) {
	int data[N][N];
	int trans[N][N];
	read(data);
	transpose(data,trans);
	print(data);
	print(trans);
}

void read(int data[N][N])
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			scanf("%d",&data[i][j]);
		}
	}
}

void transpose(const int data[N][N],int trans[N][N])
{
	int i,j;
	int temp;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			trans[i][j]=data[j][i];
			trans[j][i]=data[i][j];
		}
	}
}

void print(const int data[N][N])
{
	int i,j;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			printf("%d",data[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
