#include<stdio.h>
#include<string.h>

int main(int argc,char const *argv[])
{
	
	int b;
	char s1[]="�㽶";
	char s3[]="���Ϸ�";
	char s5[]="������"; 
	int r=0;
	b=sizeof(s3);
	
	char s4[b];
	printf("      �Ӱ�Ͷιϵͳ2.0\n");
	printf("������Ͷι��ʳ��:");
	do{
	
	scanf("%s",s4);
	if(strcmp(s1,s4)==0)
	{
	    r=1;
		printf("�����������㽶778");
		
	}else if(strcmp(s3,s4)) 
	{
		printf("��������ƭ����еģ���������");
	}
	else
	{
		printf("����pyd48![�ƶ�����]");
	}
	}while(r!=1);
	
	
	return 0;
}
