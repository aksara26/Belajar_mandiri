#include <iostream>
using namespace std;
  
int main()
{
  cout << "##  Program C++ Deret Fibonacci  ##" << endl;
  cout << "===================================" << endl;
  cout << endl;
  
  int n, a = 0, b = 1, angka_berikutnya = 0;
 
    cout << "Jumlah deret fibonacci yang diinginkan: ";
    cin >> n;
 
    for(int i = 1; i <= n; i++) {
        
        if(i == 1) {
            cout << a << " ";
            continue;
        }
        if(i == 2) {
            cout << b << " ";
            continue;
        }
        
        angka_berikutnya = a + b;
        a = b;
        b = angka_berikutnya;
         
        cout << angka_berikutnya << " ";
    }
   
  cout << endl;
  return 0;
}

