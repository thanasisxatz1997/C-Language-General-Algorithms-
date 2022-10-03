#include <stdio.h>
#include <stdlib.h>

double AverageOfArray(int *Array,const int length);
int ReadArrayLength();
void CreateArray(int *Array,const int length);
int MaxOfArray(int *Array,const int length);
void PrintResults(double average,int max);
void PrintArray(int *Array,const int length);

int main(int argc, char *argv[]) {
	int length;
	int Array[10];
	int *arrayPointer;
	double average;
	int max;
	arrayPointer=&Array[0];
	length= ReadArrayLength();
	CreateArray(arrayPointer,length);
	PrintArray(arrayPointer,length);
	average= AverageOfArray(arrayPointer,length);
	max=MaxOfArray(arrayPointer,length);
	PrintResults(average,max);
	
	return 0;
}

void CreateArray(int *Array,const int length)
{
	//Write code here to create the array with the numbers that you want
}

void PrintArray(int *Array,const int length)
{
	//Write code here to print the Array
}

double AverageOfArray(int *Array,const int length)
{
	//Write code here to calculate and return the average of the array
}

int ReadArrayLength()
{
	//Write code to read the length of Array and return it
	//For this excercise always give the number 10 since we dont use dynamic memory allocation
}

int MaxOfArray(int *Array,const int length)
{
	//Write code here to return the max number of an the array
}

void PrintResults(double average,int max)
{
	//Write code here to print the sum and the average of the array
}




















/* COMPLETE CODE


#include <stdio.h>
#include <stdlib.h>

double AverageOfArray(int *Array,const int length);
int ReadArrayLength();
void CreateArray(int *Array,const int length);
int MaxOfArray(int *Array,const int length);
void PrintResults(double average,int max);
void PrintArray(int *Array,const int length);

int main(int argc, char *argv[]) {
	int length;
	int Array[10];
	int *arrayPointer;
	double average;
	int max;
	arrayPointer=&Array[0];
	length= ReadArrayLength();
	CreateArray(arrayPointer,length);
	PrintArray(arrayPointer,length);
	average= AverageOfArray(arrayPointer,length);
	max=MaxOfArray(arrayPointer,length);
	PrintResults(average,max);
	
	return 0;
}

void CreateArray(int *Array,const int length)
{
	int i;
	for(i=0;i<length;i++)
	{
		Array[i]=i+1;
	}
}

void PrintArray(int *Array,const int length)
{
	int i;
	for(i=0;i<length;i++)
	{
		printf("%d\n",Array[i]);
	}
	printf("\n");
}

double AverageOfArray(int *Array,const int length)
{
	int i;
	int sum;
	sum=0;
	
	for(i=0;i<length;i++)
	{
		sum=sum+Array[i];
	}
	return sum/length;
}

int ReadArrayLength()
{
	int length;
	scanf("%d",&length);
	printf("\n");
	return length;
}

int MaxOfArray(int *Array,const int length)
{
	int max;
	int i;
	max=Array[0];
	for(i=0;i<length;i++)
	{
		if(max<Array[i])
		{
			max=Array[i];
		}
	}
}

void PrintResults(double average,int max)
{
	printf("Max = %d, Average = %f",max,average);
}

*/
