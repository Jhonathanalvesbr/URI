#include<stdlib.h>
#include<stdio.h>

int descobrir ()
{
	char str[16], string[16], input[16];
	int n, vet[2], k;
	
		scanf("%s", &str);
		getchar();
		scanf("%s", &string);
		getchar();
		scanf("%s", &input);
		getchar();
		
		k = 0;
		for(n = 0; input[n] != '\0'; n++)
		{
			if(input[n] == '_') vet[k++] = n;
		}
		if(str[vet[0]] == string[vet[1]] || string[vet[0]] == str[vet[1]]) return 1;
		else return 0;
}

int main ()
{
	
	int loop, x;
	
	scanf("%d", &loop);
	getchar();
	
	for(x = 0; x < loop; x++)
	{
		printf("%s\n", descobrir() ? "Y" : "N");
	}
	
}
