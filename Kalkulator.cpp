//kodingan-kalkulator-Oryza-Sativa
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <cmath>

using namespace std;
long double perkalian();
void pembagian();
void penjumlahan();
void pengurangan();
long double perpangkatan();
void home();
char nama[50];
void konversi();
void loading();
void exit();

main()
{
system ("color 0E");
int pil;
char ulang;
cout <<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t Masukkan Nama Anda : ";
cin.getline (nama,50);
system("cls");
loading();
system ("cls");

home();
while (pil>=0) {

cout <<"\t\t\t\t      Masukkan pilihan anda (1/2/3/4/5/6/7) : "; cin >>pil;
cout <<"\t\t\t\t      ========================================="<<endl;

switch (pil)
{ case 1 : penjumlahan(); break;
  case 2 : pengurangan(); break;
  case 3 : perkalian(); break;
  case 4 : pembagian(); break;
  case 5 : perpangkatan(); break;
  case 6 : konversi();break;
  case 7 : exit();

 default :

 cout <<"\n\t\t\t\t\t      Pilihan anda salah !!! "; }

 cout <<"\n\n\t\t\t\t    Ingin Hitung Lagi (ketik 1 karakter bebas)  : ";
 cin >>ulang;
 system("cls");
 home();



}  }




void penjumlahan()
{
system ("cls");
int variabel;
double nilai_a, nilai_b, nilai_c, nilai_d, nilai_e, hasil;
cout <<"\t\t\t\t\t        |=================|\n";
cout <<"\t\t\t\t\t        |<> PENJUMLAHAN <>|\n";
cout <<"\t\t\t\t\t        |=================|\n";
cout <<"\t\t\t\t\t  Input Jumlah Variabel, Max (5) = ";cin >>variabel;
switch (variabel)
{
case 2 :
cout <<"\t\t\t\t\t            2 VARIABEL" << endl;
cout <<"\t\t\t\t\t        Masukkan nilai a : "; cin>>nilai_a;
cout <<"\t\t\t\t\t        Masukkan nilai b : "; cin>>nilai_b;
hasil = nilai_a + nilai_b;
cout <<"\t\t\t\t\t      ========================="<<endl;
cout <<"\t\t\t\t\t          Hasil "<<nilai_a<<" + "<<nilai_b<<" = "<<hasil<<endl<<endl;
break;

case 3 :
cout <<"\t\t\t\t\t            3 VARIABEL" << endl;
cout <<"\t\t\t\t\t        Masukkan nilai a : "; cin >>nilai_a;
cout <<"\t\t\t\t\t        Masukkan nilai b : "; cin >>nilai_b;
cout <<"\t\t\t\t\t        Masukkan nilai c : "; cin >>nilai_c;
cout <<"\t\t\t\t\t      ========================="<<endl;
hasil = nilai_a + nilai_b + nilai_c;
cout <<"\t\t\t\t\t         Hasil "<<nilai_a<<" + "<<nilai_b<<" + "<<nilai_c<< " = "<<hasil<<endl<<endl;
break;

case 4 :
cout <<"\t\t\t\t\t            4 VARIABEL" << endl;
cout <<"\t\t\t\t\t        Masukkan nilai a : "; cin >>nilai_a;
cout <<"\t\t\t\t\t        Masukkan nilai b : "; cin >>nilai_b;
cout <<"\t\t\t\t\t        Masukkan nilai c : "; cin >>nilai_c;
cout <<"\t\t\t\t\t        Masukkan nilai d : "; cin >>nilai_d;
cout <<"\t\t\t\t\t      ========================="<<endl;
hasil = nilai_a + nilai_b + nilai_c + nilai_d;
cout <<"\t\t\t\t\t       Hasil "<<nilai_a<<" + "<<nilai_b<<" + "<<nilai_c<< " + "<<nilai_d<<" = " <<hasil<<endl<<endl;
break;

case 5 :
cout <<"\t\t\t\t\t            5 VARIABEL" << endl;
cout <<"\t\t\t\t\t        Masukkan nilai a : "; cin >>nilai_a;
cout <<"\t\t\t\t\t        Masukkan nilai b : "; cin >>nilai_b;
cout <<"\t\t\t\t\t        Masukkan nilai c : "; cin >>nilai_c;
cout <<"\t\t\t\t\t        Masukkan nilai d : "; cin >>nilai_d;
cout <<"\t\t\t\t\t        Masukkan nilai e : "; cin >>nilai_e;
cout <<"\t\t\t\t\t      ========================="<<endl;
hasil = nilai_a + nilai_b + nilai_c + nilai_d + nilai_e;
cout <<"\t\t\t\t\t     Hasil "<<nilai_a<<" + "<<nilai_b<<" + "<<nilai_c<< " + "<<nilai_d<< " + " <<nilai_e<<" = " <<hasil<<endl<<endl;
break;
default :
cout <<"\n\t\t\t\t\t ERROR!! - Isilah Variabel dari 2 s/d 5";
}
}

