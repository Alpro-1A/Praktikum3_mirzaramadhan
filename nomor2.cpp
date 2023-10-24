//Mencetak Angka Terbesarr

// awalan
#include <iostream>

using namespace std;

// persiapan
int main() {
    int nilai1, nilai2, nilai3;
    cout << "Masukkan tiga angka: ";
    cin >> nilai1 >> nilai2 >> nilai3; // input angka bebas asal bukan desimal

    // proses menentukan angka yang paling besar
    int terbesar = nilai1;
    if (nilai2 > terbesar) {
        terbesar = nilai2;
    }
    if (nilai3 > terbesar) {
        terbesar = nilai3;
    }
    cout << "Angka terbesarnya adalah " << terbesar << endl; // Output yang keluar adalah angka yang paling besar

    return 0;
}
