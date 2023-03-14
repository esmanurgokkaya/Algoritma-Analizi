#include <stdio.h>
#include <stdlib.h>

// en k���k eleman� bulacak olan fonksiyonu tan�ml�yoruz ve T(n) hesaplamas� yap�yoruz 
int kucuk_eleman(int sayilar[], int sayi){
	int i=0;					// 1 kez ger�ekle�tirilir
	int en_kucuk = sayilar[0];		// 1 kez ger�ekle�tirilir
	while(i<sayi){				//	n+1 kez kontrol edilir	
		if (en_kucuk > sayilar[i]){			// n kez kontrol edilir
			en_kucuk = sayilar[i];			// n kez ger�ekle�tirilir
		}
		i++;					//n kez ger�ekle�tirilir
	}
	return en_kucuk;			// 1 kez ger�ekle�tirilir
}

/* yapt���m�z T(n) hesaplamas�ndan d�ng� i�inde bulunmayan sat�rlardan 3 de�eri gelir
d�ng� i�inde bulunanlardan  4n+1 de�eri gelir
b�ylece y�r�tme zaman� hesab�n� T(n)=4n+4 �eklinde yapm�� oluruz  */

int main(int argc, char *argv[]) {
	
	int sayilar[] = {15,1,10,2,6,8,5,0,-2,16,-9};		// dizinin elemanlar� tan�mland�	
	int sayi = sizeof(sayilar)/sizeof(int);				//	dizinin boyutunu fonksiyona g�nderebilmek i�in hesaplama yap�ld�
	int sonuc = kucuk_eleman(sayilar,sayi);				//  dizinin ad� ve boyutu fonksiyona g�nderilerek fonksiyondan ��kan sonu� de�i�kene aktar�ld�
	printf("%d elemanli dizinin en kucuk elemani\n>>> %d",sayi,sonuc);			// sonuc ekrana yazd�r�ld�
	return 0;
}


