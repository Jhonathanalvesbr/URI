#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int loop = 0, x = 0, n, numero, resultado;
	char input[10000] = "";
	
	scanf("%d", &loop);
	
	for(x; x < loop; x++)
	{
		scanf("%s", &input);
		
		n = 0;
		resultado = 0;
		
		while(input[n] != '\0')
		{
			numero = input[n]-48;
			
			if(numero == 1)
			{
				resultado += 2;
			}
			else if(numero == 2)
			{
				resultado += 5;
			}
			else if(numero == 3)
			{
				resultado += 5;
			}
			else if(numero == 4)
			{
				resultado += 4;
			}
			else if(numero == 5)
			{
				resultado += 5;
			}
			else if(numero == 6)
			{
				resultado += 6;
			}
			else if(numero == 7)
			{
				resultado += 3;
			}
			else if(numero == 8)
			{
				resultado += 7;
			}
			else if(numero == 9)
			{
				resultado += 6;
			}
			else if(numero == 0)
			{
				resultado += 6;
			}
			
			n++;
		}
		printf("%d leds\n", resultado);
	}
	
	
	
	return 0;
}
