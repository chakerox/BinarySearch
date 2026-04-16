#include<iostream>
using namespace std;

int elemen[10];
int nPanjang;
int x;

void input(){
    while(true){
        cout << "Masukan banyaknya elemen pada array(maks 10):";
        cin >> nPanjang;

        if(nPanjang <= 10){
            break;
        }
        else{
            cout<<"\nJumlah elemen tidal boleh lebih dari 10 silakan coba lagi\n";
        }
    }
}
int main(){

}