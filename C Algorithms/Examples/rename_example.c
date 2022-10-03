#include <stdio.h>
#include <dirent.h>

int main()
{
	//renanme(old_file_name, new_file_name);
	int rencheck = rename("a1.txt", "a2.txt");
	if (rencheck == 0) printf("File renamed successfully\n");
	else printf("Can't rename the file\n");
	
	getch();
	return 0;
}
