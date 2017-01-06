#include <iostream>//string ifadeleri 
#include <string>//gerek eklemeler
#include <string.h>
#include <xstring>
#include "Firma.h" //firma headr�m�z� cpp ye ekliyoruz
#include <sstream>//stringstream fonksiyonunu kullanmak i�in
using namespace std;//kullanmak i�in
Firma::Firma()
{				//yap�c� fonksiyonda sayaclar� s�f�rlama
	sahissayac = 0;
	sermayesayac = 0;
	urunsayac = 0;
	firmasayaci = 0;
	usayac0 = usayac1 = usayac2 = usayac3 = usayac4 = usayac5 = usayac6 = usayac7 = usayac8 = usayac9 = 0;
	urunsayac = 0;
	ucuz = 0;
	enucuz = 0;
}
void Firma::setFirma(char* firmaAdi, char* iletisim,int sayacc)
{					//firma ad� ve adresi ifadelerini alan fonksiyon
	fAdi[sayacc] = firmaAdi;
	fAdresiletisim[sayacc] = iletisim;
}
void Firma::getFirma(int a1)
{				//firma ad� ve adresi geri donduren fonksiyon
	setlocale(LC_ALL, "Turkish");
	cout << "Firma Adi :" << fAdi[a1];
	cout << "Firma Adres Iletisim :"<<fAdresiletisim[a1];
}
void Firma::FirmaismiGuncelle(char* firmaAdi,char*yenifirma)
{						//al�nan firma ad�na gore fAdi dizisinde ilgili firmayla yerini de�i�tiren 
	for (int i = 0; i < 10; i++)			//fonksiyon
	{
		if (fAdi[i] == firmaAdi)
		{
			firmasayaci = i;
			break;
		}
	}
	if (fAdi[firmasayaci] == firmaAdi)//e�er firma Ad� sistemde var ise de�i�tirir
	{
		setlocale(LC_ALL, "Turkish");
		fAdi[firmasayaci] = yenifirma;
		cout << "\tBasar�l� bir sekilde guncellenmistir" << "\n";
		cout << "\tYeni firma ad� : " << fAdi[firmasayaci] << "\n";
	}
}
void Firma::SahisSirketim(SahisSirketi a,char* firmaAdi,char* adres)
{			//sirketler nesne dizisine SahisSirketi s�n�f�n� atma fonksiyonu
	fAdi[sahissayac] = firmaAdi;	//ve fAdi ve fAdresiletisim dizilerine ekleme fonksiyonu
	fAdresiletisim[sahissayac] = adres;
	sirketler[sahissayac] = a;
	sahissayac++;
}
void Firma::SermayeSirketim(SermayeSirketi b, char* firmaAdi, char* adres)
{		//sirketler1 nesne dizisine SermayeSirketi s�n�f�n� atma fonksiyonu
	fAdi[sermayesayac + 5] = firmaAdi;	//ve fAdi ve fAdresiletisim dizilerine ekleme fonksiyonu
	fAdresiletisim[sermayesayac + 5] = adres;
	sirketler1[sermayesayac] = b;
	sermayesayac++;
}
void Firma::UrunEkle(Urun u, char* firmaAdi)
{			//Urnler iki boyutlu nesne dizisine al�nan firma ad�na g�re
	for (int i = 0; i < 10; i++)	//Urun s�n�f� eklenir
	{
		if (fAdi[i] == firmaAdi)
		{
			firmasayaci = i;	//ilk basta firma ad�n�n dizide 
			break;				//hangi indiste oldu�u bulur 
		}
	}
	switch (firmasayaci)
	{
	case 0:
		urunler[0][usayac0] = u;//daha sonra al�nan indise gore
		usayac0++;				//urunler nesnesine urun s�n�f� 
		break;					//eklenir ve ba�ka urun eklemek
	case 1:						//i�in sayac de�i�leri 1 artt�l�r
		urunler[1][usayac1] = u;
		usayac1++;
		break;
	case 2:
		urunler[2][usayac2] = u;
		usayac2++;
		break;
	case 3:
		urunler[3][usayac3] = u;
		usayac3++;
		break;
	case 4:
		urunler[4][usayac4] = u;
		usayac4++;
		break;
	case 5:
		urunler[5][usayac5] = u;
		usayac5++;
		break;
	case 6:
		urunler[6][usayac6] = u;
		usayac6++;
		break;
	case 7:
		urunler[7][usayac7] = u;
		usayac7++;
		break;
	case 8:
		urunler[8][usayac8] = u;
		usayac8++;
		break;
	case 9:
		urunler[9][usayac9] = u;
		usayac9++;
		break;
	}
}
void Firma::Kampanyaekle(Kampanya d, char* firmaAdi)
{		//al�nan firmaAd�na gore kampanyalar nesne dizisine 
	for (int i = 0; i < 10; i++)		//kampanya s�n�f� eklenir
	{
		if (fAdi[i] == firmaAdi)
		{
			firmasayaci = i;
		}
	}
	kampanyalar[firmasayaci] = d;

}
void Firma::UrunleriListele(char* firmaAdi)
{		//al�nan firma ad�na g�re urunleri listeleyen fonksiyonumuz
	firmasayaci = 0;
	for (int i = 0; i < 10; i++)
	{
		if (fAdi[i] == firmaAdi)
		{
			firmasayaci = i;	//ilk basta firma ad�n�n dizide 
			break;				//hangi indiste oldu�u bulunur
		}
	}
	if (fAdi[firmasayaci] == firmaAdi)
	{
		switch (firmasayaci)	//al�nan indise gore sayac belirlenir
		{
		case 0:
			urunsayac = usayac0;
			break;
		case 1:
			urunsayac = usayac1;
			break;
		case 2:
			urunsayac = usayac2;
			break;
		case 3:
			urunsayac = usayac3;
			break;
		case 4:
			urunsayac = usayac4;
			break;
		case 5:
			urunsayac = usayac5;
			break;
		case 6:
			urunsayac = usayac6;
			break;
		case 7:
			urunsayac = usayac7;
			break;
		case 8:
			urunsayac = usayac8;
			break;
		case 9:
			urunsayac = usayac9;
			break;
		}
	}	//daha sonra firman�n urunlerini listeleyen for dongusu �al���r
	if (fAdi[firmasayaci] == firmaAdi)
	{
		setlocale(LC_ALL, "Turkish");
		for (int i = 0; i < urunsayac; i++)
		{
			urunler[firmasayaci][i].getUrun();	//urunler nesne dizisindeki urun
		}										//s�n�f�n�n geturun fonksiyonu �a�r�l�r
	}
	else
		cout << "\n\t�lgili Firma Urunleri Bulunamadi\n";
}
void Firma::UrunSatisiYapanFirmalar(char* UrunAdi)
{
	setlocale(LC_ALL,"Turkish");
	urunsayac = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 100; j++)//urunler dizisini dola�mak i�in
		{							//gereken forlar
			if (urunler[i][j].UrunKontrol() == UrunAdi)//urunadi kontrol edilir
			{
				urunsayac = 1;
				if (urunler[i][j].SatisKontrol() >= 1)//satisadedi 1 ve 1 den fazla olmal�
				{
					if (i < 5)
					{//urunler nesne dizisinin ilk 5 sat�r�nda sahis firmas� tutuldu�u
						//i�in b�yle bir if e gerek duydum
						cout << "\n\tFirma Adi :" << fAdi[i];//gerekli bilgiler ekrana bas�l�r
						cout << "\n\tFirma Adres Iletisim :" << fAdresiletisim[i];
						sirketler[i].getSahisSirketi();//sirketler dizisinden sahis sirketi
						cout << endl;				//bilgileri ekrana yazd�r�l�r
					}
					if (i >= 5)
					{
						//urunler nesne dizisinin son 5 sat�r�nda sermaye firmas� tutuldu�u
						//i�in b�yle bir if e gerek duydum
						cout << "\n\tFirma Adi :" << fAdi[i];//gerekli de�i�kenler yazd�r�l�r
						cout << "\n\tFirma Adres Iletisim :" << fAdresiletisim[i];
						sirketler1[i-5].getSermayeSirketi();//sirketler1 dizisinden sermaye sirketi
						cout << endl;									//bilgileri ekrana yazd�r�l�r
					}
				}
			}
		}
	}
	if (urunsayac == 0)
	{
		cout << "\n\tBoyle Bir Urun Bulunamadi\n";
	}

}
void Firma::EnucuzHangiFirmada(char* Urunadi)
{
	setlocale(LC_ALL, "Turkish");
	ucuz = 0;
	urunsayac = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 100; j++)//urunler dizisinde dola�mak i�in gereken forlar
		{
			if (urunler[i][j].UrunKontrol() == Urunadi)//al�nan urun ad� kontrol edilir
			{
				urunsayac = 1;
				if (urunler[i][j].stokKontrol() >= 1)//stokda varm� diye kontrol edilir
				{
					firmaSayaci[ucuz] = i;//firma sayac� dizisine firma indisi at�l�r
					ucuzUrun[ucuz] = urunler[i][j].fiyatKontrol();//ucuurun dizisine fiyatlar at�l�r
					ucuz++;//dizi sayac� artt�r�l�r
				}
			}
		}
	}
	enucuz = ucuzUrun[0];//en ucuz urun ilk ba�ta 0. indisteki eleman olarak 
	for (int i = 1; i < ucuz; i++)					//kabul edilir
	{
		if (enucuz>ucuzUrun[i])//daha sonra ondan daha k���k bir fiyat
		{						//varsa enucuz de�i�keni de�i�tirilir
			enucuz = ucuzUrun[i];//ve hangi firmada oldu�unu bilmek i�in
			firmasayaci=firmaSayaci[i];		//firma indisi bir de�ere atan�r
		}
	}
	if (enucuz > 0 && urunsayac==1)
	{
		cout << "\n\tFiyati :" << enucuz;//firma ad� ve urun fiyat� ekrana bas�l�r
		cout << "\n\tGirilen Urun un en ucuzu " << fAdi[firmasayaci] << " firmasindadir";
	}
	if (urunsayac == 0)
		cout << "\n\tBoyle Bir Urun Bulunamadi\n";
}
void Firma::KategoriFirma(char* kategori)
{
	setlocale(LC_ALL, "Turkish");
	kategoriSayac = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 100; j++)//urunler dizisinde dola�mak i�in gereken forlar
		{
			if (urunler[i][j].KategoriKontrol() == kategori)//kategori ad� kontrol edilir
			{
				kategoriSayac = 1;
				if (i < 5)
				{//sahis sirketi bilgileri ve urun bilgileri ekrana bas�l�r
					cout << "\n\tFirma Adi :" << fAdi[i];
					cout << "\n\tFirma Adres Iletisim :" << fAdresiletisim[i];
					sirketler[i].getSahisSirketi();
					urunler[i][j].getUrun();
					cout << endl;
				}
				if (i>=5)
				{//sermaye sirketi bilgileri ve urun bilgileri ekrana bas�l�r
					cout << "\n\tFirma Adi :" << fAdi[i];
					cout << "\n\tFirma Adres Iletisim :" << fAdresiletisim[i];
					sirketler1[i-5].getSermayeSirketi();
					urunler[i][j].getUrun();
					cout << endl;
				}
			}
		}
	}
	if (kategoriSayac == 0)
		cout << "\n\tBoyle Bir Kategori Bulunamadi\n";
}
void Firma::PromosyonluUrunleriListele()
{
	setlocale(LC_ALL, "Turkish");
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 100; j++)//urunler dizinde dola�mak i�in gereken forlar
		{
			if (urunler[i][j].promosyonKontrol())//promosyonlu urun kontrol
			{
				if (i < 5)
				{//urun bilgileri ve sahis sirketi bilgileri ekrana bas�l�r
					cout << "\n\tUrun Adi :" << urunler[i][j].UrunKontrol();
					cout << "\n\tFirma Adi :" << fAdi[i];
					cout << "\n\tFirma Adres Iletisim :" << fAdresiletisim[i];
					sirketler[i].getSahisSirketi();
					cout << endl;
				}
				if (i >= 5)
				{//urun bilgileri ve sermaye sirketi bilgileri ekrana bas�l�r
					cout << "\n\tUrun Adi :" << urunler[i][j].UrunKontrol();
					cout << "\n\tFirma Adi :" << fAdi[i];
					cout << "\n\tFirma Adres Iletisim :" << fAdresiletisim[i];
					sirketler1[i-5].getSermayeSirketi();
					cout << endl;
				}

			}
		}
	}
}
void Firma::KampanyaSuresiBitenUrunler(char* firmaAdi,char* tarih)
{
	setlocale(LC_ALL, "Turkish");
	GuncelTarih = tarih; //string de�i�kenine at�l�yor
	for (int i = 0; i < 10; i++)
	{
		if (fAdi[i] == firmaAdi)
		{
			firmasayaci = i;	//ilk basta firma ad�n�n dizide 
			break;				//hangi indiste oldu�u bulunur
		}
	}
	stringstream bitis(kampanyalar[firmasayaci].getBitisTarihi());//string ifadeyi inte �evirme
	int Bitisyil,GuncelY�l;
	bitis >> Bitisyil;
	stringstream son(GuncelTarih);//string ifadeyi inte �evirme
	son >> GuncelY�l;
	bitisY�l = (Bitisyil % 10) + ((Bitisyil / 10) % 10) * 10;//son iki haneyi y�l de�i�kenine at�yoruz
	Bitisyil = Bitisyil / 100;//son iki haneyi siliyoruz
	bitisAy = (Bitisyil % 10) + ((Bitisyil / 10) % 10) * 10;//son iki haneyi ay de�i�kenine at�yoruz
	Bitisyil = Bitisyil / 100;//son iki haneyi siliyoruz
	bitisGun = (Bitisyil % 10) + ((Bitisyil / 10) % 10) * 10;//son iki haneyi gun de�i�kenine at�yoruz
	guncelY�l = (GuncelY�l % 10) + ((GuncelY�l / 10) % 10) * 10;//ayn� i�lemleri guncel tarih i�in de yap�yoruz
	GuncelY�l = GuncelY�l / 100;
	guncelAy = (GuncelY�l % 10) + ((GuncelY�l / 10) % 10) * 10;
	GuncelY�l = GuncelY�l / 100;
	guncelGun = (GuncelY�l % 10) + ((GuncelY�l / 10) % 10) * 10;
	if (guncelY�l > bitisY�l)//e�er guncel y�l buyukse kampanya suresi bitmemis o y�zden
		sayac1 = 0;			//sayac1 de�i�keni 1 olur
	else					//de�ilse 0 olur
		sayac1 = 1;
	if (guncelY�l == bitisY�l)//e�er e�it ise 2 ye e�ittir
		sayac1 = 2;
	if (guncelAy > bitisAy)//eper guncel ay bitis ay�ndan b�y�kse 
		sayac2 = 0;			//sayac1 de�i�keni 1 olur
	else					//de�ilse 0 olur
		sayac2 = 1;
	if (guncelAy == bitisAy)//e�er e�it ise 2 olur ve b�yle devam eder
		sayac2 = 2;
	if (guncelGun > bitisGun)
		sayac3 = 0;
	else
		sayac3 = 1;
	if (guncelGun == bitisGun)
		sayac3 = 2;
	geciciUrun = kampanyalar[firmasayaci].getUrunler();
	if ((sayac1 == 2 && sayac2 == 2 && sayac3 == 0) || (sayac1 == 2 && sayac2 == 0) || (sayac1 == 0))
	{
		for (int i = 0; i <= geciciUrun.length(); i++)
		{
			if ((geciciUrun[i] == karakter[0])||(geciciUrun[i]=='\0'))
			{
				for (int j = 0; j < 100;j++)
				{
					geciciUrunKodu = urunler[firmasayaci][j].get_Urunkodu();
					for (i; i>Urun_kampanya;Urun_kampanya++)
					{
						if (geciciUrun[Urun_kampanya] == geciciUrunKodu[kampanyaSayac])
						{
							kampanyaSayac1 = 1;
						}
						else
						{
							kampanyaSayac1 = 0;
							break;
						}
						kampanyaSayac++;
					}
					if (kampanyaSayac1 == 1)
					{
						urunler[firmasayaci][j].getUrun();
						cout << endl;
						kampanyaSayac1 = 0;
						Urun_kampanya++;
					}
					kampanyaSayac = 0;
				}
			}
		}
	}
	Urun_kampanya = 0;
	kampanyaSayac = 0;
	kampanyaSayac1 = 0;
	sayac1 = sayac2 = sayac3 = 0;
}
void Firma::getKampanyaliUrunler(char* firmaAdi,char* tarih)
{
	setlocale(LC_ALL, "Turkish");
	for (int i = 0; i < 10; i++)
	{
		if (fAdi[i] == firmaAdi)
		{
			firmasayaci = i;	//ilk basta firma ad�n�n dizide 
			break;				//hangi indiste oldu�u bulunur
		}
	}
	stringstream bitis(kampanyalar[firmasayaci].getBitisTarihi());//string ifadeyi inte �evirme
	int Bitisyil, GuncelY�l;
	bitis >> Bitisyil;
	stringstream son(GuncelTarih);//string ifadeyi inte �evirme
	son >> GuncelY�l;
	bitisY�l = (Bitisyil % 10) + ((Bitisyil / 10) % 10) * 10;//son iki haneyi y�l de�i�kenine at�yoruz
	Bitisyil = Bitisyil / 100;//son iki haneyi siliyoruz
	bitisAy = (Bitisyil % 10) + ((Bitisyil / 10) % 10) * 10;//son iki haneyi ay de�i�kenine at�yoruz
	Bitisyil = Bitisyil / 100;//son iki haneyi siliyoruz
	bitisGun = (Bitisyil % 10) + ((Bitisyil / 10) % 10) * 10;//son iki haneyi gun de�i�kenine at�yoruz
	guncelY�l = (GuncelY�l % 10) + ((GuncelY�l / 10) % 10) * 10;//ayn� i�lemleri guncel tarih i�in de yap�yoruz
	GuncelY�l = GuncelY�l / 100;
	guncelAy = (GuncelY�l % 10) + ((GuncelY�l / 10) % 10) * 10;
	GuncelY�l = GuncelY�l / 100;
	guncelGun = (GuncelY�l % 10) + ((GuncelY�l / 10) % 10) * 10;
	if (guncelY�l > bitisY�l)//e�er guncel y�l buyukse kampanya suresi bitmemis o y�zden
		sayac1 = 0;			//sayac1 de�i�keni 1 olur
	else					//de�ilse 0 olur
		sayac1 = 1;
	if (guncelY�l == bitisY�l)//e�er e�it ise 2 ye e�ittir
		sayac1 = 2;
	if (guncelAy > bitisAy)//eper guncel ay bitis ay�ndan b�y�kse 
		sayac2 = 0;			//sayac1 de�i�keni 1 olur
	else					//de�ilse 0 olur
		sayac2 = 0;
	if (guncelAy == bitisAy)//e�er e�it ise 2 olur ve b�yle devam eder
		sayac2 = 1;
	if (guncelGun > bitisGun)
		sayac3 = 0;
	else
		sayac3 = 1;
	if (guncelGun == bitisGun)
		sayac3 = 2;
	geciciUrun = kampanyalar[firmasayaci].getUrunler();
	if ((sayac1==2 && sayac2==2 && sayac3==2) || (sayac1 == 2 && sayac2 == 2 && sayac3 == 1) || (sayac1 == 2 && sayac2 == 1) || (sayac1 == 1))
	{
		for (int i = 0; i <= geciciUrun.length(); i++)
		{
			if ((geciciUrun[i] == karakter[0]) || (geciciUrun[i] == '\0'))
			{
				for (int j = 0; j < 100; j++)
				{
					geciciUrunKodu = urunler[firmasayaci][j].get_Urunkodu();
					for (i; i>Urun_kampanya; Urun_kampanya++)
					{
						if (geciciUrun[Urun_kampanya] == geciciUrunKodu[kampanyaSayac])
						{
							kampanyaSayac1 = 1;
						}
						else
						{
							kampanyaSayac1 = 0;
							break;
						}
						kampanyaSayac++;
					}
					if (kampanyaSayac1 == 1)
					{
						urunler[firmasayaci][j].getUrun();
						cout << endl;
						kampanyaSayac1 = 0;
						Urun_kampanya++;
					}
					kampanyaSayac = 0;
				}
			}
		}
	}
	Urun_kampanya = 0;
	kampanyaSayac = 0;
	kampanyaSayac1 = 0;
	sayac1 = sayac2 = sayac3 = 0;
}
int Firma::FirmaAdiKontrol(char* firmaAdi)
{
	firmasayaci = 0;		//Firma Ad� Sistemde mi diye kontrol 
	for (int i = 0; i < 10; i++)	//eden fonksiyonumuz
	{
		if (fAdi[i] == firmaAdi)
		{
			firmasayaci = 1;
			return firmasayaci;
			break;
		}
	}
	if (firmasayaci == 0)
	{
		return firmasayaci;
	}
}