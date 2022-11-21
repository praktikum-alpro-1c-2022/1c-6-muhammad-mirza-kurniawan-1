#include <iostream>

using namespace std;

int gajiPokok(int, int);
int gajiLembur(int, int);
int uangMakan(int, int);
int uangTransport(int, int);

int main(){
    int gajiPerjam = 7500,jamKerja = 0;
    long long int nip;
    // TotalGaji;
    string nama;

    cout << "Program Untuk Menghitung Gaji Harian Karyawan PT. XYZ";
    cout << "\n======================================================";
    cout << "\nMasukan NIP             : ";
    cin >> nip;
    cout << "Masukan Nama            : ";
    cin >> nama;
    cout << "Masukan Jumlah Jam Kerja: ";
    cin >> jamKerja;
    cout << "\nPegawai Dengan Identitas: "<<endl;
    cout << "=======================================================";
    cout << "\nNIP                 : " << nip << endl;
    cout << "Nama                : " << nama << endl;
    cout << "Gaji Pokok          : Rp." << gajiPokok(gajiPerjam, jamKerja) << endl;
    cout << "Bonus Lembur        : Rp." << gajiLembur(jamKerja, gajiPerjam) << endl;
    cout << "Bonus Uang makan    : Rp." << uangMakan(jamKerja, gajiPerjam) << endl;
    cout << "Bonus Uang Transport: Rp." << uangTransport(jamKerja, gajiPerjam) << endl;

    // TotalGaji = gajiPokok(gajiPerjam, jamKerja) + gajiLembur(jamKerja, gajiPerjam) + uangMakan(jamKerja, gajiPerjam) + uangTransport(jamKerja, gajiPerjam);
    // cout << "Total: " << TotalGaji;

  return 0;
}

int gajiPokok(int gajiPerjam, int jamKerja){
    return(gajiPerjam * jamKerja);
}

int gajiLembur(int jamKerja, int gajiPerjam){
  if(jamKerja > 8){
    int jamSisa = jamKerja - 8;
    int gajiLembur = (jamSisa * 1.5 * gajiPerjam);
    int total = gajiPerjam * jamKerja;
    return(total += gajiLembur);
  }else{
    return 0;
  }
}

int uangMakan(int jamKerja, int gajiPerjam){
  if (jamKerja >= 9){
    int uangMakan = 10000;
    return uangMakan;
  }else{
    return 0;
  }
}

int uangTransport(int jamKerja, int gajiPerjam){
  if (jamKerja >= 10){
    int uangTransport = 13000;
    return uangTransport;
  }else{
    return 0;
  }
}

