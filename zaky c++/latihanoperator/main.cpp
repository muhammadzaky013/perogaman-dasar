#include <iostream>

using namespace std;

int main()
{
    int kl;
    int  a, t, r;
    float ls, lj;
    float phi = 3.14;

        cout << "                                      =================================" << endl;
        cout << "                                      APLIKASI PENGHITUNG LUAS SEGITIGA" << endl;
        cout << "                                      =================================" << endl;
    cout << "" << endl;
    cout << "Masukan Alas " << endl;
    cout << "Angka :";
    cin >> a;
    cout << "Masukan Tinggi " << endl;
    cout << "Angka :";
    cin >> t;
    ls = 0.5 *a *t;
    cout << "Hasil :" << ls << endl;
    cout << "" << endl;

        cout << "                                   =======================================" << endl;
        cout << "                                   APLIKASI PENGHITUNG JARI-JARI LINGKARAN" << endl;
        cout << "                                   =======================================" << endl;
        cout << "" << endl;
    cout << "Masukan Jari-Jari Lingkaran" << endl;
    cout << "Angka :";
    cin >> r;
    lj = phi*r*r;
    cout << "Hasil :" << lj << endl;


    cin >> kl;
    return 0;
}
