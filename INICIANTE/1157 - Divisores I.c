#include<stdio.h>

int main (){
	int N = 0;
	int x = 1;
	
	scanf("%d", &N);


	while(x <= N){
		if(N % x == 0){
			printf("%d\n", x);
		}
		x++;
		
	}

	
	
	
	return 0;
}