#include<stdio.h>
int main()
{
	int  x;
	scanf("%d",&x);
	int mask=1;
	int t=x;
	while(t>9){
		t/=10;
		mask *=10;
	}
	printf("x=%d,mask=%d\n",x,mask);
	do{
		int d=x/mask;
		x%=mask;
		mask/=10;
		
		printf("%d ",d);
		
	}while(mask>0);
	printf("\n");
 } 
