#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int validar(char *senha)
{
	int x = 0;
	int digito, upper, low;
	
	digito = upper = low = 0;
	
	while(senha[x] != '\0')
	{
		if(!isalnum(senha[x]) || x == 32) return 0;
		
		else if(isupper(senha[x])) upper = 1;
		else if(islower(senha[x])) low = 1;
		else if(isdigit(senha[x])) digito = 1;
		else return 0;
		
		x++;
	}
	
	return x >= 6 && digito && upper && low;
}


int main ()
{
	char senha[5000] = "";
	
	while(gets(senha))
	{
		printf("Senha %svalida.\n", validar(senha) ? "" : "in" );
	}
	
	return 0;
}
