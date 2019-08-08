// Basit Hesap Makinesi Yapımı
//Simple calculator
#include "pch.h"
#include <iostream>
#include <locale.h>
#include <string.h>
using namespace std;
int fonk(char q,int i,int j) {
	int k;
	switch (q) {
	case ('S'):
		k = i + j;
		cout << "Toplam sonucu: " << k;
		break;
	case ('D'):
		k = i - j;
		cout << "Fark sonucu: " << k;
		break;
	case ('P'):
		k = i * j;
		cout << "Çarpım sonucu: " << k;
		break;
	case('C'):
		if (i > j) {
			k = i / j;
			cout << "Bölme sonucu: " << k;
		}
		else {
			k = (float)i / j;
			cout << "Bölme sonucu: " << k;
		}			
		break;
	}
	if (q != 'S' || 'D' || 'P' || 'C') {
		cout << "Yanlış giriş yaptınız.";
		cout << "\n";
	}
	return 0;
}
int main() {
	setlocale(LC_ALL, "Turkish");
	int q,w;
	char t,e;
	cout << "İşlem Yapmak istediğiniz Sayıları Giriniz: ";
	cout << "\n(Maksimum 2 adet sayi girebilirsiniz.)\n";
	cin >> q;	cout << "\n";
	cin >> w;	cout << "\n";
	cout << "Yapmak istediğiniz işlemi seçiniz:\n ";
	cout << "Toplama işlemi için (S) tuşuna:\n ";
	cout << "Çıkarma işlemi için (D) tuşuna:\n ";
	cout << "Çarpma işlemi için (P) tuşuna:\n ";
	cout << "Bölme işlemi için (C) tuşuna:\n ";
	cin >> t;
	fonk(t, q, w);
}
//Acıkla
