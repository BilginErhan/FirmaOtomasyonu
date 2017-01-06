#include "Satis.h" //headerý cpp ye dahil etme
Satis::Satis() //yapýcý fonksiyon
{
	satisAdet = 0;
}
void Satis::setSatis(int satis) //dýþarýdan alýnan deðeri
{								//deðiþkene atama fonksiyonu
	satisAdet = satis;
}
int Satis::getSatis()	//alýnana deðeri geri
{						//döndüren fonksiyon
	return satisAdet;
}