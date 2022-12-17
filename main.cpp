#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int jumlah = 0, skalar, jmlBaris, jmlKolom, jmlBaris2, jmlKolom2, matriks1[5][5], matriks2[5][5], transpose[5][5], hasil[5][5];
    //untuk memasukan jml baris dan kolom

    cout << "================================"<<endl;
    cout << "PROGRAM OPERASI MATRIKS ELECIA"<<endl;
    cout << "================================"<<endl;
    cout << "Masukan jumlah baris matriks A : ";
    cin >> jmlBaris;
    cout << "Masukan jumlah kolom matriks A : ";
    cin >> jmlKolom;
    cout << endl;
    cout << "Masukan jumlah baris matriks B : ";
    cin >> jmlBaris2;
    cout << "Masukan jumlah kolom matriks B : ";
    cin >> jmlKolom2;


    cout <<endl;
    cout << "INPUT ELEMEN MATRIKS A"<<endl;
    for (int i = 1; i <= jmlBaris; i++) {
        for (int j = 1; j <= jmlKolom; j++) {
            cout << "Masukkan Angka dari Baris ke " << i << " Kolom ke " << j << " = ";
            cin >> matriks1[i][j];
        }
    }
    cout << endl;

        //Menampilkan bentuk matriks a
    cout << "Matriks A = \n";
    for (int i = 1; i <= jmlBaris; i++) {
        for (int j = 1; j <= jmlKolom; j++) {
            cout << matriks1[i][j]<< " " ;
        }
        cout << endl;
    }
    cout << endl;

    cout << "INPUT ELEMEN MATRIKS B"<<endl;
    for (int i = 1; i <= jmlBaris2; i++) {
        for (int j = 1; j <= jmlKolom2; j++) {
            cout << "Masukkan Angka dari Baris ke " << i << " Kolom ke " << j << " = ";
            cin >> matriks2[i][j];
        }
    }
    cout << endl;

        //Menampilkan bentuk matriks a
    cout << "Matriks B = \n";
    for (int i = 1; i <= jmlBaris2; i++) {
        for (int j = 1; j <= jmlKolom2; j++) {
            cout << matriks2[i][j]<< " " ;
        }
        cout << endl;
    }
    cout << endl;

    //penjumlahan
    cout << endl;
    cout << "================================"<<endl;
    cout << "Hasil Penjumlahan kedua matriks : " << endl;
    if (jmlBaris==jmlBaris2 && jmlKolom==jmlKolom2) {
        for (int i = 1; i <= jmlBaris; i++)
        {
            for (int j = 1; j <= jmlKolom; j++)
            {
                hasil[i][j] = matriks1[i][j] + matriks2[i][j];
                cout << hasil[i][j] << " " ;
            }
            cout << endl;
        }
    }
    else {
        cout << "Maaf, Penjumlahan beda ordo tidak bisa" << endl;
    }

    getch();



    //pengurangan
    cout << endl;
    cout << "================================"<<endl;
    cout << "Hasil Pengurangan matriks A oleh matriks B : " << endl;
    if (jmlBaris==jmlBaris2 && jmlKolom==jmlKolom2) {
        for (int i = 1; i <= jmlBaris; i++)
        {
            for (int j = 1; j <= jmlKolom; j++)
            {
                hasil[i][j] = matriks1[i][j] - matriks2[i][j];
                cout << hasil[i][j] << " " ;
            }
            cout << endl;
        }
    }
    else {
        cout << "Maaf, Pengurangan beda ordo tidak bisa" << endl;
    }

    getch();
    //pengurangan
    cout << endl;
    cout << "Hasil Pengurangan matriks B oleh matriks A : " << endl;
    if (jmlBaris==jmlBaris2 && jmlKolom==jmlKolom2) {
        for (int i = 1; i <= jmlBaris; i++)
        {
            for (int j = 1; j <= jmlKolom; j++)
            {
                hasil[i][j] = matriks2[i][j] - matriks1[i][j];
                cout << hasil[i][j] << " " ;
            }
            cout << endl;
        }
    }
    else {
        cout << "Maaf, Pengurangan beda ordo tidak bisa" << endl;
    }
    getch();

    //perkalian skalar
    cout << endl;
    cout << "================================"<<endl;
    cout << "Masukkkan Bilangan Skalar (k) : ";
    cin >> skalar;
    cout << "Hasil Perkalian Bilangan Skalar dengan Matriks A: " << endl;
    for (int i = 1; i <= jmlBaris; i++)
    {
        for (int j = 1; j <= jmlKolom; j++)
        {
            hasil[i][j] = skalar * matriks1[i][j];
            cout << hasil[i][j] << " " ;
        }
        cout << endl;
    }
    cout << endl;
    getch();
    cout << "Masukkkan Bilangan Skalar (k) : ";
    cin >> skalar;
    cout << "Hasil Perkalian Bilangan Skalar dengan Matriks B: " << endl;
    for (int i = 1; i <= jmlBaris2; i++)
    {
        for (int j = 1; j <= jmlKolom2; j++)
        {
            hasil[i][j] = skalar * matriks2[i][j];
            cout << hasil[i][j] << " " ;
        }
        cout << endl;
    }
    getch();

    // perkalian antar matriks
    cout << endl;
     cout << "Hasil perkalian antar matriks : \n";
    if (jmlKolom != jmlBaris2)
    {
        cout << "Maaf, Perkalian tidak bisa dilakukan" << endl;
    }
    else
    {
      for(int i = 1; i <= jmlBaris; i++){
        for(int j = 1; j <= jmlKolom2; j++){
            for(int k = 1; k <= jmlBaris2; k++){
            jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
            }
            hasil[i][j] = jumlah;
            jumlah = 0;
        }
      }

        for(int i = 1; i <= jmlBaris; i++){
          for(int j = 1; j <= jmlKolom2; j++){
            cout << hasil[i][j] << " ";
          }
          cout << endl;
        }
    }
    getch();

    //transpose
    cout << endl;
    cout << "================================"<<endl;
    cout << "Hasil Transpose matriks A : " << endl;

    for (int i = 1; i <= jmlKolom; i++)
    {
        for (int j = 1; j <= jmlBaris; j++)
        {
            transpose[i][j] = matriks1[j][i];
            cout << transpose[i][j] << " " ;
        }
        cout << endl;
    }
    cout << endl;
    getch();
    cout << "Hasil Transpose matriks B : " << endl;

    for (int i = 1; i <= jmlKolom2; i++)
    {
        for (int j = 1; j <= jmlBaris2; j++)
        {
            transpose[i][j] = matriks2[j][i];
            cout << transpose[i][j] << " " ;
        }
        cout << endl;
    }
    getch();

    return 0;
}
