#include<stdio.h>
char *name[]={"Ïã½¶","ÂİòÏ·Û","ËáÀ±·Û","ÉìÀÁÑü"};
char *res[]={"ÔÙÀ´µãÏã½¶778","¹·¶¼²»³Ô","pyd48","ºßßó"};

int search(char*key,char*name,int*len){

	int ret =-1;
	for(int i=0;i<len;i++){
		if(*key==name[i]){
			ret=i;
			break;
		}
	}
	return ret;

}
int main()
{
	char*beh;
	scanf("%s",&beh);
	int r=search(beh,name,sizeof(name)/sizeof(name[0]));
	
	if(r>-1){
		printf("%s",res[r]);
	}
}
