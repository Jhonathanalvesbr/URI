#include<stdio.h>

int main (){
	int idade[999];
	int x = 0;
	float media = 0;
	int y = 0;
	while(1){
		scanf("%d", &idade[x]);
		if(idade[x]<0){
			break;
		}
	
		x++;
	}
	
	for(x; x > y; y++){
		media = media+idade[y];		
	}
	printf("%.2lf\n", media/x);
	
	
	return 0;
}