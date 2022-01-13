#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
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
