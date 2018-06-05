#include<stdio.h>
#include<stdlib.h>
#define N 1000000
#include<string.h>
#include<ctype.h>

int main () 
{
	char palavra[N];
	int m = 0, x = 0;
	gets(palavra);

	for(x; x < strlen(palavra); x++)
	{
		if(toupper(palavra[x]) == 'Z')
		{
			//printf("%c\n", toupper(palavra[x]));
			m++;
		}
		else if(toupper(palavra[x]) == 'E' && m == 1)
		{
			//printf("%c\n", toupper(palavra[x]));
			m++;
		}
		else if(toupper(palavra[x]) == 'L' && m == 2)
		{
			//printf("%c\n", toupper(palavra[x]));
			m++;
		}
		else if(toupper(palavra[x]) == 'D' && m == 3)
		{
			//printf("%c\n", toupper(palavra[x]));
			m++;
		}
		else if(toupper(palavra[x]) == 'A' && m == 4)
		{
			break;
		}
		else
		{
			m = 0;
		}
	}

	if(m > 3)
	{
		printf("Link Bolado\n");
	}
	else
	{
		printf("Link Tranquilo\n");
	}
	return 0;
}