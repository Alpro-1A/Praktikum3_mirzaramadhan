// PROGRAM MENENTUKAN SCORE DENGAN OPERATOR PERBANDINGAN

// awalan
#include <iostream>

using namespace std;

// persiapan
int main() {
    int score;
    cout << "Masukkan nilai Anda: ";
    cin >> score;   // input score nya

    if (score >= 90 && score <= 100) { // proses1
    cout << "Selamat yaa!!! Kamu mendapatkan Nilai A. \n\n";   // Output yang keluar jika nilai lebih dari 90.
    } else if (score >= 80 && score < 90) { //proses2
    cout << "Selamat yaa!!! Kamu mendapatkan Nilai B.\n\n";    // Output yang keluar jika nilai lebih dari atau sama dengan 80 dan kurang dari 89.
    } else if (score >= 70 && score < 80) { //proses3
    cout << "Selamat yaa dan terus belajar !!! Kamu mendapatkan Nilai C.\n\n";    // Output yang keluar jika nilai lebih dari atau sama dengan 70 dan kurang dari 79.
    } else if (score >= 60 && score < 70) { //proses4
    cout << "Tetap semangat yaa!!! Kamu mendapatkan Nilai D.\n\n";    // Output yang keluar jika nilai lebih dari atau sama dengan 60 dan kurang dari 69.
    } else if (score >= 0 && score < 60) { //proses5
    cout << "Pantang menyerah yaa!!! Kamu mendapatkan Nilai E.\n\n";    // Output yang keluar jika nilai kurang dari 60.
    } else { //proses akhir
    cout << "yang bener aja men"; // Output yang keluar jika ditulis tidak sesuai dengan data yang sudah ditentukan.
    }

    return 0; // program selesai
}
