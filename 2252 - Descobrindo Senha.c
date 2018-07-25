#include<stdio.h>


struct teclado{
	float oleo;
	int digito;
};

int main()
{
	struct teclado tecla[10];
	
	int loop, x, n, i, k, j = 1;
	
	struct teclado valorAtual;
	
	while(1)
	{
		scanf("%d", &loop);
		getchar();
		
		if(feof(stdin)) break;
		
		for(n = 0; n < 10; n++)
		{
			scanf("%f", &tecla[n].oleo);
			tecla[n].digito = n;
			
			for(i = 1; i < n+1; i++) 
		  	{
		    	valorAtual = tecla[i];
		    	k = i - 1;
				while(k >= 0 && tecla[k].oleo < valorAtual.oleo)
				{
					tecla[k+1] = tecla[k];
					k--;
				}
		    	tecla[k+1] = valorAtual;
			}
		}
		getchar();
		printf("Caso %d: ", j++);
		for(x = 0; x < loop; x++) printf("%d", tecla[x].digito);
		puts("");
	}
}
