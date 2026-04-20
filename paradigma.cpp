#include <iostream>
using namespace std;

class Mahasiswa {
    public :
    int nim;
    string nama;
    float nilai;

    void printData (){

        cout << " Nim : " << nim << endl;
        cout << " Nama : " << nama << endl;
        cout << " Nilai : " << nilai << endl;
        
    }
}; // batas class

    

int main()
{
    Mahasiswa mhs;
    mhs.nim = 2025;
    mhs.nama = "sheriell";
    mhs.nilai = 90.5;

}