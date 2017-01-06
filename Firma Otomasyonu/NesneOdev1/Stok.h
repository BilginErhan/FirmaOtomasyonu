#ifndef STOK_H
#define STOK_H
class Stok	//Stok Sýnýfý oluþturuldu
{
public:
	Stok();		//yapýcý fonksiyon
	void setStok(int);	//deðer yazma fonksiyonu
	int getStok();	//deðer basma fonksiyonu
private:
	int adet;	// adet deðiþkeni
};
#endif