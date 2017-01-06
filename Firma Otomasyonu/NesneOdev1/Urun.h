#ifndef URUN_H
#define URUN_H
#include <iostream> //string ifadelerin kullan�m�
using namespace std;//i�in gerek eklemeler
#include "UrunDetay.h"	//kompozisyon
#include "Kategori.h"	//kompozisyon
#include "Satis.h"		//kompozisyon
class Urun		//urun s�n�f�n� olu�turduk
{
public:
	Urun();	//yap�c� fonksiyon
	void setUrun(char*, char*,char*,char*,bool,int,char*,int,int);	//de�erleri alan fonksiyon
	void getUrun();	//ald���m�z de�erleri geri donduren fonksiyon
	string UrunKontrol();	//urunadin� geri donduren fonksiyon
	int SatisKontrol();		//Satisadet de�i�kenini donduren fonksiyon
	int stokKontrol();		//stok adet de�i�kenini donduren fonksiyon
	int fiyatKontrol();		//fiyat de�i�kenini geri donduren fonksiyon
	string KategoriKontrol();	//kagetori de�i�kenini geri donduren fonksiyon
	bool promosyonKontrol();	//promosyon de�i�kenini geri donduren fonksiyon
	void urDetay(UrunDetay);	//detaylar nesne dizisine urundetay s�n�f� atan fonksiyon
	void urKategori(Kategori);//u_kategori nesne dizisine kategori s�n�f�n� atan fonksiyon
	void urSatis(Satis);	//satilar nesne dizisine satis s�n�f�n� atan fonksiyon
	string get_Urunkodu();
private:
	string uAdi, uModeli;	//urun adi ve modeli de�i�leni
	UrunDetay detaylar[1];	//nesne dizisi
	Kategori u_kategori[1];	//nesne dizisi
	Satis satislar[1];		//nesne dizisi
};
#endif