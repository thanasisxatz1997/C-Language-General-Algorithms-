#include <stdio.h>
#include <dirent.h>

int main()
{
	int remcheck = remove("a2.txt");
	if (remcheck) printf("Can't remove file\n");
	else printf("File removed\n");
	
	getch();
	return 0;
}
