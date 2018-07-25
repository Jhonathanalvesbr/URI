#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>

struct pokemon
{
	char nome[101];
	int hp;
	int at;
	int df;
	int sp;
};


int main()
{
	int loop, x, lvl, b, v, e, hp, n, k;
	char nome[101];
	
	scanf("%d", &loop);
	getchar();
	struct pokemon *poke[loop];
	
	for(x = 0; x < loop; x++)
	{
		poke[x] = (struct pokemon*) malloc(sizeof(struct pokemon));
		
		scanf("%s %d", &nome, &lvl);
		getchar();
		
		sprintf(poke[x]->nome, "%s nivel %d", nome, lvl);
		
		for(n = 0; n < 4; n++)
		{
			scanf("%d %d %d", &b, &v, &e);
			getchar();
			
			if(n == 0) poke[x]->hp = (((v+b+(sqrt(e)/8)+50)*lvl)/50) + 10;
			else if(n == 1) poke[x]->at = (((v+b+(sqrt(e)/8))*lvl)/50) + 5;
			else if(n == 2) poke[x]->df = (((v+b+(sqrt(e)/8))*lvl)/50) + 5;
			else poke[x]->sp = (((v+b+(sqrt(e)/8))*lvl)/50) + 5;
		}

	}
	
	for(x = 0; x < loop; x++)
	{
		printf("Caso #%d: %s\n", x+1, poke[x]->nome);
		printf("HP: %d\n", poke[x]->hp);
		printf("AT: %d\n", poke[x]->at);
		printf("DF: %d\n", poke[x]->df);
		printf("SP: %d\n", poke[x]->sp);
	}
	
	return 0;
}
