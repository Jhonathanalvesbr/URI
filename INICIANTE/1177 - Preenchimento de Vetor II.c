#include<stdio.h>

int main(){
	int vet[1000];
	int vezes = 0, x=0, i =0;
	
	scanf("%d", &vezes);
	
	for(x;x<1000;x++)
	{
		vet[x]=i;
		i++;
		if(i==vezes)
		{
			i = 0;
		}
	}
	x=0;
	for(x;x<1000;x++)
	{
		printf("N[%d] = %d\n", x,vet[x]);
	}
	
	
	return 0;
}