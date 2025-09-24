#include <iostream>
using namespace std;

int main() {
    const int jumlahSiswa = 5; 
    int nilai[jumlahSiswa];    
    int total = 0;
    int nilaiTertinggi = 0;

    cout << "=== Program Pencatatan Nilai Harian Siswa ===\n";

    for (int i = 0; i < jumlahSiswa; i++) {
        cout << "Masukkan nilai siswa ke-" << (i + 1) << ": ";
        cin >> nilai[i];
        total += nilai[i]; 
        if (nilai[i] > nilaiTertinggi) {
            nilaiTertinggi = nilai[i]; 
        }
    }

    cout << "\nNilai semua siswa:\n";
    for (int i = 0; i < jumlahSiswa; i++) {
        cout << "Siswa ke-" << (i + 1) << " : " << nilai[i] << endl;
    }

    double rataRata = total / (double)jumlahSiswa;
    cout << "\nRata-rata nilai siswa: " << rataRata << endl;

    cout << "Nilai tertinggi: " << nilaiTertinggi << endl;

    return 0;
}
