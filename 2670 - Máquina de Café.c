#include<stdio.h>
int main (){
    int a =0, b =0, c =0, tempo = 0, andar1 = 0, andar2 = 0, andar3 = 0;
    
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    
    tempo = andar1 = (b*2)+(c*4);
    andar2 = (a*2)+(c*2);
    andar3 = (a*4)+(b*2);
    
    if(tempo > andar1)
    {
    	tempo = andar1;
	}
    if(tempo > andar2)
    {
    	tempo = andar2;
	}
    if(tempo > andar3)
    {
    	tempo = andar3;
	}
	printf("%i\n", tempo);
    return 0;
}
