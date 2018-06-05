#include<stdio.h>

int main(){
	int vet[10], x = 0;
	
	for(x;x<10;x++)
	{
		scanf("%d", &vet[x]);
	}
	
	for(x; x > 0; x--)
	{
		if(vet[x] <= 0)
		{
			vet[x] = 1;
		}
	}
	
	for(x;x<10;x++)
	{
		printf("X[%d] = %d\n", x, vet[x]);
	}
	
	return 0;
}