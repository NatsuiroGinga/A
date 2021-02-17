#include <stdio.h>
int main()
{
	int a,b;
	printf("请输入两个整数");
	scanf("%d %d",&a,&b);
	int max = 0;
	if(a>b){
		max=a;
		printf("大的那个是%d\n",max);
	}
	
	else{max =  b;
	printf("大的那个是%d\n",max);
	}
	
 } 
