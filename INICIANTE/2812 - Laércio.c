#include<stdio.h>


void quicksort(int values[], int began, int end)
{
	int i, j, pivo, aux;
	i = began;
	j = end-1;
	pivo = values[(began + end) / 2];
	while(i <= j)
	{
		while(values[i] < pivo && i < end)
		{
			i++;
		}
		while(values[j] > pivo && j > began)
		{
			j--;
		}
		if(i <= j)
		{
			aux = values[i];
			values[i] = values[j];
			values[j] = aux;
			i++;
			j--;
		}
	}
	if(j > began)
		quicksort(values, began, j+1);
	if(i < end)
		quicksort(values, i, end);
}


int main ()
{
	int n = 0, x = 0, i = 0, j = 0, vet[100], flag = 0, input = 0, y = 0;
	
	scanf("%i", &n);
	
	for(x; x < n; x++)
	{
		scanf("%i", &i);
		j = 0;
		y = 0;

		for(j; j < i; j++)
		{
			scanf("%i", &input);
			if(input%2 != 0)
			{
				vet[y++] = input;
			}
		}
		
		quicksort(vet, 0, y);
		
		y--;
		
		if(y==0)
		{
			printf("%i\n", vet[y]);
		}
		else if(y>0)
		{
			printf("%i ", vet[y]);
		}
		else
		{
			printf("\n");
		}
		y--;
		flag = 0;
		i = 0;
		
		for(i; i < y; i++)
		{
			if(vet[i]%2 != 0 && flag == 0)
			{
				printf("%i ", vet[i]);
				flag = 1;
			}
			else if(vet[y]%2 != 0 && flag == 1)
			{
				i--;
				printf("%i ", vet[y--]);
				flag = 0;
			}
		}
		
		if(i == y)
		{
			printf("%i\n", vet[i]);
		}
	}
	
	return 0;
}
