#include<stdio.h>

int main () {
	int numeros =0, vagas =0, jogada =0, a =0, b=0, c=0, aprovado =0;
	//printf("Candidatos: ");
	scanf("%d", &numeros);
	//printf("Vagas: ");
	scanf("%d", &vagas);
	int vetornumeros[numeros-1];
	int x =0;
	for (x; x < numeros; x++){
		scanf("%d", &jogada);
		vetornumeros[x]=jogada;
	}
	x =0;
	for (x; x < numeros-1; x++){
		a = vetornumeros[x];
		b = vetornumeros[x+1];
		if(a>b){
			c = a;
			a = b;
			b = c;
			vetornumeros[x] = a;
			vetornumeros[x+1] = b;
			x = 0;
		}
		}
	//printf("\nVetores ordenados:\n");
	x=numeros-1;
	for (x; x >= 0; x--){
		//printf("\\Vetor [%d] = %d\n",x, vetornumeros[x]);
	}
	c = numeros-vagas;
	if (numeros > vagas){
	x=numeros-vagas-1;
	for (x; x >= 0; x--){
		if(vetornumeros[x] == vetornumeros[c]){
			vagas++;
		}
		
	}
}
	else{
		vagas = numeros;
	}
 printf("%d\n",vagas);
 
	return 0;
}