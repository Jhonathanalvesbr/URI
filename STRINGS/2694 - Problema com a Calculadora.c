#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main()
{
	char input[100000], str[100000];
	int loop, x, n, res, k, flag;
	
	scanf("%d", &loop);
	getchar();
	
	for(x = 0; x < loop; x++)
	{
		gets(input);
		res = 0;
		k = 0;
		flag = 0;
		for(n = 0; input[n] != '\0'; n++)
		{
			while(isdigit(input[n]))
			{
				flag = 1;
				str[k++] = input[n++];
			}
			
			if(flag == 1)
			{
				str[k] = '\0';
				flag = 0;
				res += atoi(str);
				k = 0;
			}
		}
		printf("%d\n", res);
	}
	
	return 0;
}
