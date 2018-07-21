#include<stdio.h>

int main()
{
	char menbro[][10] = {"Rolien\0", "Naej\0", "Elehcim\0", "Odranoel\0"};
	int loop, x, dia, n, feedback;
	
	scanf("%d", &loop);
	getchar();
	
	for(x = 0; x < loop; x++)
	{
		scanf("%d", &dia);
		getchar();
		for(n = 1; n <= dia; n++) 
		{
			scanf("%d", &feedback);
			getchar();
			printf("%s\n", menbro[feedback-1]);
		}
	}
	
	return 0;
}
