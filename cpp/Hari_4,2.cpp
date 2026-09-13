#include <iostream>
using namespace std;
int main(){
string NamaKendaraan,JenisKendaraan;
int LamaParkir;
cout << "Nama Kendaraan : ";
cin>>NamaKendaraan;
cout<<"Jenis Kendaraan : ";
cin>>JenisKendaraan;
cout<<"Lama Parkir : ";
cin>>LamaParkir;
int Tarif,Diskon;
if(JenisKendaraan=="Mobil"&&LamaParkir>=5){
Diskon=0.5*5000*LamaParkir;
Tarif=5000*LamaParkir-Diskon;
}
else if(JenisKendaraan=="Mobil"&&LamaParkir<5){
Tarif=5000*LamaParkir;
}
else if(JenisKendaraan=="Motor"&&LamaParkir>=5){
Diskon=0.5*2000*LamaParkir;
Tarif=2000*LamaParkir-Diskon;
}
else if(JenisKendaraan=="Motor"&&LamaParkir<5){
Diskon=0;
Tarif=2000*LamaParkir;
}
cout<<"Nama Kendaraan : "<<NamaKendaraan<<endl;
cout<<"Jenis Kendaraan : "<<JenisKendaraan<<endl;
cout<<"Lama Parkir : "<<LamaParkir<<endl;
cout<<"Diskon : "<<Diskon<<endl;
cout<<"Tarif Parkir : "<<Tarif<<endl;


return 0;
}