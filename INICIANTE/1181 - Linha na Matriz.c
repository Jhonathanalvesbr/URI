#include<stdio.h>

int main(){
	int i =0, x =0;
	double mat[12][12], res =0, a =0;
	char s[0];
	

	scanf("%lf", &a);
	fflush(stdin);
	scanf("%s", &s[0]);


	for(x;x<12;x++)
	{
		for(i;i<12;i++)
		{
			scanf("%lf", &mat[x][i]);
		}
		i = 0;
	}
	x =0;
	int input = a;
	
	for(x;x<12;x++)
	{
		res = res+mat[input][x];
	}
	
	if(s[0] == 'S')
	{
		printf("%.1lf\n", res);
	}
	else
	{
		printf("%.1lf\n", res/12);
	}
	return 0;
}