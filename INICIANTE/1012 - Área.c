#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void)
{
	double a, b, c, pi, x;
	
	scanf ("%lf.1", &a);
	scanf ("%lf.1", &b);
	scanf ("%lf.1", &c);
	
	x = (a * c) / 2; 
	printf ("TRIANGULO: %.3lf\n", x);
	
	pi = 3.14159;
	x = pi * pow (c, 2);
	printf ("CIRCULO: %.3lf\n", x);
	
	x = ((a+b) * c) / 2;
	printf ("TRAPEZIO: %.3lf\n", x);
	
	x = b * b;
	printf ("QUADRADO: %.3lf\n", x);
	
	x = a * b;
	printf ("RETANGULO: %.3lf\n", x);
	  
	
	system ("pause");
	return 0;
}