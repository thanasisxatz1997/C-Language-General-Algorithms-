#include <stdio.h>
#include <dirent.h>

int main()
{
	int dircheck = mkdir("test_folder");
	if (!dircheck) printf("Folder created\n");
	else printf("Can't create folder\n");
	
	return 0;
}
