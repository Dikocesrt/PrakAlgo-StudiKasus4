using namespace std;

class Proses{
    public:
        Proses(){}
        void getData(){
            ambil_data.open("apiData.txt");
            bool saku = true;
            while(!ambil_data.eof()){
                if(saku == true){
                    ambil_data >> uangSaku;
                    saku = false;
                }else{
                    ambil_data >> jumlahBulan;
                }
            }
            ambil_data.close();
        }

        void interatif(){
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
        }

        void toFile(){
            tulis_data.open("apiData.txt");
            tulis_data << jumlahBulan << endl;
            for(i=0;i<jumlahBulan;i++){
                tulis_data << pengeluaran[i] << endl;
            }
            tulis_data << tot << endl;
            tulis_data << tabungan;
            tulis_data.close();
        }

    private:
        ifstream ambil_data;
        ofstream tulis_data;
        int uangSaku, jumlahBulan, kuliah, jajan, sisa, i;
        int pengeluaran[30];
        int tot = 0;
        int tabungan = 0;
};
