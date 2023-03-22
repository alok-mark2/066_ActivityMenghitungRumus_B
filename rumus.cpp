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
        double luas(double p, double l){
            return p * l;
        }
        void tampil(){
            cout << "Luas persegi panjang = " << this->luas(panjang, lebar) << endl;
        }
};

class Lingkaran{
    public:
        double jejari;
        void jariLingkaran(){
            cout << "Masukkan jari-jari = ";
            cin >> jejari;
        }
        double luasLing(double r){
            return 3.14 * r * r;
        }
        void tampilLing(){
            cout << "Luas Lingkaran = " << this->luasLing(jejari) << endl;
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
        double luasS3(double a, double t){
            return 0.5 * a * t;
        }
        void tampilS3(){
            cout << "Luas Segitiga = " << this->luasS3(alas, tinggi) << endl;
        }
};

int main(){
    int pilih;
    PersegiPanjang pp;
    Lingkaran lk;
    Segitiga s3;

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
            pp.sisiPP();
            pp.tampil();
            break;
        case 2:
            lk.jariLingkaran();
            lk.tampilLing();
            break;
        case 3:
            s3.sisiSegitiga();
            s3.tampilS3();
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
