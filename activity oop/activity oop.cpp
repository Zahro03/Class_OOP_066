#include <iostream>
using namespace std;

class Mahasiswa { 
private: 
	int nim;
	string nama;
	float nilai;
public:
	void input() {
		cout << "Masukan NIM : ";
		cin >> nim;
		cout << "Masukan Nama : ";
		cin >> nama;
		cout << "Masukan Nilai : ";
		cin >> nilai;
	}
	void printData();
};

void Mahasiswa :: printData() {
	cout << "\nData Mahasiswa";
	cout << "\nNIM : " << nim;
	cout << "\nNamanya : " << nama;
	cout << "\nNIlai : " << nilai;
}

class mataKuliah {
private:
	string kode;
	string namaMK;
	int sks;
public:
	void inputMK(){
		cout << "\n\nMasukan kode mataKulliah : ";
		cin >> kode;
		cout << "Masukan Nama mataKuliah : ";
		cin >> namaMK;
		cout << "Masukan SKS : ";
		cin >> sks;
}
	void tampil() {
		cout << "\nData Matakuliah";
		cout << "\nkode matkuliah : " << kode;
		cout << "\nNama matkuliah : " << namaMK;
		cout << "\nsks : " << sks;
};

int main()
{
	Mahasiswa mhs;
	mataKuliah mk;

	mhs.input();
	mhs.printData();

	mk.inputMK();
	mk.tampil();
}