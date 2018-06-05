#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main ( ) {
    int x = 0, n = 0, i = 0, a = 0, b = 0, cout = 0, imprimir = 0, j = 0, tamanho = 0;
    char espelho[12221] = "";
    
    scanf("%d", &cout);
    
    for(x; x < cout; x++)
    {
    	scanf("%d", &a);
    	scanf("%d", &b);
    	
    	n = a;
    	i = b;
    	
    	for(n; n <= b; n++)
    	{
    		printf("%d", n);
		}
		
		for(i; i >= a; i--)
		{

			sprintf(espelho,"%d",i);

			j = strlen(espelho);
			j = j -1;

			for(j; j >= 0; j--)
			{
				printf("%c", espelho[j], j);
			}
			
			strcpy(espelho, "");
			
		}
		printf("\n");
	}
    
    return 0;
}