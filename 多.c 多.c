#include<stdio.h>
int main()
{
	int number,u;
	int count1=0;
	int count2=0;
	
    do{
    	scanf("%d",&number);
    	if( number>0 && number<100000){	
    	u=number%2;
    	if(u==0){
    		count1++;
		}else{
			count2++;
		}
		}
	}while(number!=-1 );
	
	printf("%d %d",count2,count1);
	return 0;
}
