#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main() {
    // Menghitung rumus Y = bx2 + 0,5x - c

    // Diketahui nilai nilainya adalah sebagai berikut
    float b, x, c;
    b = 25;
    x = 15;
    c = 20;


    // Menghitung rumus
    float Y = b*pow(x,2) + 0.5 * x - c;

    cout << "Nilai Y yang didapatkan adalah " << Y << endl;

    getch();
    return 0;

}
