#include <iostream>

using namespace std;

struct Hewan {
    string Nama_hewan;
    char Jenis_kelamin;
    string Cara_berkembang;
    string alat_pernapasan;
    string tempat_hidup;
    bool karnivora;
};

struct {
    int jumlah_kaki;
    bool menyusui;
    string suara;
    Hewan darat;
}hewan_darat[7];

struct {
    string bentuk_sirip;
    string bentuk_bertahan;
    Hewan laut;
}hewan_laut;

int main () {
    hewan_laut.laut.Nama_hewan = "Hiu Megalodon";
    hewan_laut.laut.Jenis_kelamin = 'J';
    hewan_laut.laut.Cara_berkembang = "Beranak";
    hewan_laut.bentuk_bertahan = "Gigit";

    cout << hewan_laut.laut.Nama_hewan << endl;
    cout << hewan_laut.laut.Jenis_kelamin << endl;
    cout << hewan_laut.laut.Cara_berkembang << endl;
    cout << hewan_laut.bentuk_bertahan << endl;

    cout << endl << endl;

    hewan_darat[0].darat.Nama_hewan = "sapi";
    hewan_darat[0].darat.karnivora = false;
    hewan_darat[0].suara = "Mauw";


    cout << hewan_darat[0].darat.Nama_hewan << endl;
    cout << hewan_darat[0].darat.karnivora << endl;
    cout << hewan_darat[0].suara << endl;

    cout << endl << endl;

    hewan_darat[1].darat.Nama_hewan = "buaya";
    hewan_darat[1].darat.Jenis_kelamin = 'B';
    hewan_darat[1].darat.karnivora = true;
    hewan_darat[1].suara = "Krau";

    cout << hewan_darat[1].darat.Nama_hewan << endl;
    cout << hewan_darat[1].darat.Jenis_kelamin << endl;
    cout << hewan_darat[1].darat.karnivora << endl;
    cout << hewan_darat[1].suara << endl;

    return 0;

}