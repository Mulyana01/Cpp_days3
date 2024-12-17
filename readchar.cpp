#include <iostream>

using namespace std;

int main()
{
    char c1, c2, c3;

    cout << " Masukkan Karakter : ";
    // Membaca Karakter
    cin >> c1;
    cout << " Anda Telah memasukkan karakter '" << c1 << "'" << endl;
    cout << endl;
    cout << " Masukkan dua karakter : ";
    cin >> c2 >> c3;
    cout << " Anda Telah memasukkan karakter '" << c2 << "' dan '" << c3 << "'" << endl;
    return 0;
}
