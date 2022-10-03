#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** CreateDynamicTextArray(int *words);
void PrintDynamicTextArray(char** text,int words);

int main(int argc, char *argv[]) {
	int w=0;
	char **text=NULL;
	
	text=CreateDynamicTextArray(&w);
	PrintDynamicTextArray(text,w);
	
	
	free(text);
	
	return 0;
}


char** CreateDynamicTextArray(int *words)
{
	char **text=NULL;
	char *word;
	while(scanf("%s",word=(char*)malloc(100*sizeof(char))),strcmp(word,"TELOS"))
	{
		(*words)++;
		text=(char**)realloc(text,(*words)*sizeof(char*));
		text[(*words)-1]=word;
	}
	free(word);
	return text;
}

void PrintDynamicTextArray(char** text,int words)
{
	int i;
	for(i=0;i<words;i++)
	{
		printf("%s\n",text[i]);
	}
}
