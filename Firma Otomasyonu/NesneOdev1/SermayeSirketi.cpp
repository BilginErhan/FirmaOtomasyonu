#include <iostream>//string ifadeleri 
using namespace std;//kullanmak i�in
#include <string>//gereken eklemeler
#include "SermayeSirketi.h"	//headr�m�z� cpp ye ekliyoruz
SermayeSirketi::SermayeSirketi()
{

}
void SermayeSirketi::setSermayeSirketi(char* adi, char* sirkettipi, char* vergi)
{
	sermaye_adi = adi;
	sermaye_sirketTipi = sirkettipi; //al�nan de�erleri de�i�kenlere at�yoruz
	sermaye_vergiNo = vergi;
}
void SermayeSirketi::getSermayeSirketi()
{
	setlocale(LC_ALL, "Turkish");
	cout << "\n\tSermaye Adi :" << sermaye_adi;
	cout << "\n\tSirket Tipi :" << sermaye_sirketTipi;//de�erlerimizi geri donduren fonksiyon
	cout << "\n\tVergi No :" << sermaye_vergiNo;
}