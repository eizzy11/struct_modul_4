#include <iostream>

using namespace std;

struct buku {
    string judul_buku;
    string pengarang;
    int tebal_halaman;
    float harga_buku;
};

buku novel;

int main () {


    cout << "Masukkan judul buku : ";
    cin >> novel.judul_buku;

    cout << "Masukkan harga buku : Rp. ";
    cin >> novel.harga_buku;

    cout << "Data Buku" << endl;

    cout << "Masukkan nama pengarang : ";
    cin >> novel.pengarang;

    cout << "Masukkan tebal halaman : ";
    cin >> novel.tebal_halaman;


    return 0;
}