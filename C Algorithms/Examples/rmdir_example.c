#include <stdio.h>
#include <dirent.h>

int main()
{
	int dircheck = rmdir("test_folder");
	if (!dircheck) printf("Folder deleted\n");
	else printf("Can't delete folder\n");
	
	return 0;
}
