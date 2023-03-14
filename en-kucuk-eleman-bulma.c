#include <stdio.h>
#include <stdlib.h>

// en küçük elemaný bulacak olan fonksiyonu tanýmlýyoruz ve T(n) hesaplamasý yapýyoruz 
int kucuk_eleman(int sayilar[], int sayi){
	int i=0;					// 1 kez gerçekleþtirilir
	int en_kucuk = sayilar[0];		// 1 kez gerçekleþtirilir
	while(i<sayi){				//	n+1 kez kontrol edilir	
		if (en_kucuk > sayilar[i]){			// n kez kontrol edilir
			en_kucuk = sayilar[i];			// n kez gerçekleþtirilir
		}
		i++;					//n kez gerçekleþtirilir
	}
	return en_kucuk;			// 1 kez gerçekleþtirilir
}

/* yaptýðýmýz T(n) hesaplamasýndan döngü içinde bulunmayan satýrlardan 3 deðeri gelir
döngü içinde bulunanlardan  4n+1 deðeri gelir
böylece yürütme zamaný hesabýný T(n)=4n+4 þeklinde yapmýþ oluruz  */

int main(int argc, char *argv[]) {
	
	int sayilar[] = {15,1,10,2,6,8,5,0,-2,16,-9};		// dizinin elemanlarý tanýmlandý	
	int sayi = sizeof(sayilar)/sizeof(int);				//	dizinin boyutunu fonksiyona gönderebilmek için hesaplama yapýldý
	int sonuc = kucuk_eleman(sayilar,sayi);				//  dizinin adý ve boyutu fonksiyona gönderilerek fonksiyondan çýkan sonuç deðiþkene aktarýldý
	printf("%d elemanli dizinin en kucuk elemani\n>>> %d",sayi,sonuc);			// sonuc ekrana yazdýrýldý
	return 0;
}


