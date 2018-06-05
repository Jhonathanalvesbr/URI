#include<stdio.h>
int res[999];
int y=0;
int function (int b, int c, int d){
	 int ress =0;
	while(1)
		{
			if(b % 2 != 0)
			{
				ress = ress+b;
				d++;
			}
			
			if(c == d)
			{
				res[y]=ress;
				b=c;
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
	int d = 0;

	scanf("%d", &a);


	for(x; x < a; x++){
		scanf("%d", &b);
		scanf("%d", &c);
		function (b,c,d);
		
	}
	x =0;
	
	
	
	for(x;x<y;x++)
	{
		printf("%d\n",res[x]);
	}
	
	
	return 0;
}