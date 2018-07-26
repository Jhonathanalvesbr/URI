#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	getchar();

	if(b-a > 0)
	{
		if(b <= 2) puts("nova");
		else if(b <= 96) puts("crescente");
		else puts("cheia");
	}
	else
	{
		if(b > 96) puts("cheia");
		else if(b < 3) puts("nova");
		else puts("minguante");
	}
	return 0;
}
