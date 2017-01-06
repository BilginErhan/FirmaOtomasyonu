#include <iostream>//cout cin kullanýmý için gereken kütüphane
#include <iomanip>//setw fonksiyonu için gereken kütüphane
#include "SahisSirketi.h"
#include "SermayeSirketi.h"
#include "Firma.h"//oluþturduðumuz headerlarý yurutucumuze ekledik
#include "Urun.h"
#include "Kampanya.h"
using namespace std;
int main()
{
	SermayeSirketi sermaye;
	SahisSirketi sahis;
	Firma F;//headrdaki fonksiyonlara eriþmek için kullanýlan nesneler
	Urun U;
	Kampanya Kmp;
	setlocale(LC_ALL, "Turkish");//turkce karakter yazdýrma fonksiyonu
	int secim = 0, kacincifirma = -1;
	char yeniFirma[20];
	char fAd[20], Adresiletisim[20], sermayeAdi[20], sahisAd[20], sahisSoyad[20], Tc[11], sirketTipi[20], vergiNumara[16];
	char UrunAdi[20], Umodeli[20], Ukodu[10], Uaciklama[20], Ukategori[10];
	bool Upromosyon;								//fonksiyonlara yollayacaðýmýz deðiþkenler
	int Usatis, Ustok, Ufiyati;
	char kampanyaAdi[20],Ukampanya[20], KampanyaBaslangic[6], KampanyaBitis[6],GirilenTarih[6];
	int sayac1 = 0, sayac2 = 5;
	while (secim != -1)//programýn devamlýlýðý için bir döngü oluþturuldu
	{
		cout <<setw(80)<< "ATATÜRK ÜNÝVERSÝTESÝ\n"<<setw(80)<<"BÝLGÝSAYAR MÜHENDÝSLÝÐÝ\n"<<setw(80)<<"ERHAN BÝLGÝN\n";
		cout << setw(60)<<"----------Firma Satýþ Bilgi Sistemi----------\n";
		cout <<"\t1.Firma Ekleme\n\t2.Firma Güncelleme\n\t3.Ürün Ekleme\n";
		cout << "\t4.Kampanya Ekleme\n\t5.Firma Ürünlerini Listele\n";
		cout << "\t6.Ürün Satýþýný Yapan Firmalarý Listele\n\t7.En Ucuz Hangi Firmada\n";
		cout << "\t8.Kategoriye Göre Ürünleri Listele\n";
		cout << "\t9.Promosyonlu Ürünleri Listele\n";	//kullanýcýya seçenekler sunuldu
		cout << "\t10.Kampanya Süresi Biten Ürünleri Listele\n";
		cout << "\t11.Kampanya Süresi Devam Eden Ürünleri Lisetele\n";
		cout << "\t12.Programdan Çýk\n";
		cout << "\n\tBir Ýþlem Numarasý Seçin :";
		cin >> secim;	//herhangi bir iþlem numarasý secim deðiþkenine atýp
		switch (secim)	//switch case yapýsýna yolluyoruz
		{
		case 1:
			system("cls");
			cout << setw(80) << "ATATÜRK ÜNÝVERSÝTESÝ\n" << setw(80) << "BÝLGÝSAYAR MÜHENDÝSLÝÐÝ\n" << setw(80) << "ERHAN BÝLGÝN\n";
			cout << "\t\t-----Firma Ekleme-----\n\tEn Fazla 5 Adet Þahýs Þirketi";
			cout << " ve \n\t5 Adet Sermaye Þirketi Ekleyebilirsiniz\n";
			cout << "\n\t1-)Þahýs Þirketi ";
			cout << "\n\t2-)Sermaye Þirketi: ";	//kullanýcýdan bir firma tipini seçmesini istiyoruz
			cout << "\n\tÝki Firmadan Birini Seçin: ";
			cin >> secim;
			if (secim == 1)
			{
				system("cls");
				if (sayac1 < 5)
				{
					cout << setw(80) << "ATATÜRK ÜNÝVERSÝTESÝ\n" << setw(80) << "BÝLGÝSAYAR MÜHENDÝSLÝÐÝ\n" << setw(80) << "ERHAN BÝLGÝN\n";
					cout << "\n\tFirma Adý :";
					cin >> fAd;
					cout << "\n\tFirma Adres Ýletiþim :";
					cin >> Adresiletisim;	//bu kýsýmda sayac 5 den kucuk olduðu sürece sahis firmasý eklemekte
					cout << "\n\tÞahýs Adý :";
					cin >> sahisAd;
					cout << "\n\tÞahýs Soyadý";
					cin >> sahisSoyad;
					cout << "\n\tTc no:";	
					cin >> Tc;				//sahissirketinin set fonksiyonuna yollandýktan sonra
					sahis.setSahisSirketi(sahisAd, sahisSoyad, Tc);	
					F.SahisSirketim(sahis, fAd, Adresiletisim);		//firma sýnýfý içindeki nesne dizisine sahis nesnesi atýlýr
					cout << "\n\tBaþarýlý bir Þekilde Firma EKlenmiþtir\n";
					cout << "\n\tDevam Etmek Ýçin Herhangi Bir Tuþa Basýn\n";
					system("pause");
				}
				else
				{
					cout << "\n\tDaha Fazla Þahýs Þirketi Giremezsiniz";
					cout << "\n\tDevam Etmek Ýçin Herhangi Bir Tuþa Basýn\n";
					system("pause");
				}
			}
			if (secim == 2)
			{
				system("cls");
				if (sayac2 >= 5 && sayac2 <= 9)
				{
					cout << setw(80) << "ATATÜRK ÜNÝVERSÝTESÝ\n" << setw(80) << "BÝLGÝSAYAR MÜHENDÝSLÝÐÝ\n" << setw(80) << "ERHAN BÝLGÝN\n";
					cout << "\n\tFirma Adý :";
					cin >> fAd;
					cout << "\n\tFirma Adres Ýletiþim :";
					cin >> Adresiletisim;
					cout << "\n\tSermaye Adý :";
					cin >> sermayeAdi;		//bu kýsýmda sayac 4 ile 10 arasýnda ise sermaye firmasý eklemekte
					cout << "\n\tÞirket Tipi";
					cin >> sirketTipi;
					cout << "\n\tVergi no:";
					cin >> vergiNumara;			//sermayesirketinin set fonksiyonuna yolladýktan sonra 
					sermaye.setSermayeSirketi(sermayeAdi, sirketTipi, vergiNumara);
					F.SermayeSirketim(sermaye, fAd, Adresiletisim);//firma sýnýfý içindeki nesne dizisine sermaye nesnesi eklenir
					cout << "\n\tBaþarýlý bir Þekilde Firma EKlenmiþtir\n";
					cout << "\n\tDevam Etmek Ýçin Herhangi Bir Tuþa Basýn\n";
					system("pause");
					sayac2++;
				}
				else
				{
					cout << "\n\tDaha Fazla Sermaye Þirketi Giremezsiniz";
					cout << "\n\tDevam Etmek Ýçin Herhangi Bir Tuþa Basýn\n";
					system("pause");
				}
			}
			break;
		case 2:
			system("cls");
			cout << setw(80) << "ATATÜRK ÜNÝVERSÝTESÝ\n" << setw(80) << "BÝLGÝSAYAR MÜHENDÝSLÝÐÝ\n" << setw(80) << "ERHAN BÝLGÝN\n";
			cout << "\n\t\t-----Firma Ýsim Güncelleme-----";
			cout << "\n\tFirma Ýsmi :";
			cin >> fAd;
			if (F.FirmaAdiKontrol(fAd))
			{
				cout << "\tYeni Firma Ýsmini Girin :";
				cin >> yeniFirma;	//alýnan firma adý ve yeni firma adý Firma sýnýfýndaki
				F.FirmaismiGuncelle(fAd, yeniFirma);	//firmaismiguncelle fonksiyonuna yollanýr
			}
			else
			{
				cout << "\n\tBoyle Bir Firma Bulunamadý\n";
				cout << "\n\tDevam Etmek Ýçin Herhangi Bir Tuþa Basýn\n";
			}
			system("pause");
			break;

		case 3:
			system("cls");
			cout << setw(80) << "ATATÜRK ÜNÝVERSÝTESÝ\n" << setw(80) << "BÝLGÝSAYAR MÜHENDÝSLÝÐÝ\n" << setw(80) << "ERHAN BÝLGÝN\n";
			cout << "\n\t\t-----Firmaya Ürün Ekleme-----";
			cout << "\n\tFirma Ýsmi :";
			cin >> fAd;
			if (F.FirmaAdiKontrol(fAd))
			{						//alýnan firma adý kontrol edildikten sonra
				cout << "\n\tÜrün Adi :";	//ürün ekleme iþlemi yapýlmaktadýr
				cin >> UrunAdi;
				cout << "\n\tÜrün Modeli :";
				cin >> Umodeli;
				cout << "\n\tÜrün Kodu :";
				cin >> Ukodu;
				cout << "\n\tÜrün Açýklamasý :";
				cin >> Uaciklama;
				cout << "\n\tPromosyon Bilgisi :";
				cin >> Upromosyon;
				cout << "\n\tStok Adeti :";
				cin >> Ustok;
				cout << "\n\tKategori Adi :";
				cin >> Ukategori;
				cout << "\n\tSatýþ Adeti :";
				cin >> Usatis;
				cout << "\n\tUrun fiyatý";
				cin >> Ufiyati;	//urun sýnýfý içinde seturun fonksiyonuna yollandýktan sonra
				U.setUrun(UrunAdi, Umodeli, Ukodu, Uaciklama, Upromosyon, Ustok, Ukategori, Usatis, Ufiyati);
				F.UrunEkle(U, fAd);//firma sýnýfý içinde nesne dizisine U nesnesi eklenir
				cout << "\n\tFirmaya Baþarýlý Bir Þekilde Urun Eklenmiþtir";
				cout << "\n\tDevam Etmek Ýçin Herhangi Bir Tuþa Basýn\n";
			}
			else
			{
				cout << "\n\tBoyle Bir Firma Bulunamadý\n";
				cout << "\n\tDevam Etmek Ýçin Herhangi Bir Tuþa Basýn\n";
			}
			system("pause");
			break;

		case 4:
			system("cls");
			cout << setw(80) << "ATATÜRK ÜNÝVERSÝTESÝ\n" << setw(80) << "BÝLGÝSAYAR MÜHENDÝSLÝÐÝ\n" << setw(80) << "ERHAN BÝLGÝN\n";
			cout << "\n\t\t-----Kampanya Ekleme-----";
			cout << "\n\tFirma Adý :";
			cin >> fAd;
			if (F.FirmaAdiKontrol(fAd))
			{	//firma Adý kontrol edildikten sonra ifin içine girerek
				cout << "\n\tKampyan Adý :";	//ilgili firmaya kampanya eklenir
				cin >> kampanyaAdi;
				cout << "\n\tKampanyalý Ürünleri Giriniz(limon123#kahve34) :";
				cin >> Ukampanya;
				cout << "\n\tKampanya Baslangic Tarihi(GGAAYY) :";
				cin >> KampanyaBaslangic;
				cout << "\n\tKampanya Bitis Tarihi(GGAAYY) :";
				cin >> KampanyaBitis;//kampanya sýnýfý içindeki set fonksiyonuna yollandýktan sonra
				Kmp.setKampanya(kampanyaAdi, Ukampanya, KampanyaBaslangic, KampanyaBitis);
				F.Kampanyaekle(Kmp, fAd);//firma sýnýfý içindeki nesne dizisinin içine Kmp nesnesi yollanýr
			}
			else
			{
				cout << "\n\tBoyle Bir Firma Bulunamadý\n";
				cout << "\n\tDevam Etmek Ýçin Herhangi Bir Tuþa Basýn\n";
			}
			system("pause");
			break;
		case 5:
			system("cls");
			cout << setw(80) << "ATATÜRK ÜNÝVERSÝTESÝ\n" << setw(80) << "BÝLGÝSAYAR MÜHENDÝSLÝÐÝ\n" << setw(80) << "ERHAN BÝLGÝN\n";
			cout << "\n\t\t-----Firma Ürünlerini Listele-----";
			cout << "\n\tFirma Adý :";
			cin >> fAd;
			if (F.FirmaAdiKontrol(fAd))
			{				//firma adý kontrol edildikten sonra alýnan firma adýna göre 
				F.UrunleriListele(fAd);		//firma sýnýfý içinde firmaurunlerini listelemek için 
			}								//fonksiyon çaðrýlýr
			else
			{
				cout << "\n\tBoyle Bir Firma Bulunamadý\n";
				cout << "\n\tDevam Etmek Ýçin Herhangi Bir Tuþa Basýn\n";
			}
			system("pause");
			break;
		case 6:
			system("cls");
			cout << setw(80) << "ATATÜRK ÜNÝVERSÝTESÝ\n" << setw(80) << "BÝLGÝSAYAR MÜHENDÝSLÝÐÝ\n" << setw(80) << "ERHAN BÝLGÝN\n";
			cout << "\n\t\t-----Ürün Satýþýný Yapan Firmalar-----";
			cout << "\n\tÜrün adý: ";
			cin >> UrunAdi;	//alýnan ürün adýna göre bu ürünün satýþýný yapan firmalarý listeler
			F.UrunSatisiYapanFirmalar(UrunAdi);
			system("pause");
			break;
		case 7:
			system("cls");
			cout << setw(80) << "ATATÜRK ÜNÝVERSÝTESÝ\n" << setw(80) << "BÝLGÝSAYAR MÜHENDÝSLÝÐÝ\n" << setw(80) << "ERHAN BÝLGÝN\n";
			cout << "\n\t\t-----En Ucuz Hangi Firmada-----";
			cout << "\n\tÜrün Adý :";
			cin >> UrunAdi;//alýnan ürün adýna göre hangi firmada daha ucuz olduðu kontrol edilir
			F.EnucuzHangiFirmada(UrunAdi);
			system("pause");
			break;
		case 8:
			system("cls");
			cout << setw(80) << "ATATÜRK ÜNÝVERSÝTESÝ\n" << setw(80) << "BÝLGÝSAYAR MÜHENDÝSLÝÐÝ\n" << setw(80) << "ERHAN BÝLGÝN\n";
			cout << "\n\t\t-----Kategoriye Göre Firma Bilgileri Listele-----";
			cout << "\n\tÜrün Kategorisi :";
			cin >> Ukategori;//alýnan kategori adýna göre ürün adý ve firma bilgileri listelenmektedir
			F.KategoriFirma(Ukategori);
			system("pause");
			break;
		case 9:
			system("cls");
			cout << setw(80) << "ATATÜRK ÜNÝVERSÝTESÝ\n" << setw(80) << "BÝLGÝSAYAR MÜHENDÝSLÝÐÝ\n" << setw(80) << "ERHAN BÝLGÝN\n";
			cout << "\n\t\t-----Promosyonlu Ürünleri Listele-----";
			F.PromosyonluUrunleriListele();//promosyonlu ürünleri listele fonksiyonu çaðrýlýr
			system("pause");
			break;
		case 10:
			system("cls");
			cout << setw(80) << "ATATÜRK ÜNÝVERSÝTESÝ\n" << setw(80) << "BÝLGÝSAYAR MÜHENDÝSLÝÐÝ\n" << setw(80) << "ERHAN BÝLGÝN\n";
			cout << "\n\t\t-----Kampanya Süresi Biten Ürünler-----";
			cout << "\n\tFirma Adý :";
			cin >> fAd;//alýnan firma adýna göre firmanýn kampanya süresi biten ürünleri listelenir
			if (F.FirmaAdiKontrol(fAd))
			{
				cout << "\n\tGuncel Tarih Giriniz (GGAAYY) Þeklinde:";
				cin >> GirilenTarih;
				cout << "\n\tKampanya Süresi Biten Urunler :";
				F.KampanyaSuresiBitenUrunler(fAd, GirilenTarih);
				cout << "\n";
			}
			else
			{
				cout << "\n\tBoyle Bir Firma Bulunamadý\n";
				cout << "\n\tDevam Etmek Ýçin Herhangi Bir Tuþa Basýn\n";
			}
			system("pause");
			break;
		case 11:
			system("cls");
			cout << setw(80) << "ATATÜRK ÜNÝVERSÝTESÝ\n" << setw(80) << "BÝLGÝSAYAR MÜHENDÝSLÝÐÝ\n" << setw(80) << "ERHAN BÝLGÝN\n";
			cout << "\n\t\t-----Firmanýn Devam Eden Kampanyali Urunleri-----";
			cout << "\n\tFirma Adý :";
			cin >> fAd;//alýnan firma adýna göre firmanýn kampanya süresi devam eden ürünleri listelenir
			if (F.FirmaAdiKontrol(fAd))
			{
				cout << "\n\tGuncel Tarih Giriniz (GGAAYY) Þeklinde:";
				cin >> GirilenTarih;
				cout << "\n\tFirmanýn Kampanylý Ürünleri: ";
				F.getKampanyaliUrunler(fAd, GirilenTarih);
			}
			else
			{
				cout << "\n\tBoyle Bir Firma Bulunamadý\n";
				cout << "\n\tDevam Etmek Ýçin Herhangi Bir Tuþa Basýn\n";
			}
			system("pause");
			break;
		case 12:
			system("cls");
			cout << setw(80) << "ATATÜRK ÜNÝVERSÝTESÝ\n" << setw(80) << "BÝLGÝSAYAR MÜHENDÝSLÝÐÝ\n" << setw(80) << "ERHAN BÝLGÝN\n";
			cout << "\t\tProgramdan Çýktýnýz\n";
			secim = -1;	//kullanýcý ana menude 12 ye basarsa programdan çýkar
			system("pause");
			break;
		default:
			system("cls");
			cout << setw(80) << "ATATÜRK ÜNÝVERSÝTESÝ\n" << setw(80) << "BÝLGÝSAYAR MÜHENDÝSLÝÐÝ\n" << setw(80) << "ERHAN BÝLGÝN\n";
			cout << "\tHatalý bir seçim yaptýnýz tekrar denemek için 0 a basýnýz\n";
			cout << "\tÇýkmak için -1 e basýnýz\n";//eðer [1-12] arasýndaki sayýlardan baþka bir 
			cin >> secim;						//sayýya basarasa tekrardan þeçim yapýlmasý için 
			break;								//veya programdan çýkmasý için iki seçenek sunar
		}
		system("cls");
	}
}