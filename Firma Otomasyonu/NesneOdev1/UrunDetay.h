#ifndef URUNDETAY_H
#define URUNDETAY_H
#include <iostream> //string ifadelerin kullan�m� 
using namespace std;//i�i gereken eklemeler
#include "Stok.h"	//stok k�t�phanesini kompozisyon etme
class UrunDetay		//s�n�f�m�z� olu�turduk
{
public:
	UrunDetay();	//yap�c� fonksiyon
	void setUrunDetay(char*, char*, int, bool,int);	//de�er alma fonksiyonu
	void getUrunDetay();	//de�er dondurme fonksiyonu
	int stokKontrol();		//stok s�n�f�ndaki de�iskeni donduren fonsksiyon
	int fiyatKontrol();		//fiyat de�i�kenini d�nd�ren fonksiyon
	void stokAdet(Stok);	//nesne fonksiyonu
	bool promosyonKontrol(); //promosyon de�eri donduren fonksiyon
	string getUrunKodu();	//Urun Kodunu geri donduren fonksiyon
private:
	string urunKodu, aciklama;
	int fiyat;
	bool promosyon;		//de�i�kenlerimiz
	Stok stoklar[1];	//nesne dizimiz
};
#endif