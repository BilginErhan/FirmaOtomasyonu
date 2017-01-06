#ifndef KAMPANYA_H
#define KAMPANYA_H
#include <iostream>//string ifadelerin kullan�m� i�in gereken fonksiyonlar
using namespace std;
class Kampanya	//class�m�z� olu�turduk
{
public:
	Kampanya();//yap�c� fonksiyonumuz
	void setKampanya(char*, char*, char*, char*);//kampanya bilgilerini alan fonkssiyon
	void getKampanya();			//kampanya bilgilerini geri d�nd�ren fonksiyon
	string getBitisTarihi();	//bitisTarihini geri donduren fonksiyon
	string getUrunler();			//kampay�l �r�nlerini geri donduren fonksiyon
private:
	string kmpAdi, urunler, baslangicTarihi, bitisTarihi;//de�i�kenlerimiz
};
#endif