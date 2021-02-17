#include<stdio.h>
int main()
{
	int y=0;
	int x;
	scanf("%d",&x);
	if(x<0){
		y=-1;
	}else if(x==0){
		y=0;
	}else{
		y=2*x;
	}
	printf("f(x)=%d",y);
	return 0;
	 
}
