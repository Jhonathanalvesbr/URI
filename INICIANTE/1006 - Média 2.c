#include <stdio.h>
#include <math.h>
 
int main() {
 	double media, a, b, c;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);
	a = a * 2;
	b = b * 3;
	c = c * 5;
	media = (a + b + c) / 10;
	printf("MEDIA = %0.1lf\n", media);
    return 0;
}