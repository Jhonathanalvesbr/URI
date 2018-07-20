#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char input[100000], res[100000], temp[3], Temp[3];
	int x, k = 0, n = 0, i = 0;
	
	gets(input);
	
	for(x = 0; input[x+2] != '\0'; x++)
	{
		temp[k++] = input[x+2];
		res[n++] = Temp[i++] = input[x];
		
		if(strcmp(temp, Temp) == 0)
		{
			n = n - 2;
			res[n] = '\0';
		}
			
		if(k == 2)
		{
			temp[i] = Temp[k] = '\0';
			i = k = 1;
			Temp[0] = Temp[1];
			temp[0] = temp[1];
		}
	}
	
	for(x; input[x] != '\0';x++)
	{
		res[n++] = input[x];
	}
	puts(res);
	return 0;
}
