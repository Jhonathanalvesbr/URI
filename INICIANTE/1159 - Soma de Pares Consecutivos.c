#include<stdio.h>
int res[999];
int y=0;
int function (int b){
	 int ress =0;
	 int d = 0;
	while(1)
		{
			if(b % 2 == 0)
			{
				ress = ress+b;
				d++;
			}
			
			if(d == 5)
			{
				res[y]=ress;
				d=0;
				ress =0;
				y++;
				break;
			}	
			b++;
		}
}


int main (){
	int a = 0;
	int x = 0;
	int b = 0;
	int c =0;
	
	scanf("%d", &b);
	while(b != 0){
		function (b);
		scanf("%d", &b);
	}
	x =0;
	
	
	
	for(x;x<y;x++)
	{
		printf("%d\n",res[x]);
	}
	
	
	return 0;
}