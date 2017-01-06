#include <iostream> //string ifadeleri 
using namespace std;//kullaným içi gerek 
#include <string>	//eklemeler
#include "Kategori.h" //headerý cpp ye dahil ediyoruz
Kategori::Kategori()	//yapýcý fonksiyon
{

}
void Kategori::setKategori(char* kategori)	//dýþarýdan
{								//alýnan deðeri deðiþkene
	kAdi = kategori;			//atama
}
string Kategori::getKategori()	//alýnan deðeri 
{								//donduren fonksiyon
	return kAdi;
}