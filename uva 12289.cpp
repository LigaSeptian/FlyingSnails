#include <iostream>
using namespace std;

int main () {
    string kata;
    int jumlahKata, angka, i;

    cin >> angka;

    for (i=0; i<angka; i++) {
        cin >> kata;

        if (((kata[0] == 'o') && (kata[1] == 'n')) || ((kata[1] == 'n') && (kata[2] == 'e')) || ((kata[0] == 'o') && (kata[2] == 'e'))) {
            cout << 1 << endl;
        } else if (((kata[0] == 't') && (kata[1] == 'w')) || ((kata[1] == 'w') && (kata[2] == 'o')) || ((kata[0] == 't') && (kata[2] == 'o'))) {
            cout << 2 << endl;
        } else {
            cout << 3 << endl;
        }
    }

    return 0;
}
