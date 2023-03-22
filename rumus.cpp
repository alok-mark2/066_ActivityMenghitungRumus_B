#include<iostream>
using namespace std;

class PersegiPanjang {
    public:
        double panjang, lebar;
        void sisiPP(){
            cout << "Masukkan panjang = ";
            cin >> panjang;
            cout << "Masukkan lebar = ";
            cin >> lebar;
        }
        double luas(){
            return panjang * lebar;
        }
        void tampil(){
            cout << "Luas persegi panjang = " << this->luas() << endl;
        }
};

class Lingkaran{
    public:
        double jejari;
        void jariLingkaran(){
            cout << "Masukkan jari-jari = ";
            cin >> jejari;
        }
        double luas(){
            return 3.14 * jejari * jejari;
        }
        void tampilLing(){
            cout << "Luas Lingkaran = " << this->luas() << endl;
        }
};

class Segitiga{
    public:
        double alas, tinggi;
        void sisiSegitiga(){
            cout << "Masukkan alas = ";
            cin >> alas;
            cout << "Masukkan tinggi = ";
            cin >> tinggi;
        }
        double luas(){
            return 0.5 * alas * tinggi;
        }
        void tampilS3(){
            cout << "Luas Segitiga = " << this->luas() << endl;
        }
};

int main(){
    int pilih;
    const int SIZE = 5;
    PersegiPanjang pp[SIZE];
    Lingkaran lk[SIZE];
    Segitiga s3[SIZE];

    cout << "Menu\n";
    cout << "-------------------------\n";
    cout << "1. Luas persegi panjang\n";
    cout << "2. Luas lingkaran\n";
    cout << "3. Luas segitiga\n";
    cout << "4. Keluar\n";
    cout << "-------------------------\n";
    cout << "Pilihan (1/2/3/4) = ";
    cin >> pilih;
    cout << endl;

    switch (pilih){
        case 1:
            for(int i=0; i<SIZE; i++){
                pp[i].sisiPP();
                pp[i].tampil();
            }
            break;
        case 2:
            for(int i=0; i<SIZE; i++){
                lk[i].jariLingkaran();
                lk[i].tampilLing();
            }
            break;
        case 3:
            for(int i=0; i<SIZE; i++){
                s3[i].sisiSegitiga();
                s3[i].tampilS3();
            }
            break;
        case 4:
            return 0;
            break;
        default:
            cout << "Pilihan salah!\n";
            break;
    }
    return 0;
}
