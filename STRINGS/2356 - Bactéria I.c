#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char dna[101] = "", bacteria[101] = "";
	
	while(gets(bacteria) != NULL)
	{
	
		gets(dna);
		
		if(strstr(bacteria,dna))
		{
			printf("Resistente\n");
		}
		else
		{
			printf("Nao resistente\n");
		}
	}
	
	return 0;
}
