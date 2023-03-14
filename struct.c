#include <stdio.h>
#include <stdlib.h>
#include <locale.h>       // setlocale fonksiyonunu kullanabilmek için gerekli kütüphaneyi tanımladık
struct ogrenciler{
	char ad[30];
	char soyad[30];
	int yas;
	int tel_no;
	char bolum[30];
	char sehir[30];			// struct içinde istediğimiz değişkenlerim tanımlamasını yaptık 
}ogr[5] = {"Esma Nur","Gökkaya",18,555,"Yazılım Mühendisliği","İstanbul",
	   "Sude","İlhan",18,544,"Genetik Mühendisliği","Sakarya",
	   "Burcu","Özdemir",24,533,"Paramedik","Kastamonu",
	   "Mehmetcan","karakoç",19,556,"Tıp","Ankara",
	   "Ali","Yıldız",22,538,"Mimarlık","Trabzon"};			/* bu kısımda struct içinde tanımlanan değişkenleri sırası ile değerlerini
											yazarak her bir satır bir dizinin elemanı olacak şekilde tanımladık*/
			
			
int main(int argc, char *argv[]) {
	 setlocale(LC_ALL,"Turkish");		// yazılarda türkçe karakter elde etmek için foksiyon
	int i;
for(i=0 ; i < 5 ; i++){		// stuctta kullandığımız elemanları ekrana yazdırabilmek için for kullandık
	// ogr olarak tanımlanan dizinin sırası ile her bir elemanının(eleman burda ilgili satır olarak geçer) struct içindeki ifadeleri yazdırılır 
	printf("Öðrencinin\nAdı = %s\nSoyadı = %s\nYaşı = %d\nTelefon numarası = %d\nBölümü = %s\nYaşadığı şehir = %s",ogr[i].ad, ogr[i].soyad, ogr[i].yas, ogr[i].tel_no, ogr[i].bolum, ogr[i].sehir);
	printf("\n**********************\n");
	}
	
	
		

	return 0;
}
