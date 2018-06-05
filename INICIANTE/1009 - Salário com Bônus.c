#include <stdio.h>

int main(){
    char nome;
    double x,y;
    scanf("%s", &nome);
    scanf("%lf", &x);
    scanf("%lf", &y);
    printf("TOTAL = R$ %0.2lf\n", x+(y*0.15));
    return 0;
}
