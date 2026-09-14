#include <iostream>
using namespace std;
int main(){
int Angka;
cin>>Angka;
if(Angka%3==0&&Angka%5==0){
    cout<<"FizzBuzz";
}
else if(Angka%3){
    cout<<"Fizz";
}
else if(Angka%5){cout<<"Buzz";}
return 0;
}