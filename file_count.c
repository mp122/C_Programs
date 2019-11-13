#include <stdio.h>
int main()
{
	FILE *fp;
	char ch;
	int nol=0, not=0, nob=0, noc=0;
	fp = fopen("new.txt","r");
	while(1)
	{
		ch = fgetc(fp);
		if(ch == EOF)
		{
				break;
		}
		
		if(ch == ' ')
		nob++;
		else if(ch == '\n')
		nol++;
		else if(ch == '\t')
		not++;
		else
		noc++;
	}
	fclose(fp);
	printf ( "\nNumber of characters = %d", noc ); 
	printf ( "\nNumber of blanks = %d", nob ); 
	printf ( "\nNumber of tabs = %d", not ); 
	printf ( "\nNumber of lines = %d", nol ); 
	return 0;
}
