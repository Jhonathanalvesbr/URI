#include <stdio.h>
#include <math.h>
 
int main() {
 	float media, a, b;
	scanf("%f", &a);
	scanf("%f", &b);
	a = a * 3.5;
	b = b * 7.5;
	media = (a + b) / 11;
	printf("MEDIA = %0.5f\n", media);
    return 0;
}