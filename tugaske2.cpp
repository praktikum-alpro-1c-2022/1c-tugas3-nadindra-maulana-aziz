#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {
    //Nilai nilai yang diketahui
    float Praktikum, UTS, UAS;
    Praktikum = 75;
    UTS = 70;
    UAS = 88;

    /* Menghitung nilai akhir dengan ketentuan :
    nilai praktikum (20%)
    nilai uts (305)
    nilai uas (50%) */
    float nilai_akhir;
    nilai_akhir = Praktikum*0.2 + UTS*0.3 + UAS*0.5;

    cout << "Nilai akhir yang didapat oleh mahasiswa ini adalah " << nilai_akhir << endl;

    getch();
    return 0;
}
