#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[10001], one[4] = "one", two[4] = "two", three[6] = "three";
	int loop, x = 0, n;
	
	scanf("%d", &loop);
	
	for(x; x < loop; x++)
	{
		fflush(stdin);
		scanf("%s", input);
		
		if(strlen(input) == strlen(one))
		{
			n = 0;
			if(input[0] == 'o')
			{
				n++;
			}
			if(input[1] == 'n')
			{
				n++;
			}
			if(input[2] == 'e')
			{
				n++;
			}
			if(n > 1)
			{
				printf("1\n");
			}
		}
		if(strlen(input) == strlen(two))
		{
			n = 0;
			if(input[0] == 't')
			{
				n++;
			}
			if(input[1] == 'w')
			{
				n++;
			}
			if(input[2] == 'o')
			{
				n++;
			}
			if(n > 1)
			{
				printf("2\n");
			}
		}
		else if(strlen(input) == strlen(three))
		{
			n = 0;
			if(input[0] == 't')
			{
				n++;
			}
			if(input[1] == 'h')
			{
				n++;
			}
			if(input[2] == 'r')
			{
				n++;
			}
			if(input[3] == 'e')
			{
				n++;
			}
			if(input[4] == 'e')
			{
				n++;
			}
			if(n > 2)
			{
				printf("3\n");
			}
		}
	}
	
	return 0;
}
