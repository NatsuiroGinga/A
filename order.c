#include<stdio.h>
int main()
{
	int a;
	int b=0;
	int c=0;
	scanf("%d",&a);
	while(a>0){
		b=a%10;
        printf("%d",b);
		
    /*printf("a=%d,b=%d,c=%d\n",a,b,c);*/
		
		a/=10;
	}
	
	return 0;
		
	
	
	
}
 
