#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#include<ctype.h>

int main ()
{
	char *grace = "GRACE HOPPER\0", *bug = "BUG\0", input[51], str[5][51];
	int n = 0, x = 0, i = 0, flag = 0;
	char cobol1[6], cobol2[6];	
	char saida[6] = "COBOL";
	
	while(1)
	{
		fflush(stdin);
		scanf("%s", &input); //Entrada de dados
		
		if(feof(stdin)) //Verifica EoF
		{ 
			break;
		} 
		
		x = 0; //Contador Entrada
		i = 0; //Contador Vetor de string
		n = 0; //contar string
		
		while(input[x] != '\0') //Enquanto fim de string
		{
			if(input[x] == '-') //Se achar '-' pula para o proximo vetor
			{
				str[i][n] = '\0';
				n = 0;
				i++;
				x++;
			}
			
			str[i][n] = toupper(input[x]); //Copia caracter para vetor de string
			
			n++;
			x++;
		}
		
		str[i][n] = '\0';
		
		x = 0;
		n = 0;
		
		for(n; n < 5; n++) //Separa inicio da string e fim da string
		{
			cobol1[x] = str[n][0];
			cobol2[x] = str[n][(strlen(str[n]))-1];
			x++;
		}
		cobol2[x] = '\0';
		
		
		x = 0;
		flag = 0;
		
		if(cobol1[0] == 'C') //Verifica se iniciar com C
		{
			while(x < 5)
			{
				if(cobol1[x] != saida[x])
				{
					if(cobol2[x] != saida[x])//Teste falha não contem a palavra cobol
					{
						flag = 1;
						break;
					}
				}
				x++;
			}
			if(flag == 1)
			{
				puts(bug);
			}
			else
			{
				puts(grace);
			}
		}
		else if (cobol2[0] == 'C') //Verifica se inicia com C
		{
			while(x < 5)
			{
				if(cobol2[x] != saida[x])
				{
					if(cobol1[x] != saida[x])//Teste falha não contem a palavra cobol
					{
						flag = 1;
						break;
					}
				}
				x++;
			}
			if(flag == 1)
			{
				puts(bug);
			}
			else
			{
				puts(grace);
			}
		}
		else//Teste falha não contem a palavra cobol
		{
			puts(bug);
		}
	}
			
	return 0;
}
