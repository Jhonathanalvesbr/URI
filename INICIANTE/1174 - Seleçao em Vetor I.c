#include<stdio.h>

int main(){
	float vet[100];
	int x = 0;

	
	for(x;x<100;x++)
	{
		scanf("%f", &vet[x]);
	}

	x =0;
	
	for(x;x<100;x++)
	{
		if(vet[x] <= 10)
		{
			printf("A[%d] = %.1f\n", x, vet[x]);
		}
	}
	
	return 0;
}