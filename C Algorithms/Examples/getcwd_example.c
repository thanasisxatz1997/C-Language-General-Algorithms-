#include <stdio.h>
#include <dirent.h>

int main()
{
	char folder[255];
	// Get current folder
	getcwd(folder, 255);
	// Print current folder
	printf("Current folder is: %s\n\n", folder);
	
	getch();
	return 0;
}
