#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {
    // menghitung arus
    // nilai nilai yang diketahui
    float tegangan, hambatan;
    tegangan = 24;
    hambatan = 12;

    // menghitung arus dengan rumus I = V/R
    float arus;
    arus = tegangan / hambatan;

    cout << "Nilai arus yang didapatkan adalah " << arus << endl;

    getch();
    return 0;

}
