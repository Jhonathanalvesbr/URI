#include <stdio.h>

int main(){
    int h1,h2,r,r2,contador=0;
    scanf("%d", &h1);
    scanf("%d", &h2);
    for(r = 1; r <= 24; r++)
    {
        if (r > h1 & h1 > h2)
        {
            contador = contador+1;
        }
    }
    if (h1 == h2)
    {
        printf("O JOGO DUROU %d HORA(S)\n", 24);
    }
    else if (h2>h1)
    {
        printf("O JOGO DUROU %d HORA(S)\n", h2-h1);
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)\n", contador+h2);
    }
    return 0;
}
