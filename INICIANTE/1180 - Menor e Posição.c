#include<stdio.h>

int main(){
	int qnt = 0, x = 0;
	int vet[1000], pos = 0, vlr = 0;
	scanf("%d", &qnt);
	for(x; x < qnt ; x++)
	{
		scanf("%d", &vet[x]);
		if(vlr > vet[x])
		{
			vlr = vet[x];
			pos = x;
		}
	}
	printf("Menor valor: %d\nPosicao: %d\n", vlr,pos);
	return 0;
}