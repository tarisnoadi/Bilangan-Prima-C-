include <iostream>
using namespace std;

int main() {
int angka;
long factorial=1;

 cout<<"Masukkan Angka Factorial : ";
 cin>>angka;
 cout<<endl;
 cout<<angka<<"! = ";
 while (angka >= 1){
    factorial=factorial*angka;
    if (angka != 1) {
        cout<<angka<<" x ";
    }else{
    cout<<angka<<" = ";
    }
  angka --;
 }
 cout<<factorial;

    return 0;
}
