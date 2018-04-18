#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ()
{
	char magia[1001] = "";
	int tamanhomagia = 0, x = 0, i = 0, j = 0;
	
	while(scanf("%s", &magia) != EOF)
	{
		
		tamanhomagia = strlen(magia);
		
		for(tamanhomagia; tamanhomagia > 0; tamanhomagia --)
		{
			for(j; j > 0; j--)
			{
				printf(" ");
			}
			
			for(x; x < tamanhomagia; x++)
			{
				printf("%c", magia[x]);
			
				if(x < tamanhomagia-1)
				{
					printf(" ");
				}

			}

			puts("");
			x = 0;
			i++;
			j = i;
			
		}
		
		j = 0;
		i = 0;

		puts("");
	}
	
	return 0;
}
