#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	int t=0;
	do{
		int d=x%10;
		t=t*10+d;
		x/=10;
	}while(x>0);
	printf("t=%d\n",t);
	do{
		int d=t%10;
		printf("%d",d);
		if(t>9){
			printf(" ");
			
		}
		t/=10;
		
  
	}while(t>0);
	printf("\n");
	return 0;
	
		
	
 } 
