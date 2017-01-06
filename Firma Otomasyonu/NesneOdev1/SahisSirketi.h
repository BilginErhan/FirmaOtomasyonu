#ifndef SahisSirketi_H
#define SahisSirketi_H
#include <iostream>//string ifadeler kullanmak
using namespace std;//için gereken eklemeler
class SahisSirketi	//sýnýfýmýzý oluþturduk
{
public:
	SahisSirketi();//yapýcý fonksiyonu
	void setSahisSirketi(char*, char*, char*);//sahis bilgileri alýnan fonksiyon
	void getSahisSirketi();		//sahis bilgileri geri dondurulen fonksiyon
private:
	string sahis_adi, sahis_soyadi, sahis_tc;//string deðiþkenlerimiz
};
#endif