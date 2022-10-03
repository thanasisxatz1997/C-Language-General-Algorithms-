/************************************************************
 This example shows:
 a. how to use getwd() function to return the current folder
 b. how to use chdir() function to change the current folder
************************************************************/

#include <stdio.h>
int main()
{
	// String to hold the current folder
	char folder[100];
	
	printf("Press any key to print current folder from C language: \n\n");
	// Press any key to continue
	getch();
	// Get current folder
	getcwd(folder, 100);
	// Print current folder
	printf("Current folder is: %s\n\n", folder);
	
	printf("Press any key to change the current folder from C language (go to one level up): \n\n");
	// Press any key to continue
	getch();
	// Change the current folder
	chdir("..");
	printf("Folder changed\n\n");
	
	printf("Press any key to print current folder from C language: \n\n");
	// Press any key to continue
	getch();
	// Get current folder
	getcwd(folder, 100);
	// Print current folder
	printf("Current folder is: %s\n\n", folder);
	
	// Press any key to end program
	printf("\n\nPress any key to end program\n\n");
	getch();
	return 0;
}
