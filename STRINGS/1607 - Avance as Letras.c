#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	char str1[100000], str2[100000];
	int loop, x = 0, n = 0, i = 0;
	
	scanf("%d", &loop);
	
	for(x; x < loop; x++)
	{
		fflush(stdin);
		scanf("%s", &str1);
		scanf("%s", &str2);
		n = 0;
		i = 0;
		
		n = 0;
		i = 0;
		while(strcmp(str1, str2) != 0)
		{
			
			while(str1[i] != str2[i])
			{
				str1[i]++;
				if(str1[i] == 123 && str1[i] != str2[i])
				{
					str1[i] = 97;
				}
				n++;
			}
			
			i++;
		}
		
		printf("%d\n", n);
	}
	
	
	return 0;
}
