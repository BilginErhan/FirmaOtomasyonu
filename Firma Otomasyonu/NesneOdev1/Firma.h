#ifndef FIRMA_H
#define FIRMA_H
#include <iostream>
using namespace std;
#include "Urun.h"
#include "SahisSirketi.h"
#include "SermayeSirketi.h"
#include "Kampanya.h"
class  Firma:public SahisSirketi,public SermayeSirketi //Firma sýnýfý sahis ve sermaye sirketleri
{													   //için base classtýr
private:
	int sermayesayac,sahissayac,urunsayac;	//diziler için gereken sayac deðiþkenleri
	int firmasayaci;						//veya gereken diziler
	int usayac0, usayac1, usayac2, usayac3, usayac4, usayac5;
	int usayac6, usayac7, usayac8, usayac9;
	int ucuzUrun[10],ucuz,enucuz;
	int firmaSayaci[10];
	string GuncelTarih;
	int sayac1 = 0, sayac2 = 0, sayac3 = 0;
	int bitisYýl, bitisAy, bitisGun;
	int guncelYýl, guncelAy, guncelGun;
	int kategoriSayac;
	int kampanyaSayac = 0, kampanyaSayac1 = 0,Urun_kampanya=0;
	string geciciUrun,geciciUrunKodu,karakter="#";
	string fAdi[10], fAdresiletisim[10];	//firma adý ve adres dizileri
	Kampanya kampanyalar[10];			//kampanya nesne dizisi
	SahisSirketi sirketler[5];			//sahisSirketi nesne dizisi
	SermayeSirketi sirketler1[5];		//SermayeSirketi nesne dizisi
	Urun urunler[10][100];				//Urun nesne dizisi
public:
	Firma();	//yapýcý fonksiyon
	void setFirma(char*,char*,int);	//firma adi ve adres bilgileri alýnýr
	void getFirma(int);				//firma adi ve adres bilgileri dondurulur
	void SahisSirketim(SahisSirketi,char*,char*);	//SahisSirketi sirketler nesne dizisine ekleme fonk.
	void SermayeSirketim(SermayeSirketi,char*,char*);//SermayeSirketi sirketler1 nesne dizisine ekleme fonk.
	void UrunEkle(Urun,char*);		//urun sýnýfý urunler nesne dizisine ekleme fonk.
	void FirmaismiGuncelle(char*,char*);	//alýnan firma adýna göre firma ismi guncelleme fonksiyonu
	void Kampanyaekle(Kampanya, char*);		//alýnan firma adýna göre firmaya kampanya ekleme fonksiyonu
	void UrunleriListele(char*);			//alýnan firma adýna göre urunleri listeleme
	void UrunSatisiYapanFirmalar(char*);	//alýnan urun adýna göre firmalarý listeleme
	void EnucuzHangiFirmada(char*);			//alýnan urun adýna göre en ucuz hangi firmada satýldýðýný bulan fonksiyon
	void KategoriFirma(char*);				//alýnan kategori adýna göre urunleri ve firma bilgilerini geri donduren fonk.
	void PromosyonluUrunleriListele();	//promosyonlu olan urunleri listeleyen fonskiyon
	void KampanyaSuresiBitenUrunler(char*,char*);	//kampanya suresi biten urunleri listeleyen fonksiyon
	void getKampanyaliUrunler(char*,char*);		//Kampanyalý urunleri donduren fonksiyon
	int FirmaAdiKontrol(char*);					//Firma Adýný kontrol eden fonksiyon
};
#endif