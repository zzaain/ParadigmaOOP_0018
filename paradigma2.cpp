#include <iostream>
using namespace std;
 
class Barang{
    public:
    string nama;
    int jumlah;
    string kategori;
    string tanggalProduksi;

     void printData (){

        cout << " Nama barang  : " << nama << endl;
        cout << " Jumlah : " << jumlah << endl;
        cout << " Kategori : " << kategori << endl;
        cout << " tanggalProduksi : " << tanggalProduksi << endl;
        
    }
}; // batas class

int main()
{ 
    Barang elektronik;
    elektronik.nama = " Smart Watch";
    elektronik.jumlah = 4;
    elektronik.kategori = "Elektronik";
    elektronik.tanggalProduksi = "2026-04-05";
    
    Barang nonElektronik;
    nonElektronik.nama = " Meja ";
    nonElektronik.jumlah = 10;
    nonElektronik.kategori = "Non Elektronik";
    nonElektronik.tanggalProduksi = "2026-04-03";

    elektronik.printData();
    nonElektronik.printData();
}


