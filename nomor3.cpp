//menghitung luas bangun datar

//awalan
#include <iostream>

using namespace std;

//persiapan
int main() {
    int pilih;
    float p, l, a, t; // nilai panjang (p), lebar (l), alas (a), tinggi (t)

    // pilihan pilihan bangun datar nya

    cout << "1. Persegi" << endl << endl;
    cout << "2. Persegi Panjang" << endl << endl;
    cout << "3. Segitiga" << endl << endl;
    cout << "Pilihlah bangun datar yang akan dihitung luasnya: "; // menentukan luas bangun datar yang ingin dihitung
    cin >> pilih;

    switch (pilih) {  // mencari pilihan diantara 3 case dibawah
        case 1:
            cout << "Masukkan panjang sisi persegi: ";
            cin >> p; // menginput nilai angka panjang dari sisi persegi
            cout << "Luasnya adalah: " << p * p << endl;    // menghitung luas persegi
            break;
        case 2:
            cout << "Masukkan panjang persegi panjang: ";
            cin >> p; // menginput nilai panjang sisi dari persegi panjang
            cout << "Masukkan lebar persegi panjang: ";
            cin >> l; // menginput nilai lebar sisi dari persegi panjang
            cout << "Luasnya adalah " << p * l << endl; // menghitung luas persegi panjang
            break;
        case 3:
            cout << "Masukkan alas segitiga: ";
            cin >> a;  // menginput nilai alas dari segitiga
            cout << "Masukkan tinggi segitiga: ";
            cin >> t;  // menginput nilai tinggi dari segitiga
            cout << "Luasnya adalah: " << 0.5 * a * t << endl;  // menghitung luas seggitiga
            break;
        default:
            cout << "Tidak valid." << endl; // Jika tidak memilih salah satu bangun datar yang sudah ditentukan akan dinyatakan tidak valid
    }

    return 0;
}
