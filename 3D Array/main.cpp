#include <iostream>

using namespace std;

int main()
{


    float rata_rata;
    int sum1 = 0, sum2 = 0, mel = 2;
    int d[3][2][2];

    cout << "Array kelipatan 4 = " << endl;
    for(int i = 0; i < 3; i++) {
        for(int t = 0; t < 2; t++) {
            for(int o = 0; o < 2; o++) {
                d[i][t][o] = mel;
                mel += 2;
                if(mel % 4 == 0) {
                cout << mel << " ";
                sum1 += mel;
                sum2 += 1;
                rata_rata = (float)sum1/sum2;
                }
            }
        }
    }
    cout << endl;
    cout << "Sum kelipatan 4 = " << sum1 << endl;
    cout << "Rata-rata kelipatan 4 = " << rata_rata << endl;




    return 0;
}
