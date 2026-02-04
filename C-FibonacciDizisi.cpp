#include <stdio.h>
#include <conio.h>
int main()
{
	int sayi,sayac,t1=0,t2=1,sonrakit=0;
	printf("Fibonacci dizisinin sectiginiz son terimini (terim numarasinin 1 fazlasini) giriniz: ");
	scanf("%ld",&sayi);
	for(sayac=0;sayac<sayi;sayac++){
		printf("\n%ld",t1);
		sonrakit=t1+t2;
		t1=t2;
		t2=sonrakit;
	
	}
	getch();
	return 0;
}
