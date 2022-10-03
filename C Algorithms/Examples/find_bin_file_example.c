#include <stdio.h>
#include <dirent.h>

int main()
{
	char init_str[] = "Alphanumeric to search in - this is a test";
	char find_str[] = "search";
	char *ptr;
	ptr = strstr(init_str, find_str);
	if (ptr != NULL)
	{
		printf("'%s' is found in '%s'\nSubstring is '%s'\n", find_str, init_str, ptr);
	}
	
	getch();
	return 0;
}
