#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[100000], obi[4] = "OBI", uri[4] = "URI";
	int loop, x = 0, n = 0;
	
	scanf("%d", &loop);
	
	for(x; x < loop; x++)
	{
	
		scanf("%s", &input);
		
		if(strlen(input) == strlen(obi))
		{
			n = 0;
			while(input[n] == obi[n] || input[n] == uri[n])
			{
				n++;
			}
			if(n == 2)
			{
				input[2] = 'I';
			}
		}
		
		printf("%s", input);
		if(x < loop-1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	
	
	return 0;
}
