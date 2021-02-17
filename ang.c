#include<stdio.h>
#include<string.h>

int main(int argc,char const *argv[])
{
	
	int b;
	char s1[]="香蕉";
	char s3[]="螺蛳粉";
	char s5[]="酸辣粉"; 
	int r=0;
	b=sizeof(s3);
	
	char s4[b];
	printf("      子昂投喂系统2.0\n");
	printf("请输入投喂的食物:");
	do{
	
	scanf("%s",s4);
	if(strcmp(s1,s4)==0)
	{
	    r=1;
		printf("昂：再来点香蕉778");
		
	}else if(strcmp(s3,s4)) 
	{
		printf("昂：都是骗外地佬的，狗都不吃");
	}
	else
	{
		printf("昂：pyd48![黄豆流汗]");
	}
	}while(r!=1);
	
	
	return 0;
}
