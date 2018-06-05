#include<stdio.h>

int main(){
	int vetimpar[15], vetpar[15];
	int numero =0, x=0, par =0, impar =0, i =0;
	
	for(x;x<15;x++)
	{
		scanf("%d", &numero);
		if(numero % 2 == 0)
		{
			vetpar[par]=numero;
			par++;
			if(par == 5)
			{
				i =0;
				for(i; i < par; i++)
				{
					printf("par[%d] = %d\n", i, vetpar[i]);
						
				}
				par = 0;
			}
		}
		else
		{
			vetimpar[impar]=numero;
			impar++;
			if(impar == 5)
			{
				i =0;
				for(i; i < impar; i++)
				{
					printf("impar[%d] = %d\n", i, vetimpar[i]);
					
				}
				impar = 0;
			}
		}
	}
	i = 0;
	for(i;i<impar;i++)
	{
		printf("impar[%d] = %d\n", i, vetimpar[i]);
	}
	i=0;
	for(i;i<par;i++)
	{
		printf("par[%d] = %d\n", i, vetpar[i]);
	}
	return 0;
}