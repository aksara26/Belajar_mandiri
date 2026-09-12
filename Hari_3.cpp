#include <iostream>
using namespace std;
int main(){
    double TotalBelanja, Diskon, TotalBayar;
    cin>>TotalBelanja;
    if(TotalBelanja>=500000){
        Diskon=TotalBelanja*0.2;
        TotalBayar=TotalBelanja-Diskon;
        cout<<"Diskon: "<<Diskon<<endl;
        cout<<"Total Bayar: "<<TotalBayar<<endl;
    }
    else if(TotalBayar>=250000){
        Diskon=TotalBelanja*0.1;
        TotalBayar=TotalBelanja-Diskon;
        cout<<"Diskon:  "<<Diskon<<endl;
        cout<<"Total Bayar: "<<TotalBayar<<endl;
    }
    else{
        Diskon=0;
        cout<<"Tidak ada Diskon"<<endl;
        cout<<"Total Bayar: "<<TotalBelanja<<endl;
    }
}