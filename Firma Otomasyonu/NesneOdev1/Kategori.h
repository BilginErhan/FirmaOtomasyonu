#ifndef KATEGORI_H
#define KATEGORI_H
#include <iostream>	//string ifadeleri tan�mlamadak i�in
using namespace std; // gerek eklemeler
class Kategori	//s�n�f olu�turma
{
public:
	Kategori(); //yap�c� fonksiyon
	void setKategori(char*); //de�er alma fonksiyonu
	string getKategori(); //de�er d�nd�ren fonksiyon
private:
	string kAdi; //de�i�ken
};
#endif