#include<string.h>
#include<stdio.h>
#include<string.h>

int main()
{
	int loop = 0, x, n, i, j;
	char livro[1001][5], valorAtual[5];
	
	while(scanf("%d", &x) != EOF)
	{
		getchar();
		for(j = 0; j < x; j++)
		{
			gets(livro[j]);
			
			for(i = 1; i < j+1; i++) 
		  	{
		    	strcpy(valorAtual, livro[i]);
		    	
		    	n = i - 1;
		    	
				while(n >= 0 && strcmp(livro[n], valorAtual) > 0)
				{
					strcpy(livro[n+1], livro[n]);
					n--;
				}
		    	strcpy(livro[n+1], valorAtual);
			}
		}
     
      	for(n = 0; n < x; n++)
		{
			puts(livro[n]);
		}
	}
	
	return 0;
}

