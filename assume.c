#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
int main()
{
	srand(time(0));
	int number;
	int assume=rand()%100+1;
	int count=0;
	scanf("%d",&number);
	while(number != assume ){
		
		if(number>assume){
			printf("more");
			
		}else{
			printf("less");
			
		}count++;
		
		scanf("%d",&number);
		 
	}count++;
	printf("yes %d",count);
	return 0;
}
