#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int HARGA_GORENG = 17000;
    const int HARGA_PANGGANG = 21000;
    const float DISKON = 0.10;
    const int BATAS_DISKON = 45000;
    
    int jumlahGoreng, jumlahPanggang;
    int totalGoreng, totalPanggang, totalHarga;
    float totalAkhir;
    
    
    cout << "===== Kedai Ayam  =====\n";
    cout << "Masukkan jumlah ayam goreng   : ";
    cin >> jumlahGoreng;
    cout << "Masukkan jumlah ayam panggang : ";
    cin >> jumlahPanggang;
    
   
    totalGoreng = jumlahGoreng * HARGA_GORENG;
    totalPanggang = jumlahPanggang * HARGA_PANGGANG;
    totalHarga = totalGoreng + totalPanggang;
    
   
    if (totalHarga > BATAS_DISKON) {
        totalAkhir = totalHarga - (totalHarga * DISKON);
    } else {
        totalAkhir = totalHarga;
    }
    
  
    cout << "\n===== Struk Pembayaran =====\n";
    cout << "Ayam Goreng    : " << jumlahGoreng << " x Rp" << HARGA_GORENG << " = Rp" << totalGoreng << "\n";
    cout << "Ayam Panggang  : " << jumlahPanggang << " x Rp" << HARGA_PANGGANG << " = Rp" << totalPanggang << "\n";
    cout << "---------------------------------\n";
    cout << "Total Harga    : Rp" << totalHarga << "\n";
    if (totalHarga > BATAS_DISKON) {
        cout << "Diskon 10%     : -Rp" << totalHarga * DISKON << "\n";
    }
    cout << "Total Bayar    : Rp" << fixed << setprecision(0) << totalAkhir << "\n";
    cout << "Terima kasih telah berbelanja!\n";
    
    return 0;
}

