#include <iostream>
using namespace std;
int main(){
    int Pilihan;
    double Saldo=100000;
    double Jumlah;
    cout << "masukkan Pilihan :";
    cout<<"1. Total Saldo"<<endl;
    cout<<"2. Tarik Tunai"<<endl;
    cout<<"3. Setor Tunai"<<endl;
    cout<<"4. Keluar"<<endl;
    cin>>Pilihan;
    if(Pilihan!=4){
        switch(Pilihan){
            case 1:
                cout << "Total Saldo Anda : Rp. " << Saldo << endl;
                break;
            case 2:
                cout << "Masukkan Jumlah Yang Ingin Ditarik : ";
                cin >> Jumlah;
                if(Jumlah <= Saldo){
                    Saldo -= Jumlah;
                    cout << "Penarikan Berhasil. Sisa Saldo : Rp. " << Saldo << endl;
                } else {
                    cout << "Saldo Tidak Cukup." << endl;
                }
                break;
            case 3:
                cout << "Masukkan Jumlah Yang Ingin Disetor : ";
                cin >> Jumlah;
                Saldo += Jumlah;
                cout << "Setor Tunai Berhasil. Sisa Saldo : Rp. " << Saldo << endl;
                break;
        }
    } else {
        cout << "Terima Kasih Telah Menggunakan Layanan Kami." << endl;
    }
}