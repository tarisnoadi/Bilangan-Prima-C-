#include <iostream>
using namespace std;

int main() {

       int input,cek,prima,bil;
       cout<<"Masukkan Batas  = ";
       cin>>input;cout<<endl;
        
       cout<<"bilangan prima", input;
       for(prima=2; prima<=input; prima++)
       {
       cek=0;
      
              for (bil=2; bil<prima; bil++)
              {
                     if(prima % bil == 0)
                     {
                           cek=1;
                     }
              }
                     if(cek==0)
                     {
                            cout<<prima;
                     }            
       }
       return 0;

}
