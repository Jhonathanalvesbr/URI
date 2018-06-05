#include<stdio.h>
#include<string.h>

int main ()
{
	char Pomekon[10001][151], input[10001] = "";
	int qntd = 0, x = 0, i = 0, pok = 0;
	int verifica = 0;
	
	scanf("%i\n", &qntd);
	
	for(x; x < qntd; x++)
	{

		gets(input);
		
		i = 0;
		verifica = 0;
		
		for(i; i < x; i++)
		{
			if(strcmp(Pomekon[i], input) == 0)
			{
				verifica = 1;
				break;
			}
		}
		
		if(verifica == 0)
		{
			verifica = 0;
			strcpy(Pomekon[pok++], input);
		}
		
	}
	
	printf("Falta(m) %i pomekon(s).\n", 151-pok, pok);
	
	return 0;
}