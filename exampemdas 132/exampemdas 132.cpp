// exampemdas 132.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

class bidangdatar {
private:
	int x; //variabel untuk menyimpn input dari lingkaran maupun bujursangkar
public:
	bidangdatar() { //constructor
		x = 0;
	}
	virtual void input() {} //void yang menerima input dan mengirim input melalui funsi setx untuk disimpan di x
	virtual float Luas(int a) { return 0; }//fungsi untuk menghitung luas
	virtual float Keliling(int a) { return 0; }//fungsi untuk menghitung keliling
	void setX(int a) {//fungsi untuk mengirim/memberi nilai pada x
		this->x = a;
	}
	int getX() { //fungsi untuk membaca/mengambil nilai dalam x
		return x;
	}
};
class Lingkaran :public bidangdatar {
public:
	void input() {
		int r;
		std::cout << "Masukan jejari: ";
		std::cin >> r;
		setX(r);
	}
	float luas() {
		int r = getX();
		return 3.14 * r * r;
	}
	float keliling() {
		int r = getX();
		return 2 * 3.14 * r;
	}

};
class Bujursangkar :public bidangdatar {
public:
	void input() {
		int s;
		cout << "Masukan sisi: ";
		cin >> s;
		setX(s);
	}
	float luas() {
		int s = getX();
		return s * s;
	}
	float keliling() {
		int s = getX();
		return s * s * s * s;
	}
};

int main()
{
	Lingkaran lingkaran;
	lingkaran.input();
	cout << "Luas Lingkaran: " << lingkaran.Luas() <<  endl;
	cout << "Keliling Lingkaran: " << lingkaran.keliling() << endl;

	cout << " " << endl;
	cout << "---------" << endl;
	cout << " " << endl;

	Bujursangkar bujursangkar;
	bujursangkar.input();
	cout << "luas Bujursangkar: " << bujursangkar.Luas() << endl;
	cout << "keliling Bujursangkar: " << bujursangkar.keliling() << endl;

	return 0;
}
