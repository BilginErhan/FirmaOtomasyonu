#ifndef URUN_H
#define URUN_H
#include <iostream> //string ifadelerin kullanýmý
using namespace std;//için gerek eklemeler
#include "UrunDetay.h"	//kompozisyon
#include "Kategori.h"	//kompozisyon
#include "Satis.h"		//kompozisyon
class Urun		//urun sýnýfýný oluþturduk
{
public:
	Urun();	//yapýcý fonksiyon
	void setUrun(char*, char*,char*,char*,bool,int,char*,int,int);	//deðerleri alan fonksiyon
	void getUrun();	//aldýðýmýz deðerleri geri donduren fonksiyon
	string UrunKontrol();	//urunadiný geri donduren fonksiyon
	int SatisKontrol();		//Satisadet deðiþkenini donduren fonksiyon
	int stokKontrol();		//stok adet deðiþkenini donduren fonksiyon
	int fiyatKontrol();		//fiyat deðiþkenini geri donduren fonksiyon
	string KategoriKontrol();	//kagetori deðiþkenini geri donduren fonksiyon
	bool promosyonKontrol();	//promosyon deðiþkenini geri donduren fonksiyon
	void urDetay(UrunDetay);	//detaylar nesne dizisine urundetay sýnýfý atan fonksiyon
	void urKategori(Kategori);//u_kategori nesne dizisine kategori sýnýfýný atan fonksiyon
	void urSatis(Satis);	//satilar nesne dizisine satis sýnýfýný atan fonksiyon
	string get_Urunkodu();
private:
	string uAdi, uModeli;	//urun adi ve modeli deðiþleni
	UrunDetay detaylar[1];	//nesne dizisi
	Kategori u_kategori[1];	//nesne dizisi
	Satis satislar[1];		//nesne dizisi
};
#endif