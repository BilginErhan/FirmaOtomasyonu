#include <iostream>	//Stirng ve cout ifadeleri 
using namespace std;//kullanýmý için
#include <string>	//gereken eklemeler
#include "Kampanya.h"	//headerýmýzý cppye ekliyoruz
Kampanya::Kampanya()
{
	//yapýcý Fonksiyon
}
void Kampanya::setKampanya(char* k_Adi, char* k_urun, char* k_baslangic, char* k_bitis)
{
	kmpAdi = k_Adi;
	urunler = k_urun;			//deðerleri deðiþkenlere eþitleyen
	baslangicTarihi = k_baslangic;	//set fonksiyonu
	bitisTarihi = k_bitis;
}
void Kampanya::getKampanya()
{
	setlocale(LC_ALL, "Turkish");
	cout << "Kampanya Adi :" << kmpAdi;
	cout << "Urunler :" << urunler;	//Deðiþkenleri Geri Donduren Fonskyionumuz
	cout << "Baslangic Tarihi :" << baslangicTarihi;
	cout << "Bitis Tarihi :" << bitisTarihi;
}
string Kampanya::getBitisTarihi()
{
	return bitisTarihi;	//bitiþ tarihini string formatýnda geri donduren fonksiyonumuz
}
string Kampanya::getUrunler()
{
	return urunler;	//urunler string deðiþkenini ekrana yazdýran fonksiyon
}