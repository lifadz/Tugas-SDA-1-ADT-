//include digunakan untuk meng-import iostream dan string.h
#ifndef BUKU_H_INCLUDED
#define BUKU_H_INCLUDED
#include <iostream>
#include <string.h>


using namespace std;

//typedef struct digunakan untuk membuat tipe data baru yang memiliki variabel nama dan buku yang bertipe string
typedef struct{

    string nama;
    string buku;


} buku;


//pernyataan fungsi baru yang akan dibuat
void pinjamBuku();
void display(buku b);
buku tambahBuku(string nama,string namaBuku);


#endif