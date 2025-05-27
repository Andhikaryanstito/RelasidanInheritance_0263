#include <iostream>
#include <vector>
using namespace std;

class dokter;
class pasien {
public:
    string nama;
    vector<dokter*> daftar_dokter;

    pasien(string pNama) : nama(pNama) {
        cout << "Pasien \"" << nama << "\" ada\n";
    }

    ~pasien() {
        cout << "Pasien \"" << nama << "\" tidak ada\n";
    }

    void tambahDokter(dokter* pDokter);
    void cetakDokter();
};
class dokter {
public:
    string nama;
    vector<pasien*> daftar_pasien;

    dokter(string pNama) : nama(pNama) {
        cout << "Dokter \"" << nama << "\" ada\n";
    }

    ~dokter() {
        cout << "Dokter \"" << nama << "\" tidak ada\n";
    }

    void tambahPasien(pasien* pPasien);
    void cetakPasien();
};
void pasien::tambahDokter(dokter* pDokter) {
    daftar_dokter.push_back(pDokter);
}

void pasien::cetakDokter() {
    cout << "Daftar dokter yang menangani pasien \"" << nama << "\":\n";
    for (auto& d : daftar_dokter) {
        cout << "- " << d->nama << "\n";
    }
    cout << endl;
}
void dokter::tambahPasien(pasien* pPasien) {
    daftar_pasien.push_back(pPasien);
    pPasien->tambahDokter(this);
}

void dokter::cetakPasien() {
    cout << "Daftar pasien dari dokter \"" << nama << "\":\n";
    for (auto& p : daftar_pasien) {
        cout << "- " << p->nama << "\n";
    }
    cout << endl;
}
