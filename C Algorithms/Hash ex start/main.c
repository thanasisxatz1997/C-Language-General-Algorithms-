#include <stdio.h>
#include <stdlib.h>
#include<sys/stat.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void PrintWordArray(char wordArray[][50],int wordArrayLength);
int ReadInputArray(char inputStr[]);
int ValidateCommand(char wordArray[][50]);
int CheckFileName(char wordArray[][50]);
int CheckIfFileExists(const char* fileName);
int CheckCommandWord(char wordArray[][50],int line,char word[]);

int main(int argc, char *argv[]) {
	
	char inputStr[100];
	int inputStrLength=ReadInputArray(inputStr);
	
	
	char wordArray[30][50];
	int wordArrayLength=CreateWordArray(inputStr,wordArray);
	PrintWordArray(wordArray,wordArrayLength);
	
	ValidateCommand(wordArray);
	
	
	
	
	return 0;
}


int ReadInputArray(char inputStr[])
{
	int InputStrLength;
	int i=0;
	inputStr[i]=getchar();
	while(inputStr[i]!= '\n' && i<100)
	{
		i++;
		inputStr[i]=getchar();
	}
	inputStr[i]='\0';
	
	i=0;
	while(inputStr[i]!='\0'&&i<100)
	{
		i++;
	}
	InputStrLength=i-1;
	
	
	return InputStrLength;
}

int CreateWordArray(char inputStr[],char wordArray[][50])
{
	int i=0;
	int j=0;
	int k=0;
	int wordArrayLength;
	
	while(inputStr[i]!='\0')
	{
		while(inputStr[i]!=' '&& inputStr[i]!='\0')
		{
			wordArray[k][j]=inputStr[i];
			i++;
			j++;
		}
		wordArray[k][j]='\0';
		i++;
		k++;
		j=0;
	}
	
	wordArrayLength=k;
	i=0;
	j=0;
	
	while(i<wordArrayLength)
	{
		while(wordArray[i][j] != '\0')
		{
			j++;
		}
		j=0;
		i++;
	}
	return wordArrayLength;
}

void PrintWordArray(char wordArray[][50],int wordArrayLength)
{
	int i=0;
	int j=0;
	int k=0;
	while(i<wordArrayLength)
	{
		while(wordArray[i][j]!='\0')
		{
			printf("%c",wordArray[i][j]);
			j++;
		}
		i++;
		j=0;
		printf("\n");
	}
}

int ValidateCommand(char wordArray[][50])
{
	if (wordArray[0][0]!='-'||wordArray[0][1]!='f')
	{
		return -9;
	}
	else
	{
		int newFileCheck=CheckIfNewFile(wordArray);
		if(CheckFileName(wordArray) == 0 && newFileCheck==-1)
		{
			printf("FILE DOESNT EXIST\n");
			return -1;
		}
		else
		{
			if(newFileCheck==0)//-secretkey
			{
				printf("Opening file");
			}
			else if(newFileCheck==1)//-new
			{
				char word[]="-secretkey";
				if(CheckCommandWord(wordArray, 3,word)==1)
				{
					printf("Creating new file\n");
				}
			}
			return 0;
		}
	}
}

int CheckFileName(char wordArray[][50])
{
	int i=0;
	char fileName[50];
	while(wordArray[1][i]!='\0' && i<50)
	{
		fileName[i]=wordArray[1][i];
		i++;
	}
	fileName[i]='\0';
	
	printf("the filename is : %s\n",fileName);
	if(CheckIfFileExists(fileName)==1)
	{
		printf("FILE EXISTS\n");
		return 1;
	}
	else
	{
		printf("FILE DOESNT EXIST\n");
		return 0;
	}
}

int CheckIfNewFile(char wordArray[][50])
{
	int i=0;
	char fileCommand[50];
	while(i<50 && wordArray[2][i]!='\0')
	{
		fileCommand[i]=wordArray[2][i];
		i++;
	}
	fileCommand[i]='\0';
	if(strcmp(fileCommand,"-new")==0)
	{
		printf("NEW FILE\n");
		return 1;
	}
	else if(strcmp(fileCommand,"-secretkey")==0)
	{
		printf("NEW SECRET KEY IN FILE\n");
		return 0;
	}
	else
	{
		return -1;
	}
}

int CheckIfFileExists(const char* fileName)
{
	struct stat buffer;
	int exists=stat(fileName,&buffer);
	if(exists==0)
	{
		return 1;//file exists
	}
	else
	{
		return 0;//file doesnt exist
	}
}

int CheckCommandWord(char wordArray[][50],int line,char word[])
{
	int i=line;
	int j=0;
	char str[50];
	while(wordArray[i][j]!='\0' && j<50)
	{
		str[j]=wordArray[i][j];
		j++;
	}	
	str[j]='\0';
	
	if(strcmp(word,str)==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
