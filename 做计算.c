#include <stdio.h>
int main()
{
	int price = 0;
	
	print("�������� (Ԫ) ");
	scanf("%d",&price);
	
	int change = 100-price;
	
	printf("����%dԪ\n", change);
	
	return 0;
	
}
