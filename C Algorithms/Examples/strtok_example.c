/********************************************
 This example shows how to split a string to
 substrings separated by delimiter characters
*********************************************/

#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, cnt;
	
	// String to be splitted
	char str[] = "strtok is called several times";
	printf("The following string is to be splitted:\n\n%s\n\n", str);
	
	// Count how many delimiter characters exist in the string
	i = 0;
	
	cnt = 0;
	while(str[i] != '\0')
	{
		if (str[i++] == ' ') cnt++;
	}
	printf("Delimeter ' ' is met %d times\n\n", cnt);
	
	// Create string pointers
	char **s;
	s = (char **)malloc((cnt + 1) * sizeof(char *));
	
	// Use strtok to split string
	char *ptr = strtok(str, " ");
	i = 0;
	while (ptr != NULL)
	{
		// Store pointer to the string arrray
		s[i++] = ptr;
		ptr = strtok(NULL, " ");
	}
	
	// Print string array for verification
	for(i = 0; i <= cnt; i++)
	{
		printf("Splitted string %d: %s\n", i, s[i]);
	}
	
	// Press any key to end program
	printf("\n\nPress any key to end program\n\n");
	getch();
	return 0;
}