void pengurangan()
{
system ("cls");
int variabel;
double nilai_a, nilai_b, nilai_c, nilai_d, nilai_e, hasil;
cout <<"\t\t\t\t\t        |=================|\n";
cout <<"\t\t\t\t\t        |<> PENGURANGAN <>|\n";
cout <<"\t\t\t\t\t        |=================|\n";
cout <<"\t\t\t\t\t  Input Jumlah Variabel, Max (5) = ";cin >>variabel;
switch (variabel)
{
case 2 :
cout <<"\t\t\t\t\t            2 VARIABEL" << endl;
cout <<"\t\t\t\t\t        Masukkan nilai a : "; cin>>nilai_a;
cout <<"\t\t\t\t\t        Masukkan nilai b : "; cin>>nilai_b;
cout <<"\t\t\t\t\t      ========================="<<endl;
hasil = nilai_a - nilai_b;
cout <<"\t\t\t\t\t           Hasil "<<nilai_a<<" - "<<nilai_b<<" = "<<hasil<<endl<<endl;
break;

case 3 :
cout <<"\t\t\t\t\t            3 VARIABEL" << endl;
cout <<"\t\t\t\t\t        Masukkan nilai a : "; cin >>nilai_a;
cout <<"\t\t\t\t\t        Masukkan nilai b : "; cin >>nilai_b;
cout <<"\t\t\t\t\t        Masukkan nilai c : "; cin >>nilai_c;
cout <<"\t\t\t\t\t      ========================="<<endl;
hasil = nilai_a - nilai_b - nilai_c;
cout <<"\t\t\t\t\t         Hasil "<<nilai_a<<" - "<<nilai_b<<" - "<<nilai_c<< " = "<<hasil<<endl<<endl;
break;

case 4 :
cout <<"\t\t\t\t\t            4 VARIABEL" << endl;
cout <<"\t\t\t\t\t        Masukkan nilai a : "; cin >>nilai_a;
cout <<"\t\t\t\t\t        Masukkan nilai b : "; cin >>nilai_b;
cout <<"\t\t\t\t\t        Masukkan nilai c : "; cin >>nilai_c;
cout <<"\t\t\t\t\t        Masukkan nilai d : "; cin >>nilai_d;
cout <<"\t\t\t\t\t      ========================="<<endl;
hasil = nilai_a - nilai_b - nilai_c - nilai_d;
cout <<"\t\t\t\t\t       Hasil "<<nilai_a<<" - "<<nilai_b<<" - "<<nilai_c<< " - "<<nilai_d<<" = " <<hasil<<endl<<endl;
break;

case 5 :
cout <<"\t\t\t\t\t            5 VARIABEL" << endl;
cout <<"\t\t\t\t\t        Masukkan nilai a : "; cin >>nilai_a;
cout <<"\t\t\t\t\t        Masukkan nilai b : "; cin >>nilai_b;
cout <<"\t\t\t\t\t        Masukkan nilai c : "; cin >>nilai_c;
cout <<"\t\t\t\t\t        Masukkan nilai d : "; cin >>nilai_d;
cout <<"\t\t\t\t\t        Masukkan nilai e : "; cin >>nilai_e;
cout <<"\t\t\t\t\t      ========================="<<endl;
hasil = nilai_a - nilai_b - nilai_c - nilai_d - nilai_e;
cout <<"\t\t\t\t\t    Hasil "<<nilai_a<<" - "<<nilai_b<<" - "<<nilai_c<< " - "<<nilai_d<< " - " <<nilai_e<<" = " <<hasil<<endl<<endl;
break;
default :
cout <<"\n\t\t\t\t\t ERROR!! - Isilah Variabel dari 2 s/d 5";}
}

