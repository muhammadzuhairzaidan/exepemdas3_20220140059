#include <iostream>
#include <vector>
using namespace std;

class pengarang;
class penerbit {
	string nama;
	vector<pengarang*> daftar_pengarang;
	penerbit(string pNama) :nama(pNama) {
		cout << "penerbit \" " << nama << "\" ada\n";

	}
	~penerbit() {
		cout << "penerbit \" " << nama << "\" tidak ada\n";
	}
	void tambahPengarang(pengarang*);
	void cetakPengarang();
};

class pengarang {
public:
	string nama;
	vector<penerbit*> daftar_penerbit;
	pengarang(string pNama) :nama(pNama) {
		cout << "pengarang \" " << nama << "\" ada\n";
	}
	~pengarang() {
		cout << "pengarang \" " << nama << "\" tidak ada\n";
	}
	void tambahPenerbit(penerbit*);
	void cetakPenerbit();
};
void penerbit::tambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}
void penerbit::cetakPengarang() {
	cout << "daftar pengarang pada Gama Press"
		for (auto& : daftar_pengarang) {
			cout << a->nama << "\n";
		}
	cout << endl;
}
void pengarang::tambahPenerbit(penerbit* pPenerbit) {
	for (auto& a : daftar_penerbit) {
		cout << a-> nama << "\n";
	}
	cout << endl;
}
int main
}