#include<stdio.h>
int main(int argc, char *argv[])
{
	FILE *fp;
	char s[6]="abcde";
	char buff[]="";
	fp = fopen("test.txt","a+");
	if(fp == NULL)
	{
		printf("file open error");
		return 0;
	}
	
	fwrite(s, 1, 6, fp);
	
	//fread(buff, 1, 6, fp);
	
	fclose(fp);
	
	//printf("%s\n",buff);
	return 0;
}
