#include <stdio.h>
#include <math.h>
 
int main() {
 
    double raio,area,pi;
    scanf("%lf", &raio);
    pi = 3.14159;
    
    area = pi * raio*raio;
    
    printf("A=%0.4lf\n", area);
    
 
    return 0;
}