long double perkalian()
{
system ("cls");
double nilai_x,nilai_y,hasil;
cout <<"\t\t\t\t\t          |===============|\n";
cout <<"\t\t\t\t\t          |<> PERKALIAN <>|\n";
cout <<"\t\t\t\t\t          |===============|\n";
cout <<"\t\t\t\t\t         Masukkan nilai x : "; cin>>nilai_x;
cout <<"\t\t\t\t\t         Masukkan nilai y : "; cin>>nilai_y;
cout <<"\t\t\t\t\t       ========================="<<endl;
hasil = nilai_x * nilai_y;
cout<<"\t\t\t\t\t           Hasil "<<nilai_x<<" x "<<nilai_y<<" = "<<hasil<<endl<<endl;    }
void pembagian()
{
system ("cls");
double nilai_x,nilai_y,hasil;
cout <<"\t\t\t\t\t          |===============|\n";
cout <<"\t\t\t\t\t          |<> PEMBAGIAN <>|\n";
cout <<"\t\t\t\t\t          |===============|\n";
cout <<"\t\t\t\t\t         Masukkan nilai x : "; cin>>nilai_x;
cout <<"\t\t\t\t\t         Masukkan nilai y : "; cin>>nilai_y;
cout <<"\t\t\t\t\t       ========================="<<endl;
hasil = nilai_x / nilai_y;
cout<<"\t\t\t\t\t          Hasil "<<nilai_x<<" : "<<nilai_y<<" = "<<hasil<<endl<<endl;    }

void loading()
{

 system("color 0");
 cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tLOADING...Please Wait\n\n";
 char a=177, b=219;
 cout<<"\t\t\t\t\t\t";
 for (int i=0;i<=20;i++)
 cout<<a;
 cout<<"\r";
 cout<<"\t\t\t\t\t\t";
 for (int i=0;i<=20;i++)
 {
  cout<<b;
  for (int j=0;j<=1e8;j++);
 }
 system ("cls");
 cout <<"\n\n\t\t\t\t               SELAMAT DATANG "<<strupr (nama)<<endl;
 cout <<"\t\t\t\t                         DI                         " <<endl;
 cout <<"\t\t\t\t    |=========================================|"<<endl;
 cout <<"\t\t\t\t    | <> KALKULATOR SEDERHANA ORYZA SATIVA <> |\n";
 cout <<"\t\t\t\t    |=========================================| \n";
 cout <<"\t\t\t\t          Tekan ENTER untuk melanjutkan..."<<endl;

 getch();}

long double perpangkatan()
{
system ("cls");
long double nilai_x;
long double nilai_y;
long double hasil;
cout <<"\t\t\t\t\t        |==================|\n";
cout <<"\t\t\t\t\t        |<> PERPANGKATAN <>|\n";
cout <<"\t\t\t\t\t        |==================|\n";
cout <<"\t\t\t\t\t      Masukkan nilai koefisien : "; cin>>nilai_x;
cout <<"\t\t\t\t\t      Masukkan nilai eksponen  : "; cin>>nilai_y;
cout <<"\t\t\t\t\t   ================================="<<endl;
hasil= pow (nilai_x,nilai_y);
cout<<"\t\t\t\t\t      Hasil "<<nilai_x<<" pangkat "<<nilai_y<<" = "<<hasil<<endl<<endl;    }

void home() {
cout <<"\t\t\t\t    |=========================================|"<<endl;
cout <<"\t\t\t\t    | <> KALKULATOR SEDERHANA ORYZA SATIVA <> |\n";
cout <<"\t\t\t\t    |=========================================| \n";
cout <<"\t\t\t\t\t\t Menu Pilihan Operasi : \n";
cout <<"\t\t\t\t\t\t 1. Penjumlahan \n";
cout <<"\t\t\t\t\t\t 2. Pengurangan \n";
cout <<"\t\t\t\t\t\t 3. Perkalian  \n";
cout <<"\t\t\t\t\t\t 4. Pembagian \n";
cout <<"\t\t\t\t\t\t 5. Perpangkatan \n";
cout <<"\t\t\t\t\t\t 6. Konversi \n";
cout <<"\t\t\t\t\t\t 7. Exit\n"; }

void konversi ()
{
system ("cls");
double nilai ;
cout <<"\t\t\t\t\t            |==============|\n";
cout <<"\t\t\t\t\t            |<> KONVERSI <>|\n";
cout <<"\t\t\t\t\t            |==============|\n";
cout <<"\t\t\t\t\t        Masukkan Nilai bilangan = " ;cin >>nilai;
cout <<"\t\t\t\t\t       ==========================="<<endl;
cout <<"\t\t\t\t\t         Konversi ke Desimal = " << dec << nilai <<endl;
cout <<"\t\t\t\t\t         Konversi ke Oktal = " << oct << nilai <<endl;
cout <<"\t\t\t\t\t         Konversi ke Heksadesimal = " << hex << nilai <<endl;
}

void exit() {
system ("cls");
cout <<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t      KAMI UCAPKAN TERIMAKASIH";
cout <<"\n\t\t\t\t\t    SEMOGA BERMANFAAT UNTUK ANDA";
cout <<"\n\t\t\t\t\t HORMAT KAMI ORYZA SATIVA KALKULATOR";
getch();
exit(0);
 }


