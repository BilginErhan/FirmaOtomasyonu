#include <iostream> //string ifadelerin  
using namespace std;//kullan�m� i�in
#include <string>	//gereken ifadeler
#include "Urun.h"	//Urun S�n�f�n� cpp ye dahil etme
Urun::Urun()
{
			//yap�c� fonksiyon
}
void Urun::setUrun(char* urunAdi, char* urunModeli,char* kodu,char* aciklama,bool upromosyon,int ustok,char* u1_kategori,int u_satis,int u_fiyati)
{
	uAdi = urunAdi;		//yurutucu.cpp den al�nan de�erleri bu fonksiyonda de�er atamalar� yap�l�r
	uModeli = urunModeli;
	detaylar[0].setUrunDetay(kodu,aciklama,u_fiyati,upromosyon,ustok);	// bu k�s�mda nesne dizisine atama yap�l�r
	u_kategori[0].setKategori(u1_kategori);			// bu k�s�mda nesne dizisine atama yap�l�r
	satislar[0].setSatis(u_satis);// bu k�s�mda nesne dizisine atama yap�l�r
}
void Urun::getUrun()
{									//yurutucuden al�nan de�erleri geri donduren fonksiyonumuz
	setlocale(LC_ALL, "Turkish");
	cout << "\n\tUrun Adi :" << uAdi;
	cout << "\n\tUrun Modeli :" << uModeli;
	detaylar[0].getUrunDetay();		//bu 3 sat�rda nesne dizisinin i�ideki s�n�flar�n
	cout<<"\n\tKategori :"<<u_kategori[0].getKategori();	//get methodlar� kullan�lmaktad�r
	cout<<"\n\tSatis Adedi :"<<satislar[0].getSatis();
}
string Urun::UrunKontrol()
{
	return uAdi; //urun ad�n� geri donduren fonksiyonumuz
}
int Urun::SatisKontrol()
{
	return satislar[0].getSatis();	//sati� adetini geri donduren fonksiyonumuz
}
int Urun::stokKontrol()
{
	return detaylar[0].stokKontrol();	//stok adetini geri donduren fonksiyonumuz
}	
int Urun::fiyatKontrol()
{
	return detaylar[0].fiyatKontrol();	//fiyat de�i�kenini geri donduren fonksiyonumuz
}
string Urun::KategoriKontrol()
{
	return u_kategori[0].getKategori();	//kategori de�i�kenini geri donduren fonksiyonumuz
}
void Urun::urDetay(UrunDetay a)
{
	detaylar[0] = a;		//detaylar nesne dizisine urundetay s�n�f� at�l�r
}
void Urun::urKategori(Kategori b)
{
	u_kategori[0] = b;		//u_kategori nesne dizisine kategori s�n�f� at�l�r
}
void Urun::urSatis(Satis c)
{
	satislar[0] = c;		//satislar nesne dizisine satis s�n�f� at�l�r
}	
bool Urun::promosyonKontrol()
{
	return detaylar[0].promosyonKontrol();	//promosyon de�i�kenini geri donduren fonksiyon
}
string Urun::get_Urunkodu()
{
	return detaylar[0].getUrunKodu();
}