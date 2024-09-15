#include <iostream>

using namespace std;

int main()
{
    float harga, jumlah, total, diskon;

    cout << "Masukkan harga barang: ";
    cin >> harga;

    cout << "Masukkan jumlah barang: ";
    cin >> jumlah;

    total = harga * jumlah;

    if (total > 1000000) {
        diskon = total * 0.1;
        total -= diskon;
    }

    cout << "Total pembayaran: " << total << endl;

    return 0;
}