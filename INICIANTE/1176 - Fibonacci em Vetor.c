#include<stdio.h>

int main(){
	int vezes =0, x =0, atual =0;
	long long int vet[9999], a =0, b=0; 
	int fbo=0, i =0;
	scanf("%d", &vezes);
	int vet2[9999];
	for(x;x<vezes; x++)
	{
		a=1,b =0; i =0;
		scanf("%d", &fbo);
		vet[x]=0;
		vet2[x]=fbo;
		for(i;i<fbo;i++)
		{
			
			vet[x]=vet[x]+a;
			a = b;
			b=vet[x];
		}
		
	}
	x=0;
	for(x;x<vezes; x++)
	{
		printf("Fib(%d) = %lld\n", vet2[x],vet[x]);
	}
	return 0;
}