#include<stdio.h>
int main()
{
	int sum=0;
	int count=0;
	int number;
	do{
		scanf("%d",&number);
		if(number != -1){
			sum+=number;
			count++;
			
		}
	}while(number != -1);
	printf("%f",1.0*sum/count);
	return 0;
	
}
