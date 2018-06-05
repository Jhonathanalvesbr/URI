#include <stdio.h>

int main(){
    double nome,guardar;
    int x,y;
    scanf("%d %d %lf", &x, &y, &nome);
    guardar = nome*y;
    scanf("%d %d %lf", &x, &y, &nome);
    printf("VALOR A PAGAR: R$ %.2lf\n", guardar + (nome*y));
    return 0;
}
