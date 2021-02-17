#include<stdio.h>
int main()
{
	int x;
	int n=1;
	scanf("%d",&x);
	n++;
	x/=10;
	while(x>0){
		n++;
		x/=10;
	} 
	printf("%d",n);
	return 0;
}
 
