#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char string[101], str[101], res[202];
	int loop, x, i, n, k;
	
	scanf("%d", &loop);
	getchar();
	
	for(x = 0; x < loop; x++)
	{
		gets(string);
		gets(str);
		
		k = 0;
		n = 0;
		for(i = 0; string[i] != '\0'; i++)
		{
			res[k++] = string[i];
			
			if(i%2 != 0 && str[n] != '\0')
			{
				while(str[n] != '\0')
				{
					res[k++] = str[n];
					
					if(n%2 != 0)
					{
						n++;
						break;
					}
					n++;
				}
			}
		}
		
		while(str[n] != '\0')
		{
			res[k++] = str[n++];
		}
			
		res[k] = '\0';
		puts(res);
	}
	
	return 0;
}
