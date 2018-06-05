#include<stdio.h>

int main(){
	int vet[20];
	int x = 0;
	
	for(x;x<20;x++)
	{
		scanf("%d", &vet[x]);
	}
	
	x=0;
	int i = 19;
	int atual=0;
	for(x;x<20;x++)
	{
		atual = vet[x];
		vet[x] = vet[i];
		vet[i] = atual;
		i--;
		if(i == x)
		{
			break;
		}
	}
	

	x=0;
	for(x;x<20;x++)
	{
		printf("N[%d] = %d\n", x, vet[x]);

	}
	return 0;
}