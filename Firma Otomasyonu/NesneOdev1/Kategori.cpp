#include <iostream> //string ifadeleri 
using namespace std;//kullan�m i�i gerek 
#include <string>	//eklemeler
#include "Kategori.h" //header� cpp ye dahil ediyoruz
Kategori::Kategori()	//yap�c� fonksiyon
{

}
void Kategori::setKategori(char* kategori)	//d��ar�dan
{								//al�nan de�eri de�i�kene
	kAdi = kategori;			//atama
}
string Kategori::getKategori()	//al�nan de�eri 
{								//donduren fonksiyon
	return kAdi;
}