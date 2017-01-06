#include <iostream>//string ifadeler kullanmak 
using namespace std;//için gekeren
#include <string>//eklemeler
#include "SahisSirketi.h"//headerý cpp ye ekliyoruz
SahisSirketi::SahisSirketi()
{
	//yapýcý fonksiyon
}
void SahisSirketi::setSahisSirketi(char* adi, char* soyadi, char* tc)
{
	sahis_adi = adi;
	sahis_soyadi = soyadi;	//sahis bilgileri deðiþkenlere atýyoruz
	sahis_tc = tc;
}
void SahisSirketi::getSahisSirketi()
{
	setlocale(LC_ALL, "Turkish");
	cout << "\n\tSahis Adi :" << sahis_adi;
	cout << "\n\tSahis Soyadi :" << sahis_soyadi;	//sahis bilgileri donuduren fonksiyonumuz
	cout << "\n\tSahis Tc :" << sahis_tc;
}