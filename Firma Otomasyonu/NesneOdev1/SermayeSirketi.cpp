#include <iostream>//string ifadeleri 
using namespace std;//kullanmak için
#include <string>//gereken eklemeler
#include "SermayeSirketi.h"	//headrýmýzý cpp ye ekliyoruz
SermayeSirketi::SermayeSirketi()
{

}
void SermayeSirketi::setSermayeSirketi(char* adi, char* sirkettipi, char* vergi)
{
	sermaye_adi = adi;
	sermaye_sirketTipi = sirkettipi; //alýnan deðerleri deðiþkenlere atýyoruz
	sermaye_vergiNo = vergi;
}
void SermayeSirketi::getSermayeSirketi()
{
	setlocale(LC_ALL, "Turkish");
	cout << "\n\tSermaye Adi :" << sermaye_adi;
	cout << "\n\tSirket Tipi :" << sermaye_sirketTipi;//deðerlerimizi geri donduren fonksiyon
	cout << "\n\tVergi No :" << sermaye_vergiNo;
}