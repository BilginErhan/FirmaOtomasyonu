#include "Stok.h"//header� cpp ye ekliyoruz
Stok::Stok()	//yap�c� fonksiyon
{
	adet = 0;
}
void Stok::setStok(int adet1)//d��ar�dan al�nan de�eri 
{							 //adete e�itleye fonksiyon
	adet = adet1;
}
int Stok::getStok()//ald���m�z de�eri geri d�nd�ren	
{				   //fonksiyon
	return adet;
}