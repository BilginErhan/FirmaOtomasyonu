#ifndef KAMPANYA_H
#define KAMPANYA_H
#include <iostream>//string ifadelerin kullanýmý için gereken fonksiyonlar
using namespace std;
class Kampanya	//classýmýzý oluþturduk
{
public:
	Kampanya();//yapýcý fonksiyonumuz
	void setKampanya(char*, char*, char*, char*);//kampanya bilgilerini alan fonkssiyon
	void getKampanya();			//kampanya bilgilerini geri döndüren fonksiyon
	string getBitisTarihi();	//bitisTarihini geri donduren fonksiyon
	string getUrunler();			//kampayýl ürünlerini geri donduren fonksiyon
private:
	string kmpAdi, urunler, baslangicTarihi, bitisTarihi;//deðiþkenlerimiz
};
#endif