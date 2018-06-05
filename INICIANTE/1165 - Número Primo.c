#include<stdio.h>

int main(){
	int primo =0;
	int vezes = 0;
	scanf("%d", &vezes);
	while(vezes > 0)
	{
	
	scanf("%d", &primo);
	int div = primo;
	int i = 0;
	while(primo > 0)
	{
		if(div % primo == 0)
		{
			i++;
			if(i > 2)
			{
				break;
			}
		}
		primo--;
	}
	if(i > 2)
	{
		printf("%d nao eh primo\n", div);
	}
	else
	{
		printf("%d eh primo\n", div);
	}
	vezes--;
	}
	return 0;
}