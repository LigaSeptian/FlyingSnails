#include <iostream>
using namespace std;

int main () {
    int i, n, angka, jumlah=0;
    string kalimat;

    cin >> n;

    for (i=0; i<n; i++) {
        cin >> kalimat;
        if (kalimat == "donate") {
            cin >> angka;
            jumlah=jumlah+angka;
        } else if (kalimat == "report") {
            cout << jumlah << endl;
        }
    }

    return 0;
}
