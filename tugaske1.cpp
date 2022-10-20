#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {
    //Menghitung sisi miring segitiga siku siku

    // Di ketahui
    float a, b, sisi_miring;
    a = 8;
    b = 10;

    // Rumus
    sisi_miring = sqrt(pow(a,2) + pow(b,2));

    cout << "Hasil dari perhitungan di atas\ndi dapatkan sisi miringnya adalah = " << sisi_miring << endl;

    getch();
    return 0;

}
