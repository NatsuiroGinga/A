#include<stdio.h>
int main()
{
	int type;
	scanf("%d",&type);
	switch(type){
		case 1:
			printf("ÄãºÃ");
			break;
		case 2:
			printf("morning");
			break;
		case 3:
			printf("eve");
			break;
		case 4:
			printf("bye");
		default:
			printf("a");
	}
	return 0;
}
