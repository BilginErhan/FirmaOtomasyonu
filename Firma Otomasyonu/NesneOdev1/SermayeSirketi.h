#ifndef SermayeSirketi_H
#define SermayeSirketi_H
#include <iostream>//string ifadeleri kullanmak
using namespace std;//için gerken eklemeler
class SermayeSirketi	//sýnýfýmýzý oluþturduk
{
public:
	SermayeSirketi();	//yapýcý fonksiyonumuz
	void setSermayeSirketi(char*, char*, char*);  //sermaye bilgilerini aldýðýmýz fonksiyon
	void getSermayeSirketi();	//sermaye bilgileri donduren fonksiyonumuz
private:
	//string deðiþkenlerimiz
	string sermaye_adi, sermaye_sirketTipi, sermaye_vergiNo;
};
#endif