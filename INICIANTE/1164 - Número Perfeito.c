#include<stdio.h>

int main(){
	int vezes =0;
	int a =0, x =0, i =0;
	scanf("%d", &vezes);
	while(vezes >0)
	{
		scanf("%d", &a);
		x = a;
		while(a > 0)
		{
			if(x % a ==0)
			{
				i+= a;
				
			}
			a--;
		}
		if(x==i-x)
		{
			printf("%d eh perfeito\n", x);
		}
		else
		{
			printf("%d nao eh perfeito\n", x);
		}
		x =0;
		i =0;
		vezes--;
	}
	
	
	return 0;
}