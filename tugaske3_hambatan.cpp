#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {
    // menghitung hambatan
    // nilai nilai yang diketahui
    float tegangan, arus;
    tegangan = 16;
    arus = 34;

    // menghitung hambatan dengan rumus R = I / V
    float hambatan;
    hambatan = arus / tegangan;

    cout << "Nilai hambatan yang didapatkan adalah " << hambatan << endl;

    getch();
    return 0;

}
