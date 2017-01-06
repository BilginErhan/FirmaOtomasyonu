#ifndef KATEGORI_H
#define KATEGORI_H
#include <iostream>	//string ifadeleri tanýmlamadak için
using namespace std; // gerek eklemeler
class Kategori	//sýnýf oluþturma
{
public:
	Kategori(); //yapýcý fonksiyon
	void setKategori(char*); //deðer alma fonksiyonu
	string getKategori(); //deðer döndüren fonksiyon
private:
	string kAdi; //deðiþken
};
#endif