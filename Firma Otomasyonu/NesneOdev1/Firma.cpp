#include <iostream>//string ifadeleri 
#include <string>//gerek eklemeler
#include <string.h>
#include <xstring>
#include "Firma.h" //firma headrýmýzý cpp ye ekliyoruz
#include <sstream>//stringstream fonksiyonunu kullanmak için
using namespace std;//kullanmak için
Firma::Firma()
{				//yapýcý fonksiyonda sayaclarý sýfýrlama
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
{					//firma adý ve adresi ifadelerini alan fonksiyon
	fAdi[sayacc] = firmaAdi;
	fAdresiletisim[sayacc] = iletisim;
}
void Firma::getFirma(int a1)
{				//firma adý ve adresi geri donduren fonksiyon
	setlocale(LC_ALL, "Turkish");
	cout << "Firma Adi :" << fAdi[a1];
	cout << "Firma Adres Iletisim :"<<fAdresiletisim[a1];
}
void Firma::FirmaismiGuncelle(char* firmaAdi,char*yenifirma)
{						//alýnan firma adýna gore fAdi dizisinde ilgili firmayla yerini deðiþtiren 
	for (int i = 0; i < 10; i++)			//fonksiyon
	{
		if (fAdi[i] == firmaAdi)
		{
			firmasayaci = i;
			break;
		}
	}
	if (fAdi[firmasayaci] == firmaAdi)//eðer firma Adý sistemde var ise deðiþtirir
	{
		setlocale(LC_ALL, "Turkish");
		fAdi[firmasayaci] = yenifirma;
		cout << "\tBasarýlý bir sekilde guncellenmistir" << "\n";
		cout << "\tYeni firma adý : " << fAdi[firmasayaci] << "\n";
	}
}
void Firma::SahisSirketim(SahisSirketi a,char* firmaAdi,char* adres)
{			//sirketler nesne dizisine SahisSirketi sýnýfýný atma fonksiyonu
	fAdi[sahissayac] = firmaAdi;	//ve fAdi ve fAdresiletisim dizilerine ekleme fonksiyonu
	fAdresiletisim[sahissayac] = adres;
	sirketler[sahissayac] = a;
	sahissayac++;
}
void Firma::SermayeSirketim(SermayeSirketi b, char* firmaAdi, char* adres)
{		//sirketler1 nesne dizisine SermayeSirketi sýnýfýný atma fonksiyonu
	fAdi[sermayesayac + 5] = firmaAdi;	//ve fAdi ve fAdresiletisim dizilerine ekleme fonksiyonu
	fAdresiletisim[sermayesayac + 5] = adres;
	sirketler1[sermayesayac] = b;
	sermayesayac++;
}
void Firma::UrunEkle(Urun u, char* firmaAdi)
{			//Urnler iki boyutlu nesne dizisine alýnan firma adýna göre
	for (int i = 0; i < 10; i++)	//Urun sýnýfý eklenir
	{
		if (fAdi[i] == firmaAdi)
		{
			firmasayaci = i;	//ilk basta firma adýnýn dizide 
			break;				//hangi indiste olduðu bulur 
		}
	}
	switch (firmasayaci)
	{
	case 0:
		urunler[0][usayac0] = u;//daha sonra alýnan indise gore
		usayac0++;				//urunler nesnesine urun sýnýfý 
		break;					//eklenir ve baþka urun eklemek
	case 1:						//için sayac deðiþleri 1 arttýlýr
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
{		//alýnan firmaAdýna gore kampanyalar nesne dizisine 
	for (int i = 0; i < 10; i++)		//kampanya sýnýfý eklenir
	{
		if (fAdi[i] == firmaAdi)
		{
			firmasayaci = i;
		}
	}
	kampanyalar[firmasayaci] = d;

}
void Firma::UrunleriListele(char* firmaAdi)
{		//alýnan firma adýna göre urunleri listeleyen fonksiyonumuz
	firmasayaci = 0;
	for (int i = 0; i < 10; i++)
	{
		if (fAdi[i] == firmaAdi)
		{
			firmasayaci = i;	//ilk basta firma adýnýn dizide 
			break;				//hangi indiste olduðu bulunur
		}
	}
	if (fAdi[firmasayaci] == firmaAdi)
	{
		switch (firmasayaci)	//alýnan indise gore sayac belirlenir
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
	}	//daha sonra firmanýn urunlerini listeleyen for dongusu çalýþýr
	if (fAdi[firmasayaci] == firmaAdi)
	{
		setlocale(LC_ALL, "Turkish");
		for (int i = 0; i < urunsayac; i++)
		{
			urunler[firmasayaci][i].getUrun();	//urunler nesne dizisindeki urun
		}										//sýnýfýnýn geturun fonksiyonu çaðrýlýr
	}
	else
		cout << "\n\tÝlgili Firma Urunleri Bulunamadi\n";
}
void Firma::UrunSatisiYapanFirmalar(char* UrunAdi)
{
	setlocale(LC_ALL,"Turkish");
	urunsayac = 0;
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 100; j++)//urunler dizisini dolaþmak için
		{							//gereken forlar
			if (urunler[i][j].UrunKontrol() == UrunAdi)//urunadi kontrol edilir
			{
				urunsayac = 1;
				if (urunler[i][j].SatisKontrol() >= 1)//satisadedi 1 ve 1 den fazla olmalý
				{
					if (i < 5)
					{//urunler nesne dizisinin ilk 5 satýrýnda sahis firmasý tutulduðu
						//için böyle bir if e gerek duydum
						cout << "\n\tFirma Adi :" << fAdi[i];//gerekli bilgiler ekrana basýlýr
						cout << "\n\tFirma Adres Iletisim :" << fAdresiletisim[i];
						sirketler[i].getSahisSirketi();//sirketler dizisinden sahis sirketi
						cout << endl;				//bilgileri ekrana yazdýrýlýr
					}
					if (i >= 5)
					{
						//urunler nesne dizisinin son 5 satýrýnda sermaye firmasý tutulduðu
						//için böyle bir if e gerek duydum
						cout << "\n\tFirma Adi :" << fAdi[i];//gerekli deðiþkenler yazdýrýlýr
						cout << "\n\tFirma Adres Iletisim :" << fAdresiletisim[i];
						sirketler1[i-5].getSermayeSirketi();//sirketler1 dizisinden sermaye sirketi
						cout << endl;									//bilgileri ekrana yazdýrýlýr
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
		for (int j = 0; j < 100; j++)//urunler dizisinde dolaþmak için gereken forlar
		{
			if (urunler[i][j].UrunKontrol() == Urunadi)//alýnan urun adý kontrol edilir
			{
				urunsayac = 1;
				if (urunler[i][j].stokKontrol() >= 1)//stokda varmý diye kontrol edilir
				{
					firmaSayaci[ucuz] = i;//firma sayacý dizisine firma indisi atýlýr
					ucuzUrun[ucuz] = urunler[i][j].fiyatKontrol();//ucuurun dizisine fiyatlar atýlýr
					ucuz++;//dizi sayacý arttýrýlýr
				}
			}
		}
	}
	enucuz = ucuzUrun[0];//en ucuz urun ilk baþta 0. indisteki eleman olarak 
	for (int i = 1; i < ucuz; i++)					//kabul edilir
	{
		if (enucuz>ucuzUrun[i])//daha sonra ondan daha küçük bir fiyat
		{						//varsa enucuz deðiþkeni deðiþtirilir
			enucuz = ucuzUrun[i];//ve hangi firmada olduðunu bilmek için
			firmasayaci=firmaSayaci[i];		//firma indisi bir deðere atanýr
		}
	}
	if (enucuz > 0 && urunsayac==1)
	{
		cout << "\n\tFiyati :" << enucuz;//firma adý ve urun fiyatý ekrana basýlýr
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
		for (int j = 0; j < 100; j++)//urunler dizisinde dolaþmak için gereken forlar
		{
			if (urunler[i][j].KategoriKontrol() == kategori)//kategori adý kontrol edilir
			{
				kategoriSayac = 1;
				if (i < 5)
				{//sahis sirketi bilgileri ve urun bilgileri ekrana basýlýr
					cout << "\n\tFirma Adi :" << fAdi[i];
					cout << "\n\tFirma Adres Iletisim :" << fAdresiletisim[i];
					sirketler[i].getSahisSirketi();
					urunler[i][j].getUrun();
					cout << endl;
				}
				if (i>=5)
				{//sermaye sirketi bilgileri ve urun bilgileri ekrana basýlýr
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
		for (int j = 0; j < 100; j++)//urunler dizinde dolaþmak için gereken forlar
		{
			if (urunler[i][j].promosyonKontrol())//promosyonlu urun kontrol
			{
				if (i < 5)
				{//urun bilgileri ve sahis sirketi bilgileri ekrana basýlýr
					cout << "\n\tUrun Adi :" << urunler[i][j].UrunKontrol();
					cout << "\n\tFirma Adi :" << fAdi[i];
					cout << "\n\tFirma Adres Iletisim :" << fAdresiletisim[i];
					sirketler[i].getSahisSirketi();
					cout << endl;
				}
				if (i >= 5)
				{//urun bilgileri ve sermaye sirketi bilgileri ekrana basýlýr
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
	GuncelTarih = tarih; //string deðiþkenine atýlýyor
	for (int i = 0; i < 10; i++)
	{
		if (fAdi[i] == firmaAdi)
		{
			firmasayaci = i;	//ilk basta firma adýnýn dizide 
			break;				//hangi indiste olduðu bulunur
		}
	}
	stringstream bitis(kampanyalar[firmasayaci].getBitisTarihi());//string ifadeyi inte çevirme
	int Bitisyil,GuncelYýl;
	bitis >> Bitisyil;
	stringstream son(GuncelTarih);//string ifadeyi inte çevirme
	son >> GuncelYýl;
	bitisYýl = (Bitisyil % 10) + ((Bitisyil / 10) % 10) * 10;//son iki haneyi yýl deðiþkenine atýyoruz
	Bitisyil = Bitisyil / 100;//son iki haneyi siliyoruz
	bitisAy = (Bitisyil % 10) + ((Bitisyil / 10) % 10) * 10;//son iki haneyi ay deðiþkenine atýyoruz
	Bitisyil = Bitisyil / 100;//son iki haneyi siliyoruz
	bitisGun = (Bitisyil % 10) + ((Bitisyil / 10) % 10) * 10;//son iki haneyi gun deðiþkenine atýyoruz
	guncelYýl = (GuncelYýl % 10) + ((GuncelYýl / 10) % 10) * 10;//ayný iþlemleri guncel tarih için de yapýyoruz
	GuncelYýl = GuncelYýl / 100;
	guncelAy = (GuncelYýl % 10) + ((GuncelYýl / 10) % 10) * 10;
	GuncelYýl = GuncelYýl / 100;
	guncelGun = (GuncelYýl % 10) + ((GuncelYýl / 10) % 10) * 10;
	if (guncelYýl > bitisYýl)//eðer guncel yýl buyukse kampanya suresi bitmemis o yüzden
		sayac1 = 0;			//sayac1 deðiþkeni 1 olur
	else					//deðilse 0 olur
		sayac1 = 1;
	if (guncelYýl == bitisYýl)//eðer eþit ise 2 ye eþittir
		sayac1 = 2;
	if (guncelAy > bitisAy)//eper guncel ay bitis ayýndan büyükse 
		sayac2 = 0;			//sayac1 deðiþkeni 1 olur
	else					//deðilse 0 olur
		sayac2 = 1;
	if (guncelAy == bitisAy)//eðer eþit ise 2 olur ve böyle devam eder
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
			firmasayaci = i;	//ilk basta firma adýnýn dizide 
			break;				//hangi indiste olduðu bulunur
		}
	}
	stringstream bitis(kampanyalar[firmasayaci].getBitisTarihi());//string ifadeyi inte çevirme
	int Bitisyil, GuncelYýl;
	bitis >> Bitisyil;
	stringstream son(GuncelTarih);//string ifadeyi inte çevirme
	son >> GuncelYýl;
	bitisYýl = (Bitisyil % 10) + ((Bitisyil / 10) % 10) * 10;//son iki haneyi yýl deðiþkenine atýyoruz
	Bitisyil = Bitisyil / 100;//son iki haneyi siliyoruz
	bitisAy = (Bitisyil % 10) + ((Bitisyil / 10) % 10) * 10;//son iki haneyi ay deðiþkenine atýyoruz
	Bitisyil = Bitisyil / 100;//son iki haneyi siliyoruz
	bitisGun = (Bitisyil % 10) + ((Bitisyil / 10) % 10) * 10;//son iki haneyi gun deðiþkenine atýyoruz
	guncelYýl = (GuncelYýl % 10) + ((GuncelYýl / 10) % 10) * 10;//ayný iþlemleri guncel tarih için de yapýyoruz
	GuncelYýl = GuncelYýl / 100;
	guncelAy = (GuncelYýl % 10) + ((GuncelYýl / 10) % 10) * 10;
	GuncelYýl = GuncelYýl / 100;
	guncelGun = (GuncelYýl % 10) + ((GuncelYýl / 10) % 10) * 10;
	if (guncelYýl > bitisYýl)//eðer guncel yýl buyukse kampanya suresi bitmemis o yüzden
		sayac1 = 0;			//sayac1 deðiþkeni 1 olur
	else					//deðilse 0 olur
		sayac1 = 1;
	if (guncelYýl == bitisYýl)//eðer eþit ise 2 ye eþittir
		sayac1 = 2;
	if (guncelAy > bitisAy)//eper guncel ay bitis ayýndan büyükse 
		sayac2 = 0;			//sayac1 deðiþkeni 1 olur
	else					//deðilse 0 olur
		sayac2 = 0;
	if (guncelAy == bitisAy)//eðer eþit ise 2 olur ve böyle devam eder
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
	firmasayaci = 0;		//Firma Adý Sistemde mi diye kontrol 
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