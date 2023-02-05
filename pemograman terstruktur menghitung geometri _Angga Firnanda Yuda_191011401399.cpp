#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	printf("====================================\n");
    printf("pemograman terstruktur menghitung geometri dengan if else\n");
    printf("\n");
    printf("====================================\n");
    printf("Nama : Angga Firnanda Yuda \n");
    printf("NIM  : 191011401399 \n");
    printf("====================================\n\n");
unsigned int pilihan;
cout << "MENU PILIHAN" << endl;
cout << "------------" << endl;
cout << "1. hitung luas lingkaran" << endl;
cout << "2. hitung luas persegi" << endl;
cout << "3. hitung luas segitiga" << endl;
cout << "4. exit" << endl;
cout << "------------" << endl;

while (pilihan>=0){
cout << "pilihan anda (1/2/3/4) : ";
cin >> pilihan;

if (pilihan== 1) {
cout << "-------------------------------------"<< endl;
cout << "Menghitung Luas Lingkaran" << endl;
float r;
cout << "Masukan jari-jari : ";
cin >> r;
float Ll = 3.14*r*r;
cout << "Luas Lingkaran : " << Ll << endl;
cout << "-------------------------------------"<< endl;
} else if (pilihan== 2){
cout << "-------------------------------------"<< endl;
cout << "Menghitung Luas Persegi" << endl;
float p;
cout << "Masukan Panjang : ";
cin >> p;
float l;
cout << "Masukan Lebar : ";
cin >> l;
float Lp = p*l;
cout << "Luas Persegi : " << Lp << endl;
cout << "-------------------------------------"<< endl;
} else if (pilihan== 3){
cout << "-------------------------------------"<< endl;
cout << "Menghitung Luas Segitiga" << endl;
float a;
cout << "Masukan Alas : ";
cin >> a;
float t;
cout << "Masukan Tinggi : ";
cin >> t;
float Ls = 0.5*a*t;
cout << "Luas Segitiga : " << Ls << endl;
cout << "-------------------------------------"<< endl;
} else if (pilihan==4) {
exit(4);
} else {
cout << "Kode Yang Anda Masukan Salah...!!!"<< endl;
}
}
getch();
}
