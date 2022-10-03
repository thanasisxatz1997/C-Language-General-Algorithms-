#include <stdio.h>
#include <dirent.h>

int main()
{
	FILE *fpw;
	fpw = fopen("a1.bin", "wb");
	if (fpw != NULL)
	{
		int i;
		unsigned char c;
		for(i = 0; i < 32; i++)
		{
			c = (unsigned char)i;
			fwrite(&c, sizeof(char), 1, fpw);
		}
	fclose(fpw);
	}
	else printf("Can't open file\n");
	printf("Program terminated\n");
	
	getch();
	return 0;
}
