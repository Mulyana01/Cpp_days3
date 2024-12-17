#include <iostream>

using namespace std;

class Contoh
{
public:
    mutable int a; // anggota kelas dengan kelas penyimpanan "mutable"
    mutable int b; // anggota kelas dengan non mmutable
    Contoh(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
};

int main()
{
    // membuat object konstanta dari kelas Contoh
    const Contoh obj(10, 20);
    // menampilkan nilai a dan b di dalam obj
    cout << "sebelum diubah" << endl;
    cout << "Nilai a = " << obj.a << endl;
    cout << "Nilai b = " << obj.b << endl;
    // mengubah nilai a
    obj.a = 30; // obj.a bisa di ubah karena a adalah mutable
    // mengubah nilai b
    obj.b = 40; // obj.b tidak bisa di ubah karena b adalah non mutable
    cout << "setelah diubah" << endl;
    cout << "Nilai a = " << obj.a << endl;
    cout << "Nilai b = " << obj.b << endl;
    return 0;
}
