#include <stdio.h>
#include <dirent.h>

int main()
{
	int a;
	FILE * fpw;
	fpw = fopen("a1.txt", "w");
	do
	{
		a = fgetc(stdin);
		if (a != EOF) fprintf(fpw, "%c", a);
	}
	while(a != EOF);
	fclose(fpw);
	
	getch();
	return 0;
}
