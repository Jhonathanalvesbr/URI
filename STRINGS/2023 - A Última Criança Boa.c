#include<stdio.h>
#include<string.h>

int main ()
{
	char criancas[1000][82], aux[82];
	int x = -1, i = 0, j = 0;
	
	while(gets(criancas[++x]) != NULL)
	{
	}
	
	for(i=0;i<=x;i++)
	{
		for(j=0;j<=x;j++)
		{
			if(strcasecmp(criancas[i], criancas[j])<0)
			{
				strcpy(aux, criancas[i]);
				strcpy(criancas[i], criancas[j]);
				strcpy(criancas[j], aux);
			}
		}
	}	 
	
	printf("%s\n", criancas[x]);
	
	return 0 ;
}