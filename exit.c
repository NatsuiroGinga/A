#include<stdio.h>
int main()
{
	int x;
	int one,two,five;
	int exit=0;
	scanf("%d",&x);
	for(one =1;one<x*10;one++){
		for(two=1;two<x*5;two++){
			for(five=1;five<2;five++){
				if(one+two*2+five*5==x*10){
					printf("������%d��һ�Ǽ�%d�����Ǽ�%d����ǵõ�%dԪ\n",one,two,five,x);
					exit=1;
					break;
				}
			}if(exit==1) break;
				
			
		}if(exit==1) break; 
	}
	return 0;
}

