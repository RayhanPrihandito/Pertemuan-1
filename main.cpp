#include <iostream>

using namespace std;

int main()
{
    cout << "Nama : Rayhan Prihandito" << endl;
    cout << "NIM: A11.2022.14152" << endl;
    cout << "Mapel: Daspro" << endl;

    //Luas Lingkaran

    float r, luas;
    float phi=3.14;

    cout << "Masukkan jari-jari: ";
    cin >> r;

    luas=phi*r*r;
    cout << "luas : " << luas << "\n";


    //Persegi Panjang

    float P;
    float L;
    float T;

    cout << "Masukkan Panjang: ";
    cin >> P;

    cout << "Masukkan Lebar: ";
    cin >> L;

    cout << "Masukkan Tinggi: ";
    cin >> T;

    int Total=P*L*T;
    cout << "Total: " << Total << "\n";
    return 0;
}
