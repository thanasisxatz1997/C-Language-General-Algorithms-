/*

#include <stdio.h>
#include <stdlib.h>

void PrintPointerValue(int *p);
void PrintPointerToPointerValue(int **p);
void Sum(int a,int b,int *s);
void Swap(int *p,int*p2);
void MaxMin(int *p,int *p2);
void PrintArrayAddresses(int *arr,int length);

int main(int argc, char *argv[]) {
	int x=5;
	int *ptr;
	int **pptr;
	
	ptr=&x;
	pptr=&ptr;
	
	PrintPointerValue(ptr);
	PrintPointerToPointerValue(pptr);
	
	int y=2;
	int sum;
	Sum(x,y,&sum);
    printf("The sum is: %d\n",sum);
    
    int *ptr2;
    ptr2=&y;
	printf("Before Swap ptr1 = %d, ptr2 = %d\n",*ptr,*ptr2);
	Swap(ptr,ptr2);
	printf("After Swap ptr1 = %d, ptr2 = %d\n",*ptr,*ptr2);
	
	MaxMin(ptr,ptr2);
	printf("After MaxMin ptr1 = %d, ptr2 = %d\n",*ptr,*ptr2);
	
	int array[10];
	int *arrp;
	arrp=&array[0];
	PrintArrayAddresses(arrp,10);
	
	return 0;
}


void PrintPointerValue(int *p)
{
	//Write code here to print the value and address of the pointer
}

void PrintPointerToPointerValue(int **p)
{
	//Write code here to print the value and address of the pointer
}


void Sum(int a,int b,int *s)
{
	//Write code here to store the sum a+b in the address of s
}

void Swap(int *p,int *p2)
{
	//Write code here to swap values of pointers
}

void MaxMin(int *p,int *p2)
{
	//Write code here to put the maximum value in the first pointer (p) and the minimum value in the second pointer(p2)
}

void PrintArrayAddresses(int *arr,int length)
{
	//Write code here to print the addresses of every element of the array
}

*/


#include <stdio.h>
#include <stdlib.h>

void PrintPointerValue(int *p);
void PrintPointerToPointerValue(int **p);
void Sum(int a,int b,int *s);
void Swap(int *p,int*p2);
void MaxMin(int *p,int *p2);
void PrintArrayAddresses(int *arr,int length);

int main(int argc, char *argv[]) {
	int x=5;
	int *ptr;
	int **pptr;
	
	ptr=&x;
	pptr=&ptr;
	
	PrintPointerValue(ptr);
	PrintPointerToPointerValue(pptr);
	
	int y=2;
	int sum;
	Sum(x,y,&sum);
    printf("The sum is: %d\n",sum);
    
    int *ptr2;
    ptr2=&y;
	printf("Before Swap ptr1 = %d, ptr2 = %d\n",*ptr,*ptr2);
	Swap(ptr,ptr2);
	printf("After Swap ptr1 = %d, ptr2 = %d\n",*ptr,*ptr2);
	
	MaxMin(ptr,ptr2);
	printf("After MaxMin ptr1 = %d, ptr2 = %d\n",*ptr,*ptr2);
	
	int array[10];
	int *arrp;
	arrp=&array[0];
	PrintArrayAddresses(arrp,10);
	
	return 0;
}


void PrintPointerValue(int *p)
{
	printf("The pointer points at the value: %d, at the address: %p\n",*p,p);
}

void PrintPointerToPointerValue(int **p)
{
	printf("The pointer points at the value: %d, at the address: %p\n", **p,*p);
}


void Sum(int a,int b,int *s)
{
	*s=a+b;
}

void Swap(int *p,int *p2)
{
	int temp;
	temp=*p;
	*p=*p2;
	*p2=temp;
}

void MaxMin(int *p,int *p2)
{
	if(*p<*p2)
	{
		Swap(p,p2);
	}
}

void PrintArrayAddresses(int *arr,int length)
{
	int i;
	for(i=0;i<length;i++)
	{
		printf("Address of element %d of Array is %d\n",i,arr+i);
	}
}





