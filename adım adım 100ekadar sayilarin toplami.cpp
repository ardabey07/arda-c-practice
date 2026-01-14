#include <stdio.h>
int main()
{
    int sayac;
    int toplam=0;
    for(sayac=0; sayac<=100; sayac++){
    	toplam+=sayac;
    	printf("\n%d ==> %d.adim",toplam,sayac);
	}
    printf("     0'dan 100'e kadar olan sayilarin toplami %d",toplam);
}

