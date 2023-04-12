#include <iostream>
using namespace std;

lass Mahasiswa{
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
}