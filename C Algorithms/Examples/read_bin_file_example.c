#include <stdio.h>
#include <dirent.h>

int main()
{
	FILE *fpr;
	fpr = fopen("a1.bin", "rb");
	if (fpr != NULL)
	{
		unsigned char c;
		while(!feof(fpr))
		{
			fread(&c, sizeof(char), 1, fpr);
			printf("%x\t    %d\n", c, c);
		}
		fclose(fpr);
	}
	else printf("Can't open file\n");
	printf("Program terminated\n");
	
	getch();
	return 0;
}
