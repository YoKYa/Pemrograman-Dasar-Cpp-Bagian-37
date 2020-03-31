#include <iostream>
#include <string>

using namespace std;

// Nesting Struct
struct PT{
    string NIM, Prodi;
    int UKT;
};

// Struct Merupakan Tipe Data yang terbagi dari kumpulan tipe data
struct Main
{
    string nama;
    bool JK;
    string NISN;
    int umur;
    PT UNESA; // Nesting Struct
};





int main(){
    system("cls");

    // Deklarasi Struct
    Main Siswa;
    Main Mahasiswa;
    // Mengisi Struct
    cout << "Masukkan Nama : " ;
    getline(cin,Siswa.nama);
    cout << "Jenis Kelamin (1. Laki-Laki, 0. Perempuan) : ";
    cin >> Siswa.JK;
    cout << "NISN : ";
    cin >> Siswa.NISN;
    cout << "Umur : ";
    cin >> Siswa.umur;

    cout << endl << endl;
    cout << "Hasil" << endl;
    cout << "Nama          : " << Siswa.nama << endl;
    cout << "Jenis Kelamin : " << (Siswa.JK == 1 ? "Laki-Laki": "Perempuan") << endl;
    cout << "Umur          : " << Siswa.umur << endl;
    cout << "NISN          : " << Siswa.NISN << endl;
    cout << endl;

    cin.get();
    // Nesting Struct
    cout << "Masukkan Nama : ";
    getline(cin, Mahasiswa.nama);
    cout << "Jenis Kelamin (1. Laki-Laki, 0. Perempuan) : ";
    cin >> Mahasiswa.JK;
    cout << "NISN : ";
    cin >> Mahasiswa.NISN;
    cout << "Umur : ";
    cin >> Mahasiswa.umur;
    cout << "NIM  : ";
    cin >> Mahasiswa.UNESA.NIM;
    cout << "Program Studi : " ;
    cin.get();
    getline(cin, Mahasiswa.UNESA.Prodi);
    cout << "UKT : ";
    cin >> Mahasiswa.UNESA.UKT;

    // Nesting Struct
    cout << endl << endl;
    cout << "Hasil         :" << endl;
    cout << "Nama          : " << Mahasiswa.nama << endl;
    cout << "Jenis Kelamin : " << (Mahasiswa.JK == 1 ? "Laki-Laki": "Perempuan") << endl;
    cout << "Umur          : " << Mahasiswa.umur << endl;
    cout << "NISN          : " << Mahasiswa.NISN << endl;
    cout << "NIM           : " << Mahasiswa.UNESA.NIM << endl; 
    cout << "Prodi         : " << Mahasiswa.UNESA.Prodi << endl;
    cout << "UKT           : " << Mahasiswa.UNESA.UKT << endl;


    cin.get();
    return 0;
}