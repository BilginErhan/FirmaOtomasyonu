#ifndef SermayeSirketi_H
#define SermayeSirketi_H
#include <iostream>//string ifadeleri kullanmak
using namespace std;//i�in gerken eklemeler
class SermayeSirketi	//s�n�f�m�z� olu�turduk
{
public:
	SermayeSirketi();	//yap�c� fonksiyonumuz
	void setSermayeSirketi(char*, char*, char*);  //sermaye bilgilerini ald���m�z fonksiyon
	void getSermayeSirketi();	//sermaye bilgileri donduren fonksiyonumuz
private:
	//string de�i�kenlerimiz
	string sermaye_adi, sermaye_sirketTipi, sermaye_vergiNo;
};
#endif