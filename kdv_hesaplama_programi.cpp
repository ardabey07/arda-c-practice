#include <stdio.h>
int main()
{
	float fiyat,oran;
	float toplam=0;
 	
    do{ 
        printf("\n\nKDV dahil hesaplama programina hos geldiniz! Cikmak icin '-1' yaziniz.\n\n Lutfen fiyat giriniz: ");
        scanf("%f",&fiyat);
        if(fiyat==-1) break;
        
        printf("\nLutfen KDV yuzdelik oranini giriniz: ");
        scanf("%f",&oran);
        if(oran<0){
		 printf("Oran 0'dan kucuk olamaz!");
		 continue;
		}	
        toplam=fiyat+fiyat*oran/100;
        printf("KDV dahil fiyat = %.2f",toplam);
        toplam=0;
    }while(fiyat!=-1);
  return 0;  
}
