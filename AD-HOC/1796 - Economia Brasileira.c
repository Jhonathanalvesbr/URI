#include<stdio.h>
#include<stdlib.h>

int main()
{
	char *pesquisa;
	int pessoas, x, s, n;
	
	scanf("%d", &pessoas);
	getchar();
		
	pesquisa = (char*) malloc ((pessoas*2) * sizeof(char));

	gets(pesquisa);
	s = n = 0;
	
	for(x = 0; pesquisa[x] != '\0'; x++)
	{
		if(pesquisa[x] == '1') n += 1;
		else if(pesquisa[x] == '0') s += 1;
	}
	
	if(s > n) puts("Y");
	else puts("N");
	
	
	return 0;
}
