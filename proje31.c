#include <stdio.h>
#include <stdlib.h>

int main() {
	
	int sayi1,sayi2,sonuc;
	char islem;
	
	printf("Birinci Sayiyi Giriniz: ");
	scanf("%s",&sayi1);
	
	printf("Ikinci Sayiyi Girin: ");
	scanf("%s",&sayi2);
	
	printf("Islemi Girin: ");
	scanf("%s",&islem);
	
	switch(islem)
	{
	  case '+': 
		sonuc=sayi1+sayi2;
		printf("Sonuc: %d",sonuc);
		break;
	  case	'-':
		sonuc=sayi1-sayi2;
		printf("Sonuc: %d",sonuc);
		break;
	  case	'*':
	  	sonuc=sayi1*sayi2;
	  	printf("Sonuc: %d",sonuc);
	  	break;
	  case '/':	 
	  	sonuc=sayi1/sayi2;
	  	printf("Sonuc: %d",sonuc);
        break;	  	
	  default: printf("Hatali Islem Sembolu");
	  break;		
	}
	
	return 0;
}
