#include <iostream>
using namespace std;
int main(){
int rahasia=29;
int tebakan;
cout<<"Masukkan Tebakan Huruf Rahasia 1-100";
cin>>tebakan;
if(tebakan==rahasia){
    cout<<"Tebakan Benar Selamat";
}
else if(tebakan<rahasia){cout<<"Tebakan Anda terlalu kecil";}
else if(tebakan>rahasia){cout<<"Tebakan Anda Terlalu Besar";}
else{cout<<"Tebakan salah";}









return 0;
}