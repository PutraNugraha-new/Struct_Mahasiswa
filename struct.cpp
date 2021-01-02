#include <iostream>
#include <string>
#include "Header/TextTable.h"
using namespace std;

struct data_MHS
{
    string nama;
    string nim;
    string prodi;
    string ipk;
};

void tambah(data_MHS mahasiswa[],int n) {
    for (int i =0; i<n; i++) {
        cout << endl;
        cout <<"Data ke- " << i+1 << endl;
        cout << "-----------------" << endl;
        cout << "Nim  Mahasiswa : "; cin >> mahasiswa[i].nim;
        cout << "Nama Mahasiswa : "; cin >> mahasiswa[i].nama;
        cout << "Prodi Mahasiswa : "; cin >> mahasiswa[i].prodi;
        cout << "IPK  Mahasiswa : "; cin >> mahasiswa[i].ipk;
    }
}
void tampilkan(data_MHS mahasiswa[],int n) {
    cout << endl;
    TextTable t( '-', '|', '+' );
    
    t.add( "NIM" );
    t.add( "Nama" );
    t.add( "Prodi" );
    t.add( "Ipk" );
    t.endOfRow();

    for (int i=0; i<n; i++){
    t.add( mahasiswa[i].nim );
    t.add( mahasiswa[i].nama );
    t.add( mahasiswa[i].prodi );
    t.add( mahasiswa[i].ipk);
    t.endOfRow();
    }

    t.setAlignment( 2, TextTable::Alignment::RIGHT );
    cout << t;
    cout << "--------------------------------------------" << endl;

    // cout << "NIM                 Nama                 Prodi           IPK" << endl;
    // for (int i =0; i<n; i++) {
    //    cout << mahasiswa[i].nim<<"          "<<mahasiswa[i].nama<<"              "<< mahasiswa[i].prodi <<"        "<<mahasiswa[i].ipk << endl;
    // }
}

int main () {
    data_MHS mahasiswa[100];
    int n;
    cout << endl;
    cout << "Masukan Jumlah Mahasiswa (Maksimal 100) : "; cin >> n;
    tambah(mahasiswa,n);
    tampilkan(mahasiswa,n);

}
