#include<stdio.h>

int main(){
	int vet[10], x = 0;
	scanf("%d", &vet[0]);
	x=1;
	
	for(x;x<10;x++)
	{
		vet[x] = vet[x-1]*2;
	}
	x=0;
	
	for(x;x<10;x++)
	{
		printf("N[%d] = %d\n", x, vet[x]);
	}
	
	return 0;
}