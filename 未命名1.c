#include <stdio.h>
int main()
{
	char str1[20]= "香蕉";
	char str2[20];


	printf("    子昂投喂系统\n"); 
	printf("请输入你投喂的食物：");
	scanf("%s",&str2);
	if (str2 == str1){
		printf("再来点香蕉778");
		
	}
	else{
		printf("pyd48!");
	}
}
