using namespace std;

class Input{
    public:
        Input(){}
        void masukin(){
            cout << "Masukkan Uang Saku : Rp.";
            cin >> uangSaku;
            cout << "Masukkan Total Bulan Menabung : ";
            cin >> jumlahBulan;
        }

        void toFile(){
            tulisData.open("apiData.txt");
            tulisData << uangSaku << endl;
            tulisData << jumlahBulan;
            tulisData.close();
        }

    private:
        ofstream tulisData;
        int uangSaku, jumlahBulan;
};
