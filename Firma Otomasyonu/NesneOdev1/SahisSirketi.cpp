#include <iostream>//string ifadeler kullanmak 
using namespace std;//i�in gekeren
#include <string>//eklemeler
#include "SahisSirketi.h"//header� cpp ye ekliyoruz
SahisSirketi::SahisSirketi()
{
	//yap�c� fonksiyon
}
void SahisSirketi::setSahisSirketi(char* adi, char* soyadi, char* tc)
{
	sahis_adi = adi;
	sahis_soyadi = soyadi;	//sahis bilgileri de�i�kenlere at�yoruz
	sahis_tc = tc;
}
void SahisSirketi::getSahisSirketi()
{
	setlocale(LC_ALL, "Turkish");
	cout << "\n\tSahis Adi :" << sahis_adi;
	cout << "\n\tSahis Soyadi :" << sahis_soyadi;	//sahis bilgileri donuduren fonksiyonumuz
	cout << "\n\tSahis Tc :" << sahis_tc;
}