#include <stdio.h>
#include <stdlib.h>

int fibonacci(int n)
{
	if (n == 0)
	{
		return 0;
   	}
	else if (n == 1)
	{
		return 1;
   	}
	else
	{
		return (fibonacci(n-1) + fibonacci(n-2));
   	}
}

int main()
{
	int i = 9;
	printf("Fibbonacci of %d: %d", i, fibonacci(i));
	
	//Press any key to end program
	printf("\n\nPress any key to end program\n\n");
	getch();
	return 0;
}

