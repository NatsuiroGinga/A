#include <stdio.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d",&d);
	a=d/100;
	b=(d-a*100)/10;
	c=d-a*100-b*10;
	e=c*100+b*10+a;
	printf("%d",e);
	return 0;
 } 
