#include<stdio.h>
int max(int a[],int len){
	int maxid=0;
	for(int i=1;i<len;i++){
		if(a[i]>a[maxid])
		maxid=i;
	}return maxid;
} 


int main()
{
	int a[]={1,23,4,5,78,67,};
	
	int len=sizeof(a)/sizeof(a[0]);
	
	//swap a[maxid],a[len-1];
	for(int i=len-1;i>0;i--){
	
		int maxid = max(a,i+1);
		int t=a[maxid];
		a[maxid]=a[i];
		a[i]=t;
	
	}
	for(int i=0;i<len;i++){
		printf("%d ",a[i]);
	}
	return 0;
	
}

	
  
