//include digunakan untuk meng-import iostream dan string.h
#include <iostream>
#include "buku.h"

using namespace std;

//fungsi untuk meng-input data nama dan nama buku yang dipinjam
void pinjamBuku(){
    string nama;
    string namaBuku;
    cout << endl;
    cout << "Masukkan nama: ";
    cin >> nama;
    cout << "Nama Buku Yang Dipinjam (Ganti spasi dengan tanda '_'): ";
    cin >> namaBuku;
    buku b = tambahBuku(nama,namaBuku);
    display(b);
}

//fungsi untuk menampilkan data dari hasil input yang dimasukkan
void display(buku b){
    printf("Buku yang dipinjam adalah ");
    cout << b.buku << endl;
    printf("Mohon kembalikan tepat waktu :)"); 


}

//untuk memasukkan hasil dari input data ke variabel b yang bertipe data buku
buku tambahBuku(string nama,string namaBuku){
    buku b;
    b.nama = nama;
    b.buku = namaBuku;
    return b;
}



