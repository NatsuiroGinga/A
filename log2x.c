#include<stdio.h>
int main()
{
	int x,b;
	int ret = 0;
	
	scanf("%d",&x);
	b=x;
	while(x>1){
		x/=2;
		ret ++;
	}
	printf("log2 of %d is %d.",b,ret);
	return 0;
	 
}
