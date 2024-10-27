#include <iostream>
using namespace std;

int main() {
    int i, j, m, n, matriks1[10][10], matriks2[10][10], hasil[10][10];
    string ulang;
    char x;
    do {
        cout << "\t\t>>> PROGRAM PERKALIAN -- PENJUMLAHAN -- PEMBAGIAN -- PENGURANGAN <<<\n\n";
        cout << "=======================================" << endl;
        cout << "Masukkan Jumlah Baris Matriks: "; cin >> m;
        cout << "Masukkan Jumlah Kolom Matriks: "; cin >> n;
        cout << "=======================================" << endl;

        cout << "Masukkan Angka Matriks Pertama:\n";
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                cin >> matriks1[i][j];
            }
        }
        cout << "Masukkan Angka Matriks Kedua:\n";
        for (i = 0; i < m; i++) {
            for (j = 0; j < n; j++) {
                cin >> matriks2[i][j];
            }
        }

        do {
            cout << "\nPilihan perhitungan:\n";
            cout << "[+] Penjumlahan\n[-] Pengurangan\n[*] Perkalian\n[/] Pembagian\n";
            cout << "\nMasukkan pilihan yang ingin Anda hitung: ";
            cin >> x;

            if (x == '+') {
                cout << "\nHasil Penjumlahan Matriks:\n";
                for (i = 0; i < m; i++) {
                    for (j = 0; j < n; j++) {
                        hasil[i][j] = matriks1[i][j] + matriks2[i][j];
                        cout << hasil[i][j] << "\t";
                    }
                    cout << endl;
                }
            } else if (x == '-') {
                cout << "\nHasil Pengurangan Matriks:\n";
                for (i = 0; i < m; i++) {
                    for (j = 0; j < n; j++) {
                        hasil[i][j] = matriks1[i][j] - matriks2[i][j];
                        cout << hasil[i][j] << "\t";
                    }
                    cout << endl;
                }
            } else if (x == '*') {
                cout << "\nHasil Perkalian Matriks:\n";
                for (i = 0; i < m; i++) {
                    for (j = 0; j < n; j++) {
                        hasil[i][j] = matriks1[i][j] * matriks2[i][j];
                        cout << hasil[i][j] << "\t";
                    }
                    cout << endl;
                }
            } else if (x == '/') {
                cout << "\nHasil Pembagian Matriks:\n";
                for (i = 0; i < m; i++) {
                    for (j = 0; j < n; j++) {
                        if (matriks2[i][j] != 0) {  // Check to prevent division by zero
                            hasil[i][j] = matriks1[i][j] / matriks2[i][j];
                        } else {
                            hasil[i][j] = 0;
                            cout << "Div/0\t";
                        }
                        cout << hasil[i][j] << "\t";
                    }
                    cout << endl;
                }
            }

            cout << "\nTekan (y/Y) untuk melakukan operasi lain atau tekan apa saja untuk membatalkan: ";
            cin >> ulang;
        } while (ulang == "y" || ulang == "Y");

        cout << "\nTekan (y/Y) untuk mengisi angka dari awal atau tekan apa saja untuk keluar: ";
        cin >> ulang;
    } while (ulang == "y" || ulang == "Y");

    cout << "\n========== Terima kasih ==========" << endl;
    return 0;
}
