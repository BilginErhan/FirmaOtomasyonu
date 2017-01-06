#include "Stok.h"//headerý cpp ye ekliyoruz
Stok::Stok()	//yapýcý fonksiyon
{
	adet = 0;
}
void Stok::setStok(int adet1)//dýþarýdan alýnan deðeri 
{							 //adete eþitleye fonksiyon
	adet = adet1;
}
int Stok::getStok()//aldýðýmýz deðeri geri döndüren	
{				   //fonksiyon
	return adet;
}