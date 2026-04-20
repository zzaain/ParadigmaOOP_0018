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
