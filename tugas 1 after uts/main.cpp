#include <iostream>

using namespace std;

int main()
{
    cout << "\nNama: Rayhan Prihandito";
    cout << "\nNIM : A11.2022.14152";
    cout << "\nkelompok : 4104";
    cout << "\n------------------------" << endl;



    int pil, hrgsatuan, uang = 5000, jmlah;

    cout << " 1. Harga 500\n 2. Harga 1000\n 3. Harga 300" << endl;

    cout << " Masukan Pilihan : ";
    cin >> pil;

    switch (pil){
        case 1 :
            hrgsatuan = 500;
            jmlah = uang/hrgsatuan-5;
            cout << " Dito mendapatkan " << jmlah << " buah permen. "<< endl;
            break;
        case 2 :
            hrgsatuan = 1000;
            jmlah = uang/hrgsatuan;
            cout << " Dito mendapatkan " << jmlah << " buah permen. "<< endl;
            break;
        case 3 :
            hrgsatuan = 300;
            for(int i = 300; i <= uang; i += 300){
                jmlah += 1;
            }
             cout << " Dito mendapatkan " << jmlah << " buah permen. "<< endl;
             break;
    }


    return 0;
}
