#include <stdio.h>
#include <dirent.h>

int main()
{
	FILE *fpr;
	fpr = fopen("a1.txt", "r");
	if (fpr != NULL)
	{
		while(!feof(fpr))
		{
			char a;
			a = fgetc(fpr);
			printf("%c", a);
		}
		fclose(fpr);
	}
	
	getch();
	return 0;
}
