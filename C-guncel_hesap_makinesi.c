#include <stdio.h>
int main()
{
	float a,b,islem=0;
	int x;
	do{
		printf("\nHesap makinesine hos geldiniz! Lutfen 1. ve 2. sayilari sirasiyla giriniz: ");
		scanf("%f %f",&a,&b);
		printf("\nYapmak istediginiz islemi seciniz\n Toplama icin 1,\n Cikarma icin 2,\n Carpma icin 3,\n Bolme icin 4,\n cikmak icin 5 yaziniz: ");
		scanf("%d",&x);
			if(x==4 && b==0){
				printf("\nGecersiz islem!");
				continue;
			}
		switch(x){
			case 1:
				islem=a+b;
				break;
			case 2:
				islem=a-b;
				break;
			case 3:
				islem=a*b;
				break;
			case 4:
				islem=a/b;
				break;
			case 5:
				break;
			default:
				printf("\nGecersiz secim yaptiniz!");
				continue;
		}
		if(x==5)
			break;
		printf("Islemin sonucu = %f",islem);
		islem=0;
	}while(x!=5);
	
	
}
