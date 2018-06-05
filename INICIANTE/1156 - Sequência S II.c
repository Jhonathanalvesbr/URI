#include<stdio.h>

int main (){
	float S = 1.0;
	int y = 0;
	float x[99];
	float z[99];
	
	x[0]=3;
	z[0]=2;
	while(x[y] <= 39){
		S =  S +(x[y] / z[y]);
		z[y+1] = z[y] * 2;
		x[y+1] = x[y] + 2;
		//printf("%.2f || %.2f = %.2f\n", x[y],z[y],S);

		y++;
		
	}

	
	
	printf("%.2f\n", S);
	
	
	return 0;
}