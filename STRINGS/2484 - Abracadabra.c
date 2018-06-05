#include<string.h>
#include<stdio.h>
#include<stdlib.h>

int main ()
{
	char palavra[1001] = "";
	int tamanho = 0, x = 0, i = 0, j = 0;
	
	while(scanf("%s", palavra) != EOF)
	{
		
		tamanho = strlen(palavra);
		
		for(tamanho; tamanho > 0; tamanho --)
		{
			for(j; j > 0; j--)
			{
				printf(" ");
			}
			
			for(x; x < tamanho; x++)
			{
				printf("%c", palavra[x]);
			
				if(x < tamanho-1)
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