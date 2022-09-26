#include <iostream>

using namespace std;

int main()
{
    cout << "Nama: Rayhan Prihandito" << "\n";
    cout << "NIM: A11.2022.14152" << "\n";
    cout << "Matkul: DASPRO" << endl;
    cout << "\n";

    cout << "~~DAFTAR JURUSAN~~" << endl;
    cout << " 1.Teknik Informatika\n 2.Sistem Informasi\n 3.Desain Komunikasi Visual\n";
    cout << endl;

    int a;
    cout << "masukkan jurusan anda: ";
    cin >> a;

    if(a==1){
    cout << "Teknik Informatika"<<endl;
    }
    if(a==2){
    cout << "Sistem Informasi"<<endl;
    }
    if(a==3){
    cout << "Desain Komunikasi Visual"<<endl;
    }
    cout <<endl;

    cout << "~~KATAGORI MAHASISWA~~" << endl;
    cout << endl;

    int smt;

    cout << "Semester\n";
    cout << "1. Semester 1-2 = Freshman\n2. Semester 3-4 = Sophomore\n3. Semester 5-6 = Junior\n4. Semester 7-8 = Senior"<<endl;
    cout << " Masukan Semester Anda: ";
    cin >> smt;
    cout << "\n";

    if (smt == 1) {
        cout << " Saya dalam kategori Freshman " <<endl;
    } else if(smt == 2){
        cout << "Saya dalam kategori Sophomore" <<endl;
    } else if(smt == 3){
        cout << "Saya dalam kategori Junior"<<endl;
    } else if (smt == 4){
        cout << "Saya dalam kategori Senior"<<endl;
    }
}
