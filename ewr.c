#include<stdio.h>
int sum(int m, int n);
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    printf("sum = %d\n",sum(m,n));
    return 0;    
}
int sum(int m, int n){
    int ret=0;
    for(;m<=n;m++){
        ret+=m;
        
        
    }
    return ret;
}
