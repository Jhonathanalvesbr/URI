#include <stdio.h>
#include <math.h>
 
int main() {
 
    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
	int tempo, velo;
	double x , y;
	y = 12;
	scanf ("%d", &tempo);
	scanf ("%d", &velo);
	x = (tempo * velo) / y;
	
	printf ("%.3lf\n", x);
	
    return 0;
}