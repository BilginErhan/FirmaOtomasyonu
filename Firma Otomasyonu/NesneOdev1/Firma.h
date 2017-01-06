#ifndef FIRMA_H
#define FIRMA_H
#include <iostream>
using namespace std;
#include "Urun.h"
#include "SahisSirketi.h"
#include "SermayeSirketi.h"
#include "Kampanya.h"
class  Firma:public SahisSirketi,public SermayeSirketi //Firma s�n�f� sahis ve sermaye sirketleri
{													   //i�in base classt�r
private:
	int sermayesayac,sahissayac,urunsayac;	//diziler i�in gereken sayac de�i�kenleri
	int firmasayaci;						//veya gereken diziler
	int usayac0, usayac1, usayac2, usayac3, usayac4, usayac5;
	int usayac6, usayac7, usayac8, usayac9;
	int ucuzUrun[10],ucuz,enucuz;
	int firmaSayaci[10];
	string GuncelTarih;
	int sayac1 = 0, sayac2 = 0, sayac3 = 0;
	int bitisY�l, bitisAy, bitisGun;
	int guncelY�l, guncelAy, guncelGun;
	int kategoriSayac;
	int kampanyaSayac = 0, kampanyaSayac1 = 0,Urun_kampanya=0;
	string geciciUrun,geciciUrunKodu,karakter="#";
	string fAdi[10], fAdresiletisim[10];	//firma ad� ve adres dizileri
	Kampanya kampanyalar[10];			//kampanya nesne dizisi
	SahisSirketi sirketler[5];			//sahisSirketi nesne dizisi
	SermayeSirketi sirketler1[5];		//SermayeSirketi nesne dizisi
	Urun urunler[10][100];				//Urun nesne dizisi
public:
	Firma();	//yap�c� fonksiyon
	void setFirma(char*,char*,int);	//firma adi ve adres bilgileri al�n�r
	void getFirma(int);				//firma adi ve adres bilgileri dondurulur
	void SahisSirketim(SahisSirketi,char*,char*);	//SahisSirketi sirketler nesne dizisine ekleme fonk.
	void SermayeSirketim(SermayeSirketi,char*,char*);//SermayeSirketi sirketler1 nesne dizisine ekleme fonk.
	void UrunEkle(Urun,char*);		//urun s�n�f� urunler nesne dizisine ekleme fonk.
	void FirmaismiGuncelle(char*,char*);	//al�nan firma ad�na g�re firma ismi guncelleme fonksiyonu
	void Kampanyaekle(Kampanya, char*);		//al�nan firma ad�na g�re firmaya kampanya ekleme fonksiyonu
	void UrunleriListele(char*);			//al�nan firma ad�na g�re urunleri listeleme
	void UrunSatisiYapanFirmalar(char*);	//al�nan urun ad�na g�re firmalar� listeleme
	void EnucuzHangiFirmada(char*);			//al�nan urun ad�na g�re en ucuz hangi firmada sat�ld���n� bulan fonksiyon
	void KategoriFirma(char*);				//al�nan kategori ad�na g�re urunleri ve firma bilgilerini geri donduren fonk.
	void PromosyonluUrunleriListele();	//promosyonlu olan urunleri listeleyen fonskiyon
	void KampanyaSuresiBitenUrunler(char*,char*);	//kampanya suresi biten urunleri listeleyen fonksiyon
	void getKampanyaliUrunler(char*,char*);		//Kampanyal� urunleri donduren fonksiyon
	int FirmaAdiKontrol(char*);					//Firma Ad�n� kontrol eden fonksiyon
};
#endif