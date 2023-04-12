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

void Mahasiswa::printData() {
	cout << "\nData Mahasiswa";
	cout << "\nNIM : " << nim;
	cout << "\nNamanya : " << nama;
	cout << "\nNilai : " << nilai;
}

class mataKuliah {
private:
	string kode;
	string namaMW;
	int sks;
public:
	void inputMW() {
		cout << "\n\nMasukan kode matakuliah : ";
		cin >> kode;
		cout << "Masukan Nama matakuliah : ";
		cin >> namaMW;
		cout << "Masukan SKS : ";
		cin >> sks;
	}
	void tampil() {
		cout << "\nData Matakuliah";
		cout << "\nKode Matakuliah : " << kode;
		cout << "\nNama Matakuliah : " << namaMW;
		cout << "\nsks : " << sks;
	}
};

int main()
{
	Mahasiswa mhs;
	mataKuliah mk;

	mhs.input();
	mhs.printData();

	mk.inputMW();
	mk.tampil();
}