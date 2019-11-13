#include <stdio.h>
int main()
{
	FILE *fp;
	char ch;
	
	// read from new.txt file
	fp = fopen("new.txt","r");
	
	while(1)
	{
		ch = fgetc(fp);
		if(ch == EOF)
		break;
		printf("%c", ch);
	}
	fclose(fp);
	return 0;
}

