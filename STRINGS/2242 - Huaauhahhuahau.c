#include<stdio.h>
#include<string.h>

int main ()
{
	char risada[51], vogal[51], inverso[51];
	int x, k = 0;
	
	scanf("%s", &risada);
	getchar();
	
	for(x = 0; risada[x] != '\0'; x++)
	{
		if(risada[x] == 'a' || risada[x] == 'e' || risada[x] == 'i' || risada[x] == 'o' || risada[x] == 'u') vogal[k++] = risada[x];
	}
	vogal[k] = '\0';
	k = 0;

	for(x-= 1 ; x >= 0; x--)
	{
		if(risada[x] == 'a' || risada[x] == 'e' || risada[x] == 'i' || risada[x] == 'o' || risada[x] == 'u') inverso[k++] = risada[x];
	}
	inverso[k] = '\0';

	printf("%s\n", strcmp(vogal,inverso) == 0 ? "S" : "N");
	return 0;
}
