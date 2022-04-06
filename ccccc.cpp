#include<stdio.h>
main()
{
	char islem;
	float sayi1, sayi2, sonuc;
	printf("\n***operator***\n");
	printf("\ntoplama icin'+'");
	printf("\ncikarma icin'-'");
	printf("\ncarpma icin'*'");
	printf("\nbolme icin'/'");
	printf("\noperator giriniz:");
	scanf("%c", &islem);
	switch(islem){
		case'+':
			printf("\niki sayi giriniz:");
			scanf("%f%f" ,&sayi1, &sayi2);
			sonuc=sayi1+sayi2;
			printf("girilen iki sayi degerinin toplama sonucu %f",sonuc);
			break;
		case'-':
		    printf("\niki sayi giriniz:");
			scanf("%f%f" ,&sayi1, &sayi2);
			sonuc=sayi1-sayi2;
			printf("girilen iki sayi degerinin cikarma sonucu %f",sonuc);
			break;
		case'*':
		    printf("\niki sayi giriniz:");
			scanf("%f %f", &sayi1, &sayi2);
			sonuc=sayi1*sayi2;	
			printf("girilen iki sayi degerinin carpma sonucu %f", sonuc);
			break;
		case'/':
		    printf("\niki sayi giriniz:");
			scanf("%f%f", &sayi1, &sayi2);
			sonuc=sayi1/sayi2;
			printf("girilen iki sayi degerinin bolum sonucu %f", sonuc);
			break;	
	}
	
}
