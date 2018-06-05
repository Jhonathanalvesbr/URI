#include<stdio.h>

int main(){
	int i =0, x =0, a =0;
	double mat[12][12], res =0;
	char s[1];
	

	fflush(stdin);
	scanf("%c", &s[0]);
	fflush(stdin);

	for(x;x<12;x++)
	{
		for(i;i<12;i++)
		{
			scanf("%lf", &mat[x][i]);
		}
		i = 0;
	}
	x =0;
	i=0;
	
	for(x;x<12;x++)
	{
		i=x+1;
		for(i;i<12;i++)
		{
			res = res+mat[x][i];
			a++;
		}
	}
	
	if(s[0] == 'S')
	{
		printf("%.1lf\n", res);
	}
	else
	{
		printf("%.1lf\n", res/a);
	}
	return 0;
}