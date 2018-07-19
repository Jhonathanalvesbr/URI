#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int loop, qtd, x, i, k = 0;
	char *string, input[100], str[100];
	
	scanf("%d %d", &qtd, &loop);
	
	string = (char*) malloc (qtd*2*sizeof(char));
	
	for(x = 0; x < qtd; x++)
	{
		scanf("%s", &string[k++]);
		scanf("%s", &string[k++]);
	}
	
	string[k] = '\0';
	getchar();
	for(x = 0; x < loop; x++)
	{
		fflush(stdin);
		gets(input);
		i = 0;
		while(input[i] != '\0')
		{
			k = 0;
			while(string[k] != '\0')
			{
				if(string[k] == input[i])
				{
					if(k%2 == 0) input[i] = string[k+1];
					else input[i] = string[k-1];
					break;
				}
				k++;				
			}
			i++;
		}
		puts(input);
	}
	
	return 0;
}
