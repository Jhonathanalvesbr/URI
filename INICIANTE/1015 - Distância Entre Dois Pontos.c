#include <stdio.h>
#include <math.h>
 
int main() {
 
    /**
     * Escreva a sua solu��o aqui
     * Code your solution here
     * Escriba su soluci�n aqu�
     */
     float x1, y1, x2,y2, dis;
     scanf ("%f %f", &x1, &y1);
     scanf ("%f %f", &x2, &y2);
     dis = sqrt ((pow (x2-x1,2))+(pow (y2-y1,2)));
     printf ("%.4f\n", dis);
 
    return 0;
}