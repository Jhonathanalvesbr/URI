#include<stdio.h>

int main (){
	float S = 1.0;
	float y = 2;
	while(y != 101){
		S =  S +(1.0 / y);
		y++;
		
	}

	
	
	printf("%.2f\n", S);
	
	
	return 0;
}