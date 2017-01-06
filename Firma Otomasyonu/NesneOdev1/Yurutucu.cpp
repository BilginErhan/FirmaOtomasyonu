#include <iostream>//cout cin kullan�m� i�in gereken k�t�phane
#include <iomanip>//setw fonksiyonu i�in gereken k�t�phane
#include "SahisSirketi.h"
#include "SermayeSirketi.h"
#include "Firma.h"//olu�turdu�umuz headerlar� yurutucumuze ekledik
#include "Urun.h"
#include "Kampanya.h"
using namespace std;
int main()
{
	SermayeSirketi sermaye;
	SahisSirketi sahis;
	Firma F;//headrdaki fonksiyonlara eri�mek i�in kullan�lan nesneler
	Urun U;
	Kampanya Kmp;
	setlocale(LC_ALL, "Turkish");//turkce karakter yazd�rma fonksiyonu
	int secim = 0, kacincifirma = -1;
	char yeniFirma[20];
	char fAd[20], Adresiletisim[20], sermayeAdi[20], sahisAd[20], sahisSoyad[20], Tc[11], sirketTipi[20], vergiNumara[16];
	char UrunAdi[20], Umodeli[20], Ukodu[10], Uaciklama[20], Ukategori[10];
	bool Upromosyon;								//fonksiyonlara yollayaca��m�z de�i�kenler
	int Usatis, Ustok, Ufiyati;
	char kampanyaAdi[20],Ukampanya[20], KampanyaBaslangic[6], KampanyaBitis[6],GirilenTarih[6];
	int sayac1 = 0, sayac2 = 5;
	while (secim != -1)//program�n devaml�l��� i�in bir d�ng� olu�turuldu
	{
		cout <<setw(80)<< "ATAT�RK �N�VERS�TES�\n"<<setw(80)<<"B�LG�SAYAR M�HEND�SL���\n"<<setw(80)<<"ERHAN B�LG�N\n";
		cout << setw(60)<<"----------Firma Sat�� Bilgi Sistemi----------\n";
		cout <<"\t1.Firma Ekleme\n\t2.Firma G�ncelleme\n\t3.�r�n Ekleme\n";
		cout << "\t4.Kampanya Ekleme\n\t5.Firma �r�nlerini Listele\n";
		cout << "\t6.�r�n Sat���n� Yapan Firmalar� Listele\n\t7.En Ucuz Hangi Firmada\n";
		cout << "\t8.Kategoriye G�re �r�nleri Listele\n";
		cout << "\t9.Promosyonlu �r�nleri Listele\n";	//kullan�c�ya se�enekler sunuldu
		cout << "\t10.Kampanya S�resi Biten �r�nleri Listele\n";
		cout << "\t11.Kampanya S�resi Devam Eden �r�nleri Lisetele\n";
		cout << "\t12.Programdan ��k\n";
		cout << "\n\tBir ��lem Numaras� Se�in :";
		cin >> secim;	//herhangi bir i�lem numaras� secim de�i�kenine at�p
		switch (secim)	//switch case yap�s�na yolluyoruz
		{
		case 1:
			system("cls");
			cout << setw(80) << "ATAT�RK �N�VERS�TES�\n" << setw(80) << "B�LG�SAYAR M�HEND�SL���\n" << setw(80) << "ERHAN B�LG�N\n";
			cout << "\t\t-----Firma Ekleme-----\n\tEn Fazla 5 Adet �ah�s �irketi";
			cout << " ve \n\t5 Adet Sermaye �irketi Ekleyebilirsiniz\n";
			cout << "\n\t1-)�ah�s �irketi ";
			cout << "\n\t2-)Sermaye �irketi: ";	//kullan�c�dan bir firma tipini se�mesini istiyoruz
			cout << "\n\t�ki Firmadan Birini Se�in: ";
			cin >> secim;
			if (secim == 1)
			{
				system("cls");
				if (sayac1 < 5)
				{
					cout << setw(80) << "ATAT�RK �N�VERS�TES�\n" << setw(80) << "B�LG�SAYAR M�HEND�SL���\n" << setw(80) << "ERHAN B�LG�N\n";
					cout << "\n\tFirma Ad� :";
					cin >> fAd;
					cout << "\n\tFirma Adres �leti�im :";
					cin >> Adresiletisim;	//bu k�s�mda sayac 5 den kucuk oldu�u s�rece sahis firmas� eklemekte
					cout << "\n\t�ah�s Ad� :";
					cin >> sahisAd;
					cout << "\n\t�ah�s Soyad�";
					cin >> sahisSoyad;
					cout << "\n\tTc no:";	
					cin >> Tc;				//sahissirketinin set fonksiyonuna yolland�ktan sonra
					sahis.setSahisSirketi(sahisAd, sahisSoyad, Tc);	
					F.SahisSirketim(sahis, fAd, Adresiletisim);		//firma s�n�f� i�indeki nesne dizisine sahis nesnesi at�l�r
					cout << "\n\tBa�ar�l� bir �ekilde Firma EKlenmi�tir\n";
					cout << "\n\tDevam Etmek ��in Herhangi Bir Tu�a Bas�n\n";
					system("pause");
				}
				else
				{
					cout << "\n\tDaha Fazla �ah�s �irketi Giremezsiniz";
					cout << "\n\tDevam Etmek ��in Herhangi Bir Tu�a Bas�n\n";
					system("pause");
				}
			}
			if (secim == 2)
			{
				system("cls");
				if (sayac2 >= 5 && sayac2 <= 9)
				{
					cout << setw(80) << "ATAT�RK �N�VERS�TES�\n" << setw(80) << "B�LG�SAYAR M�HEND�SL���\n" << setw(80) << "ERHAN B�LG�N\n";
					cout << "\n\tFirma Ad� :";
					cin >> fAd;
					cout << "\n\tFirma Adres �leti�im :";
					cin >> Adresiletisim;
					cout << "\n\tSermaye Ad� :";
					cin >> sermayeAdi;		//bu k�s�mda sayac 4 ile 10 aras�nda ise sermaye firmas� eklemekte
					cout << "\n\t�irket Tipi";
					cin >> sirketTipi;
					cout << "\n\tVergi no:";
					cin >> vergiNumara;			//sermayesirketinin set fonksiyonuna yollad�ktan sonra 
					sermaye.setSermayeSirketi(sermayeAdi, sirketTipi, vergiNumara);
					F.SermayeSirketim(sermaye, fAd, Adresiletisim);//firma s�n�f� i�indeki nesne dizisine sermaye nesnesi eklenir
					cout << "\n\tBa�ar�l� bir �ekilde Firma EKlenmi�tir\n";
					cout << "\n\tDevam Etmek ��in Herhangi Bir Tu�a Bas�n\n";
					system("pause");
					sayac2++;
				}
				else
				{
					cout << "\n\tDaha Fazla Sermaye �irketi Giremezsiniz";
					cout << "\n\tDevam Etmek ��in Herhangi Bir Tu�a Bas�n\n";
					system("pause");
				}
			}
			break;
		case 2:
			system("cls");
			cout << setw(80) << "ATAT�RK �N�VERS�TES�\n" << setw(80) << "B�LG�SAYAR M�HEND�SL���\n" << setw(80) << "ERHAN B�LG�N\n";
			cout << "\n\t\t-----Firma �sim G�ncelleme-----";
			cout << "\n\tFirma �smi :";
			cin >> fAd;
			if (F.FirmaAdiKontrol(fAd))
			{
				cout << "\tYeni Firma �smini Girin :";
				cin >> yeniFirma;	//al�nan firma ad� ve yeni firma ad� Firma s�n�f�ndaki
				F.FirmaismiGuncelle(fAd, yeniFirma);	//firmaismiguncelle fonksiyonuna yollan�r
			}
			else
			{
				cout << "\n\tBoyle Bir Firma Bulunamad�\n";
				cout << "\n\tDevam Etmek ��in Herhangi Bir Tu�a Bas�n\n";
			}
			system("pause");
			break;

		case 3:
			system("cls");
			cout << setw(80) << "ATAT�RK �N�VERS�TES�\n" << setw(80) << "B�LG�SAYAR M�HEND�SL���\n" << setw(80) << "ERHAN B�LG�N\n";
			cout << "\n\t\t-----Firmaya �r�n Ekleme-----";
			cout << "\n\tFirma �smi :";
			cin >> fAd;
			if (F.FirmaAdiKontrol(fAd))
			{						//al�nan firma ad� kontrol edildikten sonra
				cout << "\n\t�r�n Adi :";	//�r�n ekleme i�lemi yap�lmaktad�r
				cin >> UrunAdi;
				cout << "\n\t�r�n Modeli :";
				cin >> Umodeli;
				cout << "\n\t�r�n Kodu :";
				cin >> Ukodu;
				cout << "\n\t�r�n A��klamas� :";
				cin >> Uaciklama;
				cout << "\n\tPromosyon Bilgisi :";
				cin >> Upromosyon;
				cout << "\n\tStok Adeti :";
				cin >> Ustok;
				cout << "\n\tKategori Adi :";
				cin >> Ukategori;
				cout << "\n\tSat�� Adeti :";
				cin >> Usatis;
				cout << "\n\tUrun fiyat�";
				cin >> Ufiyati;	//urun s�n�f� i�inde seturun fonksiyonuna yolland�ktan sonra
				U.setUrun(UrunAdi, Umodeli, Ukodu, Uaciklama, Upromosyon, Ustok, Ukategori, Usatis, Ufiyati);
				F.UrunEkle(U, fAd);//firma s�n�f� i�inde nesne dizisine U nesnesi eklenir
				cout << "\n\tFirmaya Ba�ar�l� Bir �ekilde Urun Eklenmi�tir";
				cout << "\n\tDevam Etmek ��in Herhangi Bir Tu�a Bas�n\n";
			}
			else
			{
				cout << "\n\tBoyle Bir Firma Bulunamad�\n";
				cout << "\n\tDevam Etmek ��in Herhangi Bir Tu�a Bas�n\n";
			}
			system("pause");
			break;

		case 4:
			system("cls");
			cout << setw(80) << "ATAT�RK �N�VERS�TES�\n" << setw(80) << "B�LG�SAYAR M�HEND�SL���\n" << setw(80) << "ERHAN B�LG�N\n";
			cout << "\n\t\t-----Kampanya Ekleme-----";
			cout << "\n\tFirma Ad� :";
			cin >> fAd;
			if (F.FirmaAdiKontrol(fAd))
			{	//firma Ad� kontrol edildikten sonra ifin i�ine girerek
				cout << "\n\tKampyan Ad� :";	//ilgili firmaya kampanya eklenir
				cin >> kampanyaAdi;
				cout << "\n\tKampanyal� �r�nleri Giriniz(limon123#kahve34) :";
				cin >> Ukampanya;
				cout << "\n\tKampanya Baslangic Tarihi(GGAAYY) :";
				cin >> KampanyaBaslangic;
				cout << "\n\tKampanya Bitis Tarihi(GGAAYY) :";
				cin >> KampanyaBitis;//kampanya s�n�f� i�indeki set fonksiyonuna yolland�ktan sonra
				Kmp.setKampanya(kampanyaAdi, Ukampanya, KampanyaBaslangic, KampanyaBitis);
				F.Kampanyaekle(Kmp, fAd);//firma s�n�f� i�indeki nesne dizisinin i�ine Kmp nesnesi yollan�r
			}
			else
			{
				cout << "\n\tBoyle Bir Firma Bulunamad�\n";
				cout << "\n\tDevam Etmek ��in Herhangi Bir Tu�a Bas�n\n";
			}
			system("pause");
			break;
		case 5:
			system("cls");
			cout << setw(80) << "ATAT�RK �N�VERS�TES�\n" << setw(80) << "B�LG�SAYAR M�HEND�SL���\n" << setw(80) << "ERHAN B�LG�N\n";
			cout << "\n\t\t-----Firma �r�nlerini Listele-----";
			cout << "\n\tFirma Ad� :";
			cin >> fAd;
			if (F.FirmaAdiKontrol(fAd))
			{				//firma ad� kontrol edildikten sonra al�nan firma ad�na g�re 
				F.UrunleriListele(fAd);		//firma s�n�f� i�inde firmaurunlerini listelemek i�in 
			}								//fonksiyon �a�r�l�r
			else
			{
				cout << "\n\tBoyle Bir Firma Bulunamad�\n";
				cout << "\n\tDevam Etmek ��in Herhangi Bir Tu�a Bas�n\n";
			}
			system("pause");
			break;
		case 6:
			system("cls");
			cout << setw(80) << "ATAT�RK �N�VERS�TES�\n" << setw(80) << "B�LG�SAYAR M�HEND�SL���\n" << setw(80) << "ERHAN B�LG�N\n";
			cout << "\n\t\t-----�r�n Sat���n� Yapan Firmalar-----";
			cout << "\n\t�r�n ad�: ";
			cin >> UrunAdi;	//al�nan �r�n ad�na g�re bu �r�n�n sat���n� yapan firmalar� listeler
			F.UrunSatisiYapanFirmalar(UrunAdi);
			system("pause");
			break;
		case 7:
			system("cls");
			cout << setw(80) << "ATAT�RK �N�VERS�TES�\n" << setw(80) << "B�LG�SAYAR M�HEND�SL���\n" << setw(80) << "ERHAN B�LG�N\n";
			cout << "\n\t\t-----En Ucuz Hangi Firmada-----";
			cout << "\n\t�r�n Ad� :";
			cin >> UrunAdi;//al�nan �r�n ad�na g�re hangi firmada daha ucuz oldu�u kontrol edilir
			F.EnucuzHangiFirmada(UrunAdi);
			system("pause");
			break;
		case 8:
			system("cls");
			cout << setw(80) << "ATAT�RK �N�VERS�TES�\n" << setw(80) << "B�LG�SAYAR M�HEND�SL���\n" << setw(80) << "ERHAN B�LG�N\n";
			cout << "\n\t\t-----Kategoriye G�re Firma Bilgileri Listele-----";
			cout << "\n\t�r�n Kategorisi :";
			cin >> Ukategori;//al�nan kategori ad�na g�re �r�n ad� ve firma bilgileri listelenmektedir
			F.KategoriFirma(Ukategori);
			system("pause");
			break;
		case 9:
			system("cls");
			cout << setw(80) << "ATAT�RK �N�VERS�TES�\n" << setw(80) << "B�LG�SAYAR M�HEND�SL���\n" << setw(80) << "ERHAN B�LG�N\n";
			cout << "\n\t\t-----Promosyonlu �r�nleri Listele-----";
			F.PromosyonluUrunleriListele();//promosyonlu �r�nleri listele fonksiyonu �a�r�l�r
			system("pause");
			break;
		case 10:
			system("cls");
			cout << setw(80) << "ATAT�RK �N�VERS�TES�\n" << setw(80) << "B�LG�SAYAR M�HEND�SL���\n" << setw(80) << "ERHAN B�LG�N\n";
			cout << "\n\t\t-----Kampanya S�resi Biten �r�nler-----";
			cout << "\n\tFirma Ad� :";
			cin >> fAd;//al�nan firma ad�na g�re firman�n kampanya s�resi biten �r�nleri listelenir
			if (F.FirmaAdiKontrol(fAd))
			{
				cout << "\n\tGuncel Tarih Giriniz (GGAAYY) �eklinde:";
				cin >> GirilenTarih;
				cout << "\n\tKampanya S�resi Biten Urunler :";
				F.KampanyaSuresiBitenUrunler(fAd, GirilenTarih);
				cout << "\n";
			}
			else
			{
				cout << "\n\tBoyle Bir Firma Bulunamad�\n";
				cout << "\n\tDevam Etmek ��in Herhangi Bir Tu�a Bas�n\n";
			}
			system("pause");
			break;
		case 11:
			system("cls");
			cout << setw(80) << "ATAT�RK �N�VERS�TES�\n" << setw(80) << "B�LG�SAYAR M�HEND�SL���\n" << setw(80) << "ERHAN B�LG�N\n";
			cout << "\n\t\t-----Firman�n Devam Eden Kampanyali Urunleri-----";
			cout << "\n\tFirma Ad� :";
			cin >> fAd;//al�nan firma ad�na g�re firman�n kampanya s�resi devam eden �r�nleri listelenir
			if (F.FirmaAdiKontrol(fAd))
			{
				cout << "\n\tGuncel Tarih Giriniz (GGAAYY) �eklinde:";
				cin >> GirilenTarih;
				cout << "\n\tFirman�n Kampanyl� �r�nleri: ";
				F.getKampanyaliUrunler(fAd, GirilenTarih);
			}
			else
			{
				cout << "\n\tBoyle Bir Firma Bulunamad�\n";
				cout << "\n\tDevam Etmek ��in Herhangi Bir Tu�a Bas�n\n";
			}
			system("pause");
			break;
		case 12:
			system("cls");
			cout << setw(80) << "ATAT�RK �N�VERS�TES�\n" << setw(80) << "B�LG�SAYAR M�HEND�SL���\n" << setw(80) << "ERHAN B�LG�N\n";
			cout << "\t\tProgramdan ��kt�n�z\n";
			secim = -1;	//kullan�c� ana menude 12 ye basarsa programdan ��kar
			system("pause");
			break;
		default:
			system("cls");
			cout << setw(80) << "ATAT�RK �N�VERS�TES�\n" << setw(80) << "B�LG�SAYAR M�HEND�SL���\n" << setw(80) << "ERHAN B�LG�N\n";
			cout << "\tHatal� bir se�im yapt�n�z tekrar denemek i�in 0 a bas�n�z\n";
			cout << "\t��kmak i�in -1 e bas�n�z\n";//e�er [1-12] aras�ndaki say�lardan ba�ka bir 
			cin >> secim;						//say�ya basarasa tekrardan �e�im yap�lmas� i�in 
			break;								//veya programdan ��kmas� i�in iki se�enek sunar
		}
		system("cls");
	}
}