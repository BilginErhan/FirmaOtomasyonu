#include <iostream>	//Stirng ve cout ifadeleri 
using namespace std;//kullan�m� i�in
#include <string>	//gereken eklemeler
#include "Kampanya.h"	//header�m�z� cppye ekliyoruz
Kampanya::Kampanya()
{
	//yap�c� Fonksiyon
}
void Kampanya::setKampanya(char* k_Adi, char* k_urun, char* k_baslangic, char* k_bitis)
{
	kmpAdi = k_Adi;
	urunler = k_urun;			//de�erleri de�i�kenlere e�itleyen
	baslangicTarihi = k_baslangic;	//set fonksiyonu
	bitisTarihi = k_bitis;
}
void Kampanya::getKampanya()
{
	setlocale(LC_ALL, "Turkish");
	cout << "Kampanya Adi :" << kmpAdi;
	cout << "Urunler :" << urunler;	//De�i�kenleri Geri Donduren Fonskyionumuz
	cout << "Baslangic Tarihi :" << baslangicTarihi;
	cout << "Bitis Tarihi :" << bitisTarihi;
}
string Kampanya::getBitisTarihi()
{
	return bitisTarihi;	//biti� tarihini string format�nda geri donduren fonksiyonumuz
}
string Kampanya::getUrunler()
{
	return urunler;	//urunler string de�i�kenini ekrana yazd�ran fonksiyon
}