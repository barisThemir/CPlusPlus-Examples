// Basic BankATM Console App (First Try with cpp)

#include <iostream>
using namespace std;

int main()
{
	float trueTcNo = 12345;
	int truePsw = 12345;
	float tcNo, psw;
	float bakiye = 100;
	float islemNo, yatirilanTutar,yatirilanToplam, cekilenTutar,cekilenToplam;
	string yardimNot = "";

	cout << "TC Kimlik No: ";
	cin >> tcNo;


	if (tcNo == trueTcNo) {
		cout << "Sifre Giriniz: ";
		cin >> psw;
		if (psw == truePsw)
		{
			cout << "\nYapmak Istediginiz Islemi Seciniz\n" << endl;

			cout << "1- Para Yatirma\n";
			cout << "2- Para Cekme\n";
			cout << "3- Yardim Cagirma\n";
			cout << "4- Cikis Yap\n";

			cin >> islemNo;

			if (islemNo == 1) {

			cout << "Yatirmak Istediginiz Tutari Giriniz: ";
			cin >> yatirilanTutar;
			yatirilanToplam = bakiye + yatirilanTutar;
			cout << "Hesabiniza " << yatirilanTutar << " TL yatirildi" << endl << endl;
			cout << "Guncel Bakiyeniz " << yatirilanToplam << " TL Olmustur" << endl;

			}

			else if (islemNo == 2) {
			cout << "Bakiyeniz" << bakiye << "TL dir\n";
			cout << "Cekmek istediginiz tutari giriniz: ";
			cin >> cekilenTutar;
			
			if (bakiye  >= cekilenTutar) {
				cekilenToplam = bakiye - cekilenTutar;
				cout << "\nCekilen Bakiyeden Kalan Tutar " << cekilenToplam;
			}
			else {
				cekilenToplam = cekilenTutar - bakiye;
				cout << "Yetersiz Bakiye" << cekilenToplam << " TL eksiginiz var";
			}
				
			
			}

			else if (islemNo == 3) {
			cout << "Lutfen Yardim Notunuzu Birakin Biz Sizi Arayacagiz: \n";
			cin >> yardimNot;
			cout << "Notunuz icin tesekkurler biz size donus saglayacagiz";
			}
			


		}
		else {
			cout << "Çıkış Yapılıyor";
		}

	}
	else {
		cout << "Hatali TC Kimlik No Girdiniz, Tekrar deneyiniz";
	}
}
