#include <iostream>

using namespace std;

int main()
{
    //cout << "Hello world!" << endl;
    cout << "Nama : Rayhan Prihandito" << endl;
    cout << "NIM : A11.2022.14152" << endl;
    cout << "Kelompok : 4104" << endl;
    cout << "MATKUL : DASPRO" << endl;
    cout << "Fibonacci" << endl;
    cout << " " << endl;

    int t1 = 0, t2 = 1, nextTerm = 0, n;

    cout << "input nomor : ";
    cin >> n;

    cout << "fibonnanci : ";

    nextTerm = t1 + t2;

    while (nextTerm <= n){
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }



    return 0;
}
