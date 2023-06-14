#include <iostream>
#include <vector>
using namespace std;

class Penerbit;
class Pengarang {
public:
	string nama_penarang;
	vector<Penerbit*> daftar_penerbit;
	vector<string> daftar_buku;

};
class Penerbit {
public:
	string nama;
	vector<Pengarang*> daftar_pengarang;

	Penerbit(string pNama) :nama(pNama) {
		cout << "Penerbit \"" << nama << "\" ada\n";
	}
	~Penerbit() {
		cout << "Penerbit \"" << nama << "\" tidak ada\n";
	}
	void tambahPengarang(Pengarang*);
	void cetakPengarang();
};
