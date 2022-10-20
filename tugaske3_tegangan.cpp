#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {
    // menghitung tegangan
    // nilai nilai yang diketahui
    float arus, hambatan;
    arus = 20;
    hambatan = 12;

    // menghitung tegangan dengan rumus V = I x R
    float tegangan;
    tegangan = arus * hambatan;

    cout << "Nilai tegangan yang didapatkan adalah " << tegangan << endl;

    getch();
    return 0;

}
