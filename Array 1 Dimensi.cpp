#include <iostream>
using namespace std;

int main (){
    int data[5]; //Deklarasi array
    cout << "Nama\t: Abdul Hafiz" << endl;
    cout << "NIM\t: 22343017" << endl;
    cout << "Prodi\t: Informatika" << endl;
    cout << "##  Program C++ Array 1 Dimensi ##" << endl;
    cout << "===================================" << endl;
    cout << endl;
    //Memasukkan data menggunakan perulangan for
    for (int i=0; i<5; i++){
        cout<<"Masukkan data pada elemen ke "<<i<<" = ";cin>>data[i];
    }
    cout<<endl;
    //Menampilkan elemen data
    for (int i=0; i<5; i++){
        cout<<"Data baris ke-"<<i<<" = "<<data[i];cout<<endl;
    }
    return 0;
}
