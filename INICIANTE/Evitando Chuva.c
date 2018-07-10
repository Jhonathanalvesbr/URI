#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char previsao[1000][6];
	int loop, x = 0, chuvaIrTrabalho = 0, chuvaIrCasa = 0, flag = 0, topo = 0;
	
	scanf("%d", &loop);
	
	for(x; x < loop; x++)
	{
		fflush(stdin);
		scanf("%s", &previsao[topo++]);
		scanf("%s", &previsao[topo++]);
	}
	
	for(x = 0; x < topo; x++)
	{
		flag = 0;
		
		if(x%2 == 0)
		{
			while(strcmp(previsao[x], "chuva") == 0)
			{
				if(flag == 0)
				{
					flag = 1;
					chuvaIrTrabalho++;
				}
				x++;
			}
		}
		else
		{
			while(strcmp(previsao[x], "chuva") == 0)
			{
				if(flag == 0)
				{
					flag = 1;
					chuvaIrCasa++;
				}
				x++;
			}
		}
	}
	
	printf("%i %i\n", chuvaIrTrabalho, chuvaIrCasa);
	
	return 0;
}
