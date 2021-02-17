#include<stdio.h>


int search( int key, int a[], int len)
{
	int ret=-1;
	for(int i=0;i<len;i++){
		if(key==a[i]){
			ret=i;
			break;
		}
	}
	return ret;
}
int main()
{
	int a[]={1,3,2,5,12,14,23,6,9,45};
	int r=search(12,a,sizeof(a)/sizeof(a[0]));
	printf("%d",r);
	return 0;
}
