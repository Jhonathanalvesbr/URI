#include<stdio.h>
#include<stdlib.h>

int main ()
{
	int input[1000], x = 0, escadinha = 0, flag = 0, n = 0, mode = 0;
	
	scanf("%d", &n);
	
	for(x; x < n; x++)
	{
		scanf("%i", &input[x]);
	}
	x = 0;

	while(x < n-1)
	{
		
		while(input[x] == input[x+1] && x < n-1)
		{
			flag = 1;
			x++;
		}
		if(flag == 1)
		{
			flag = 0;
			escadinha++;
		}
		
		mode = input[x+1]-input[x];
		
		while(input[x+1] - input[x] == mode && x < n-1)
		{
			flag = 1;
			x++;
		}
		if(flag == 1)
		{
			flag = 0;
			escadinha++;
		}
	}
	
	if(n != 1)
	{
		printf("%d\n", escadinha);
	}
	else if(n == 1)
	{
		printf("%d\n", n);
	}
	
	
	return 0;
}
