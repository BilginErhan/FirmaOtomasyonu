#include <iostream> //string ifadelerin  
using namespace std;//kullanýmý için
#include <string>	//gereken ifadeler
#include "Urun.h"	//Urun Sýnýfýný cpp ye dahil etme
Urun::Urun()
{
			//yapýcý fonksiyon
}
void Urun::setUrun(char* urunAdi, char* urunModeli,char* kodu,char* aciklama,bool upromosyon,int ustok,char* u1_kategori,int u_satis,int u_fiyati)
{
	uAdi = urunAdi;		//yurutucu.cpp den alýnan deðerleri bu fonksiyonda deðer atamalarý yapýlýr
	uModeli = urunModeli;
	detaylar[0].setUrunDetay(kodu,aciklama,u_fiyati,upromosyon,ustok);	// bu kýsýmda nesne dizisine atama yapýlýr
	u_kategori[0].setKategori(u1_kategori);			// bu kýsýmda nesne dizisine atama yapýlýr
	satislar[0].setSatis(u_satis);// bu kýsýmda nesne dizisine atama yapýlýr
}
void Urun::getUrun()
{									//yurutucuden alýnan deðerleri geri donduren fonksiyonumuz
	setlocale(LC_ALL, "Turkish");
	cout << "\n\tUrun Adi :" << uAdi;
	cout << "\n\tUrun Modeli :" << uModeli;
	detaylar[0].getUrunDetay();		//bu 3 satýrda nesne dizisinin içideki sýnýflarýn
	cout<<"\n\tKategori :"<<u_kategori[0].getKategori();	//get methodlarý kullanýlmaktadýr
	cout<<"\n\tSatis Adedi :"<<satislar[0].getSatis();
}
string Urun::UrunKontrol()
{
	return uAdi; //urun adýný geri donduren fonksiyonumuz
}
int Urun::SatisKontrol()
{
	return satislar[0].getSatis();	//satiþ adetini geri donduren fonksiyonumuz
}
int Urun::stokKontrol()
{
	return detaylar[0].stokKontrol();	//stok adetini geri donduren fonksiyonumuz
}	
int Urun::fiyatKontrol()
{
	return detaylar[0].fiyatKontrol();	//fiyat deðiþkenini geri donduren fonksiyonumuz
}
string Urun::KategoriKontrol()
{
	return u_kategori[0].getKategori();	//kategori deðiþkenini geri donduren fonksiyonumuz
}
void Urun::urDetay(UrunDetay a)
{
	detaylar[0] = a;		//detaylar nesne dizisine urundetay sýnýfý atýlýr
}
void Urun::urKategori(Kategori b)
{
	u_kategori[0] = b;		//u_kategori nesne dizisine kategori sýnýfý atýlýr
}
void Urun::urSatis(Satis c)
{
	satislar[0] = c;		//satislar nesne dizisine satis sýnýfý atýlýr
}	
bool Urun::promosyonKontrol()
{
	return detaylar[0].promosyonKontrol();	//promosyon deðiþkenini geri donduren fonksiyon
}
string Urun::get_Urunkodu()
{
	return detaylar[0].getUrunKodu();
}