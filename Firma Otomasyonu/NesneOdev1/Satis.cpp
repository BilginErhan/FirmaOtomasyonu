#include "Satis.h" //header� cpp ye dahil etme
Satis::Satis() //yap�c� fonksiyon
{
	satisAdet = 0;
}
void Satis::setSatis(int satis) //d��ar�dan al�nan de�eri
{								//de�i�kene atama fonksiyonu
	satisAdet = satis;
}
int Satis::getSatis()	//al�nana de�eri geri
{						//d�nd�ren fonksiyon
	return satisAdet;
}