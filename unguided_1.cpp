#include <iostream>

using namespace std;

struct buku {
    string judul_buku[5];
    string pengarang[5];
    int tebal_halaman[5];
    float harga_buku[5];
};

buku novel;

int main () {
    novel.judul_buku[0] = "Pulang";
    novel.judul_buku[1] = "Pergi";
    novel.judul_buku[2] = "Kembali";
    novel.judul_buku[3] = "Tak Terarah";
    novel.judul_buku[4] = "Senja";

    novel.pengarang[3] = "Tere Liye";
    novel.pengarang[4] = "Fiersa";

    novel.tebal_halaman[2] = 34;
    novel.tebal_halaman[4] = 20;

    novel.harga_buku[1] = 45000;
    novel.harga_buku[3] = 50000;

    cout << novel.judul_buku[0] << endl;
    cout << novel.judul_buku[1] << endl;
    cout << novel.judul_buku[2] << endl;
    cout << novel.judul_buku[3] << endl;

    cout << endl;

    cout << novel.pengarang[3] << endl;
    cout << novel.pengarang[4] << endl;

    cout << endl;

    cout << novel.tebal_halaman[2] << endl;
    cout << novel.tebal_halaman[4] << endl;

    cout << endl;

    cout << novel.harga_buku[1] << endl;
    cout << novel.harga_buku[3] << endl;

    return 0;

}