#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char previsao[2000][6];
	int loop, x = 0, guardaChuvaTrabalho = 0, guardaChuvaCasa = 0, flag = 0, topo = 0, compraCasa = 0, compraTrabalho = 0;
	
	scanf("%d", &loop);
	
	for(x; x < loop; x++)
	{
		fflush(stdin);
		scanf("%s", &previsao[topo++]);
		scanf("%s", &previsao[topo++]);
	}
	
	for(x = 0; x < topo; x++)
	{
		while(strcmp(previsao[x], "chuva") == 0 && x < topo)
		{
			if(flag == 0)
			{
				if(x%2 == 0)//Chuva para o trabalho
				{
					if(guardaChuvaCasa == 0)
					{
						compraTrabalho++;
					}
					else if(guardaChuvaCasa > 0)
					{
						guardaChuvaCasa--;
					}
				}
				else //Chuva para a casa
				{
					if(guardaChuvaTrabalho == 0)
					{
						compraCasa++;
					}
					else if(guardaChuvaTrabalho > 0)
					{
						guardaChuvaTrabalho--;
					}
				}
			}
			flag = 1;
			x++;
		}
		
		if(x%2 == 0 && flag == 1)
		{
			flag = 0;
			guardaChuvaCasa++;
		}
		else if(x%2 != 0 && flag == 1)
		{
			flag = 0;
			guardaChuvaTrabalho++;
		}
	}
	
	printf("%i %i\n", compraTrabalho, compraCasa);
	
	return 0;
}
