#include <iostream>
using namespace std;

int main() {
    string Nama, NIM, Kelas;
    int NilaiUTS, NilaiUAS, NilaiTugas, NilaiAkhir;

    cout << "Masukkan Nama : ";
    cin >> Nama;

    cout << "Masukkan NIM : ";
    cin >> NIM;

    cout << "Masukkan Kelas : ";
    cin >> Kelas;

    cout << "Masukkan Nilai UTS : ";
    cin >> NilaiUTS;

    cout << "Masukkan Nilai UAS : ";
    cin >> NilaiUAS;

    cout << "Masukkan Nilai Tugas : ";
    cin >> NilaiTugas;

    NilaiAkhir = (0.3 * NilaiUTS + 0.3 * NilaiUAS + 0.3 * NilaiTugas);
    if(NilaiAkhir >= 80) {
        cout << "Grade : A" << endl;
    } else if(NilaiAkhir >= 70) {
        cout << "Grade : B" << endl;
    } else if(NilaiAkhir >= 60) {
        cout << "Grade : C" << endl;
    } else if(NilaiAkhir >= 50) {
        cout << "Grade : D" << endl;
    } else {
        cout << "Grade : E" << endl;
    }

    cout << "Nilai Akhir : " << NilaiAkhir << endl;

    return 0;
}