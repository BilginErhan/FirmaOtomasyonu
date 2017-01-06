#include <iostream>//string ifadelerin
#include <string>	//kullanýmý için
using namespace std;//gereken eklemeler
#include "UrunDetay.h"//urundetay headerýmýz cpp ye ekleme
UrunDetay::UrunDetay()
{
	promosyon = 0;		//yapýcý fonksiyon
}
void UrunDetay::setUrunDetay(char* Ukodu, char* Uaciklama, int ucret, bool Upromosyon,int u_stok)
{									//Dýþarýdan alýnan deðerleri deðiþkenlere atama fonksiyonu
	urunKodu = Ukodu;
	aciklama = Uaciklama;
	fiyat = ucret;
	promosyon = Upromosyon;
	stoklar[0].setStok(u_stok);	//oluþturduðumuz nesne dizisi yardýmýyla
}								//stok sýýnýfýna atanan deðiþkeni stoklar nesne dizisine atamýþ olduk
void UrunDetay::getUrunDetay()	//Urun detay headerý içinde tanýmladýðýmýz 
{								//deðiþkenleri donduren fonksiyonumuz
	setlocale(LC_ALL, "Turkish");
	cout <<"\n\tUrunKodu :"<< urunKodu;
	cout <<"\n\tUrun Aciklama :"<<aciklama;
	cout <<"\n\tUrun Fiyat :"<< fiyat;
	cout<<"\n\tPromosyon :"<<promosyon;
	cout << "\n\tStok Adedi: " << stoklar[0].getStok();
}
int UrunDetay::fiyatKontrol()//sadece fiyat deðiþkenini döndüren fonksiyon
{
	return fiyat;
}
void UrunDetay::stokAdet(Stok a)
{
	stoklar[0] = a;//stoklar dizisine stok nesnesini atýyoruz
}
int UrunDetay::stokKontrol()
{
	return stoklar[0].getStok();//stoklar dizisi içindeki stok nesnesinin
}								//getstok fonksiyonu çaðrýlýyor
bool UrunDetay::promosyonKontrol()
{							//Urun detay deðiþkeni olan 
	return promosyon;		//promosyon deðiþkenini döndürür
}
string UrunDetay::getUrunKodu()
{
	return urunKodu;
}