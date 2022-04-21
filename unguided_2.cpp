#include <iostream>

using namespace std;

struct {
    string judul_buku;
    string pengarang;
    int tebal_halaman;
    float harga_buku;
}buku [5];

int main () {
    buku[0].judul_buku = "Ter Liye";
    buku[1].judul_buku = "Fiersa";
    buku[0].tebal_halaman = 20;
    buku[1].tebal_halaman = 30;

    cout << buku[0].judul_buku << endl;
    cout << buku[1].judul_buku << endl;
    
    cout << endl;

    cout << buku[0].tebal_halaman << endl;
    cout << buku[1].tebal_halaman << endl;

    return 0;
}
