#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct ogrenciler{
	char ad[30];
	char soyad[30];
	int yas;
	int tel_no;
	char bolum[30];
	char sehir[30];
}ogr[5] = {"Esma Nur","G�kkaya",18,555,"Yaz�l�m M�hendisli�i","�stanbul",
			"Sude","�lhan",18,544,"Genetik M�hendisli�i","Sakarya",
			"Burcu","�zdemir",24,533,"Paramedik","Kastamonu",
			"Mehmetcan","karako�",19,556,"T�p","Ankara",
			"Ali","Y�ld�z",22,538,"Mimarl�k","Trabzon"};
			
			
int main(int argc, char *argv[]) {
	 setlocale(LC_ALL,"Turkish");
	int i;
for(i=0 ; i < 5 ; i++){
	printf("��rencinin\nAd� = %s\nSoyad� = %s\nYa�� = %d\nTelefon numaras� = %d\nB�l�m� = %s\nYa�ad��� �ehir = %s",ogr[i].ad, ogr[i].soyad, ogr[i].yas, ogr[i].tel_no, ogr[i].bolum, ogr[i].sehir);
	printf("\n**********************\n");
	}
	
	
		

	return 0;
}
