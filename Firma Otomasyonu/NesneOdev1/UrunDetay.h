#ifndef URUNDETAY_H
#define URUNDETAY_H
#include <iostream> //string ifadelerin kullanýmý 
using namespace std;//içi gereken eklemeler
#include "Stok.h"	//stok kütüphanesini kompozisyon etme
class UrunDetay		//sýnýfýmýzý oluþturduk
{
public:
	UrunDetay();	//yapýcý fonksiyon
	void setUrunDetay(char*, char*, int, bool,int);	//deðer alma fonksiyonu
	void getUrunDetay();	//deðer dondurme fonksiyonu
	int stokKontrol();		//stok sýnýfýndaki deðiskeni donduren fonsksiyon
	int fiyatKontrol();		//fiyat deðiþkenini döndüren fonksiyon
	void stokAdet(Stok);	//nesne fonksiyonu
	bool promosyonKontrol(); //promosyon deðeri donduren fonksiyon
	string getUrunKodu();	//Urun Kodunu geri donduren fonksiyon
private:
	string urunKodu, aciklama;
	int fiyat;
	bool promosyon;		//deðiþkenlerimiz
	Stok stoklar[1];	//nesne dizimiz
};
#endif