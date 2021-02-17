#include<stdio.h>

int amount[] ={1,5,10,25,50};
char *name[]={"penny","nickel","dime","quarter","half-dollar"};

int search(int key,int a[],int len)
{
	int ret=-1;
	for(int i=0;i<len;i++)
	{
		if(key==a[i])
		{
			ret=i;
			break;
		}
	}
	return ret;
}
int main()
{
	int k;
	scanf("%d",&k);
	
	int r=search(k,amount,sizeof(amount)/sizeof(amount[0]));
	
	if(r>-1){
		printf("%s\n",name[r]);
	}
	return 0;
}
