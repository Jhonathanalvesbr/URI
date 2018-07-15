#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Game(char str1[], char str2[])
{
	char tesoura[10] = "tesoura", papel[10] = "papel", pedra[10] = "pedra", lagarto[10] = "lagarto", spock[10] = "spock";
	
	if(strcmp(str1, tesoura) == 0 && strcmp(str2, papel) == 0)
	{
		printf("rajesh\n");
	}
	else if(strcmp(str1, papel) == 0 && strcmp(str2, pedra) == 0)
	{
		printf("rajesh\n");
	}
	else if(strcmp(str1, pedra) == 0 && strcmp(str2, lagarto) == 0)
	{
		printf("rajesh\n");
	}
	else if(strcmp(str1, lagarto) == 0 && strcmp(str2, spock) == 0)
	{
		printf("rajesh\n");
	}
	else if(strcmp(str1, spock) == 0 && strcmp(str2, tesoura) == 0)
	{
		printf("rajesh\n");
	}
	else if(strcmp(str1, tesoura) == 0 && strcmp(str2, lagarto) == 0)
	{
		printf("rajesh\n");
	}
	else if(strcmp(str1, lagarto) == 0 && strcmp(str2, papel) == 0)
	{
		printf("rajesh\n");
	}
	else if(strcmp(str1, papel) == 0 && strcmp(str2, spock) == 0)
	{
		printf("rajesh\n");
	}
	else if(strcmp(str1, spock) == 0 && strcmp(str2, pedra) == 0)
	{
		printf("rajesh\n");
	}
	else if(strcmp(str1, pedra) == 0 && strcmp(str2, tesoura) == 0)
	{
		printf("rajesh\n");
	}
	
	else if(strcmp(str2, tesoura) == 0 && strcmp(str1, papel) == 0)
	{
		printf("sheldon\n");
	}
	else if(strcmp(str2, papel) == 0 && strcmp(str1, pedra) == 0)
	{
		printf("sheldon\n");
	}
	else if(strcmp(str2, pedra) == 0 && strcmp(str1, lagarto) == 0)
	{
		printf("sheldon\n");
	}
	else if(strcmp(str2, lagarto) == 0 && strcmp(str1, spock) == 0)
	{
		printf("sheldon\n");
	}
	else if(strcmp(str2, spock) == 0 && strcmp(str1, tesoura) == 0)
	{
		printf("sheldon\n");
	}
	else if(strcmp(str2, tesoura) == 0 && strcmp(str1, lagarto) == 0)
	{
		printf("sheldon\n");
	}
	else if(strcmp(str2, lagarto) == 0 && strcmp(str1, papel) == 0)
	{
		printf("sheldon\n");
	}
	else if(strcmp(str2, papel) == 0 && strcmp(str1, spock) == 0)
	{
		printf("sheldon\n");
	}
	else if(strcmp(str2, spock) == 0 && strcmp(str1, pedra) == 0)
	{
		printf("sheldon\n");
	}
	else if(strcmp(str2, pedra) == 0 && strcmp(str1, tesoura) == 0)
	{
		printf("sheldon\n");
	}
	
	else
	{
		printf("Empate\n");
	}
}

int main ()
{
	char str1[10], str2[10]; 
	int loop, x = 0;
	
	scanf("%d", &loop);
	
	for(x; x < loop; x++)
	{
		fflush(stdin);
		scanf("%s", &str1);
		scanf("%s", &str2);
		
		Game(str1, str2);
		
	}
	
	return 0;
}
