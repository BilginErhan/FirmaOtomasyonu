#ifndef SahisSirketi_H
#define SahisSirketi_H
#include <iostream>//string ifadeler kullanmak
using namespace std;//i�in gereken eklemeler
class SahisSirketi	//s�n�f�m�z� olu�turduk
{
public:
	SahisSirketi();//yap�c� fonksiyonu
	void setSahisSirketi(char*, char*, char*);//sahis bilgileri al�nan fonksiyon
	void getSahisSirketi();		//sahis bilgileri geri dondurulen fonksiyon
private:
	string sahis_adi, sahis_soyadi, sahis_tc;//string de�i�kenlerimiz
};
#endif