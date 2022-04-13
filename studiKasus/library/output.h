using namespace std;

class Output{
    public:
        void getData(){
            ambil_data.open("apiData.txt");
            bool mumet = true;
            while(!ambil_data.eof()){
                if(mumet == true){
                    ambil_data >> jumlahBulan;
                    mumet = false;
                }else{
                    ambil_data >> dataFile[index-1];
                }
                index += 1;
            }
            ambil_data.close();
        }

        void cetak(){
            for(i=0;i<jumlahBulan;i++){
                cout << "Total Pengeluaran Bulan Ke " << i+1 << " = " << dataFile[i] << endl;
            }
                cout << "Total Keseluruhan Pengeluaran : Rp." << dataFile[i] << endl;
                cout << "Total Tabungan : Rp." << dataFile[i+1];
        }

    private:
        ifstream ambil_data;
        string dataFile[30];
        int index = 0;
        int jumlahBulan, i;
};
