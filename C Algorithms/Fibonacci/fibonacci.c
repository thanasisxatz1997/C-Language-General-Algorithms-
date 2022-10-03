#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

long fibonacci(int n);

int main(int argc, char *argv[]) {
	int n;
	long fn;
	printf("please enter an intenger number:");
	scanf("%d",&n);
	fn=fibonacci(n);
	printf("The fibonacci number of: %d is: %ld\n",n,fn);
	system("PAUSE");
	return 0;
}

long fibonacci(int n)
{
	
	if (n==0)
	{
		return 0;
	}
	else if (n==1)
	{
		return 1;
	}
	else
	{
		return (fibonacci(n-1)+fibonacci(n-2));
	}
}
