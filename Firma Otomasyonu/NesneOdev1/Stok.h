#ifndef STOK_H
#define STOK_H
class Stok	//Stok S�n�f� olu�turuldu
{
public:
	Stok();		//yap�c� fonksiyon
	void setStok(int);	//de�er yazma fonksiyonu
	int getStok();	//de�er basma fonksiyonu
private:
	int adet;	// adet de�i�keni
};
#endif