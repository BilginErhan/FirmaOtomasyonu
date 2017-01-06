#include <iostream>//string ifadelerin
#include <string>	//kullan�m� i�in
using namespace std;//gereken eklemeler
#include "UrunDetay.h"//urundetay header�m�z cpp ye ekleme
UrunDetay::UrunDetay()
{
	promosyon = 0;		//yap�c� fonksiyon
}
void UrunDetay::setUrunDetay(char* Ukodu, char* Uaciklama, int ucret, bool Upromosyon,int u_stok)
{									//D��ar�dan al�nan de�erleri de�i�kenlere atama fonksiyonu
	urunKodu = Ukodu;
	aciklama = Uaciklama;
	fiyat = ucret;
	promosyon = Upromosyon;
	stoklar[0].setStok(u_stok);	//olu�turdu�umuz nesne dizisi yard�m�yla
}								//stok s��n�f�na atanan de�i�keni stoklar nesne dizisine atam�� olduk
void UrunDetay::getUrunDetay()	//Urun detay header� i�inde tan�mlad���m�z 
{								//de�i�kenleri donduren fonksiyonumuz
	setlocale(LC_ALL, "Turkish");
	cout <<"\n\tUrunKodu :"<< urunKodu;
	cout <<"\n\tUrun Aciklama :"<<aciklama;
	cout <<"\n\tUrun Fiyat :"<< fiyat;
	cout<<"\n\tPromosyon :"<<promosyon;
	cout << "\n\tStok Adedi: " << stoklar[0].getStok();
}
int UrunDetay::fiyatKontrol()//sadece fiyat de�i�kenini d�nd�ren fonksiyon
{
	return fiyat;
}
void UrunDetay::stokAdet(Stok a)
{
	stoklar[0] = a;//stoklar dizisine stok nesnesini at�yoruz
}
int UrunDetay::stokKontrol()
{
	return stoklar[0].getStok();//stoklar dizisi i�indeki stok nesnesinin
}								//getstok fonksiyonu �a�r�l�yor
bool UrunDetay::promosyonKontrol()
{							//Urun detay de�i�keni olan 
	return promosyon;		//promosyon de�i�kenini d�nd�r�r
}
string UrunDetay::getUrunKodu()
{
	return urunKodu;
}