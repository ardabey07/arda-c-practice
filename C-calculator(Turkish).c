#include <stdio.h>
int main()
{
	int x,y;
	char z;
	printf("Hesap makinemize hos geldiniz! Baslamak icin birinci sayiyi giriniz: ");
	scanf("%d",&x);
	printf("\n2.sayiyi giriniz: ");
	scanf("%d",&y);
	printf("\nYapmak istediginiz islemin sembolunu giriniz( + - * / ): ");
	scanf(" %c",&z); 
	if (z=='+') {
		printf("\n%d",x+y);
	}
	else if (z=='-') {
		printf("\n%d",x-y);
	}
	else if (z=='*'){
		printf("\n%d",x*y);
	}
	else if (z=='/'){
		printf("\n%d",x/y);
	}
}
