#include<iostream>
using namespace std;
class Hitung{
    public:
        int interatif(){
            cout << "Masukkan Uang Saku : Rp.";
            cin >> uangSaku;
            cout << "Masukkan Total Bulan Menabung : ";
            cin >> jumlahBulan;

            for(i=0;i<jumlahBulan;i++){
                cout << "Masukkan Pengeluaran Anda Bulan ke " << i + 1 << endl;
                cout << "Masukkan Biaya Keperluan Kuliah : Rp.";
                cin >> kuliah;
                cout << "Masukkan Biaya Jajan : Rp.";
                cin >> jajan;

                pengeluaran[i] = kuliah + jajan;
                tot += pengeluaran[i];
                sisa = uangSaku - pengeluaran[i];
                cout << "Sisa Uang Saku Bulan ke " << i+1 << " = Rp." << sisa << endl;
                tabungan += sisa;
            }
            akhir();
            return 0;
        }
        void akhir(){
            for(i=0;i<jumlahBulan;i++){
                cout << "Total Pengeluaran Bulan Ke " << i+1 << " = " << pengeluaran[i] << endl;
            }
                cout << "Total Keseluruhan Pengeluaran : Rp." << tot << endl;
                cout << "Total Tabungan : Rp." << tabungan << endl;
        }

    private:
        int uangSaku, jumlahBulan, kuliah, jajan, sisa, i;
        int pengeluaran[30];
        int tot = 0;
        int tabungan = 0;
};

int main(){
    Hitung proses;
    proses.interatif();
    return 0;
}