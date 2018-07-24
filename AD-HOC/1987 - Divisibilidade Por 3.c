#include<stdio.h>
#include<stdlib.h>

int main()
{
	int loc, n, res;
	char *input, sim[5] = "sim\0", nao[5] = "nao\0";
	
	while(1)
	{
		scanf("%d", &loc);
		
		if(feof(stdin)) break;
		else input = (char*) malloc ((1+loc) * sizeof(char));
		
		scanf("%s",input);
		getchar();

		for(n = 0, res = 0; input[n] != '\0'; n++) res += input[n]-48;
		
		printf("%d %s\n", res, res % 3 == 0 ? sim : nao);
	}
	
	return 0;
}
