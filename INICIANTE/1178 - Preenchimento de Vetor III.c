#include<stdio.h>

int main(){
	double vet[100];
	double vezes = 0;
	int x=0, i =0;
	
	scanf("%lf", &vezes);
	
	for(x;x<100;x++)
	{
		if(i>0)
		{
			vet[x]=vet[x-1]/2;
		}
		else
		{
			vet[x]=vezes;
			i++;
		}
	}
	x=0;
	for(x;x<100;x++)
	{
		printf("N[%d] = %.4lf\n", x,vet[x]);
	}
	
	
	return 0;
}