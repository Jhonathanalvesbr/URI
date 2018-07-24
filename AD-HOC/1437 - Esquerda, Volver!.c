#include<stdio.h>
#include<string.h>

int main()
{
	char recruta[][8] = {"Norte\0", "Leste\0", "Sul\0", "Oeste\0"}, comando[1001];
	int loop, x, n, k;
	
	for(x = 0; x < scanf("%d", &loop), getchar(); x++)
	{
		if(loop == 0)
		{
			break;
		}
		
		gets(comando);
		k = 0;

		for(n = 0; comando[n] != '\0'; n++)
		{
			if(comando[n] == 'D') k++;
			else if(comando[n] == 'E') k--;

			if(k > 3) k = 0;
			else if(k < -3) k = 0;
		}
		if(k >= 0) printf("%c\n", recruta[k][0]);
		else printf("%c\n", recruta[4+k][0]);
	}
	
	return 0;
}
