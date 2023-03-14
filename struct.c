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
}ogr[5] = {"Esma Nur","Gökkaya",18,555,"Yazýlým Mühendisliði","Ýstanbul",
			"Sude","Ýlhan",18,544,"Genetik Mühendisliði","Sakarya",
			"Burcu","Özdemir",24,533,"Paramedik","Kastamonu",
			"Mehmetcan","karakoç",19,556,"Týp","Ankara",
			"Ali","Yýldýz",22,538,"Mimarlýk","Trabzon"};
			
			
int main(int argc, char *argv[]) {
	 setlocale(LC_ALL,"Turkish");
	int i;
for(i=0 ; i < 5 ; i++){
	printf("Öðrencinin\nAdý = %s\nSoyadý = %s\nYaþý = %d\nTelefon numarasý = %d\nBölümü = %s\nYaþadýðý þehir = %s",ogr[i].ad, ogr[i].soyad, ogr[i].yas, ogr[i].tel_no, ogr[i].bolum, ogr[i].sehir);
	printf("\n**********************\n");
	}
	
	
		

	return 0;
}
