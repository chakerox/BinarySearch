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

    cout <<"\n==================\n";
    cout <<"Masukan Elemen Array";
    cout <<"====================";

    for(int i = 0;i < nPanjang;i++){
        cout << "Data ke-" << (i+1) << "=";
        cin >> elemen[i];
    }
}

void bubbleSortArray(){
    int pass = 1;
    do{
        for(int j = 0; j <= nPanjang -1 - pass;j++){
            if(elemen[j] > elemen[j-1]){
                int temp = elemen[j];
                elemen[j] = elemen[j+1];
                elemen[j+1] = temp;
            }
        }
        pass++;
    }while(pass <= nPanjang-1);
}

void display(){
    cout << "\n====================\n";
    cout << "Elemen Array setelah diurutkan(Asc)\n";
    cout << "=====================\n";

    for(int j = 0;j < nPanjang;j++){
        cout << elemen[j];
        if(j < nPanjang-1){
            cout << ">";
        }
    }
    cout << endl;
}

void binarySearch(){
   char ulang;
   do{
    cout << "\n=====================\n";
    cout << "Pencarian Binary Search\n";
    cout << "=====================\n";

    cout << "Masukan Elemen yang ingin dicari:";
    cin >> x;

    int low = 0;
    int high = nPanjang - 1;

    do{
        int mid = (low + high) / 2;

        if(elemen[mid]==x){
            cout << "Elemen " << x << " ditemukan pada indeks ke-" << mid << endl;
            break;
        }
        else if(x < elemen[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
}
int main(){

}