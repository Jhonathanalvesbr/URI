#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	int a, b;
	char res[100];
	while(1)
	{
		scanf("%d %d", &a, &b);
		getchar();
		if(a == 0 && b == 0)
		{
			break;
		}
		a = a+b;
		sprintf(res,"%d",a);
		b = 0;
		
		while(res[b] != '\0')
		{
			if(res[b] != '0')
			{
				printf("%c", res[b]);
			}
			b++;
		}
		puts("");
	}
	return 0;
}
