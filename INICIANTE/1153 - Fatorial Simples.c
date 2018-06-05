#include <stdio.h>
int fatorial (int n){
	if (n == 1){
		return 1;
	}
	else{
		return (n = (n*fatorial(n-1)));
	}
}


int main (){
	int fat;
	scanf("%d", &fat);
	fatorial(fat);
	printf("%d\n",fatorial(fat));
	return 0;
}