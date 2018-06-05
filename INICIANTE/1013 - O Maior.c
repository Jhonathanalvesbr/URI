#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
	float x, a, b, abs, y;
	
	scanf ("%f", &a);
	scanf ("%f", &b);
	scanf ("%f", &abs);

	y = a;
	
	if (y < b)
	{
		y = b;
	}
		if (y < abs)
	{
		y = abs;
	}
	
	
	x = (a+b+abs+(a-b))/2;
	printf("%.0f eh o maior\n", y);	  
	
	
	
	system ("pause");
	return 0;
}