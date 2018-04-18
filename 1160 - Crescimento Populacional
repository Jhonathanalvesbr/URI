#include<stdio.h>

int main ()
{
	int x = 0, input = 0, populacaoA = 0, polulacaoB = 0, anos = 0;
	float taxacrescimentoA = 0, taxacrescimentoB = 0;
	
	scanf("%i", &input);
	
	for(x; x < input; x++)
	{
		scanf("%i %i %f %f", &populacaoA, &polulacaoB, 
		&taxacrescimentoA, &taxacrescimentoB);
		
		while(populacaoA <= polulacaoB)
		{
			populacaoA = populacaoA+((populacaoA*taxacrescimentoA)/100.00);
			polulacaoB = polulacaoB+((polulacaoB*taxacrescimentoB)/100.00);
			if(anos > 100)
			{
				break;
			}
			anos++;
		}
		
		if(anos <= 100)
		{
			printf("%i anos.\n", anos);
		}
		else
		{
			printf("Mais de 1 seculo.\n");
		}
		anos = 0;
	}
	
	return 0;
}
