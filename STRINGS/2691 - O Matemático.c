#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void funcao(int a, int b)
{
	int n;
	

	for(n = 5; n <= 10; n++)
	{
		if(a == b)
		{
			printf("%d x %d = %d\n", a, n, a*n, b, n, b*n);
		}
		else
		{
			printf("%d x %d = %d && %d x %d = %d\n", a, n, a*n, b, n, b*n);
		}	
	}
	
}


int main()
{
	int loop = 0, x = 0, a, b, n, i;
	char string[100000] = "", A[100000], B[100000];
	
	scanf("%d", &loop);
	
	for(x; x < loop; x++)
	{
		fflush(stdin);
		scanf("%s", &string);

		n = 0;
		i = 0;
		
		while(string[n] != 'x')
		{
			A[n] = string[n];
			n++;
		}
		A[n] = '\0';
		n++;
		a = atoi(A);

		while(string[n] != '\0')
		{
			B[i] = string[n];
			n++;
			i++;
		}
		B[i] = '\0';
		b = atoi(B);

		funcao(a,b);
		
	}
	
	return 0;
}
