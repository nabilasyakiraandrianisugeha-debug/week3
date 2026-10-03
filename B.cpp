#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    float persentaseKehadiran;
};

int main() {
    Mahasiswa mahasiswa[40];
    
    for (int i = 0; i < 40; i++) {
        cin >> mahasiswa[i].nim >> mahasiswa[i].nama >> mahasiswa[i].persentaseKehadiran;
    }
    
    cout << "\n=== DAFTAR MAHASISWA ===" << endl;
    for (int i = 0; i < 40; i++) {
        cout << i + 1 << " | " << mahasiswa[i].nim << " | " << mahasiswa[i].nama << " | " << mahasiswa[i].persentaseKehadiran << "%" << endl;
    }
    cout << "Total Mahasiswa: 40" << endl;
    
    // PENCARIAN BERDASARKAN NIM
    string cariNIM;
    cout << "\nMasukkan NIM yang ingin dicari untuk di-update: ";
    cin >> cariNIM;
    
    int idx = -1; 
    for (int i = 0; i < 40; i++) {
        if (mahasiswa[i].nim == cariNIM) {
            idx = i;
            break;
        }
    }
    
    if (idx != -1) {
        cout << "\nData ditemukan!" << endl;
        cout << "Nama Sekarang      : " << mahasiswa[idx].nama << endl;
        cout << "Kehadiran Sekarang : " << mahasiswa[idx].persentaseKehadiran << "%" << endl;
        
        float kehadiranBaru;
        cout << "\nMasukkan Persentase Kehadiran yang baru (%): ";
        cin >> kehadiranBaru;
        mahasiswa[idx].persentaseKehadiran = kehadiranBaru; 
        cout << "Data berhasil diperbarui!" << endl;

        cout << "\n=== DAFTAR MAHASISWA (SETELAH UPDATE) ===" << endl;
        for (int i = 0; i < 40; i++) {
            cout << i + 1 << " | " << mahasiswa[i].nim << " | " << mahasiswa[i].nama << " | " << mahasiswa[i].persentaseKehadiran << "%" << endl;
        }
        cout << "Total Mahasiswa: 40" << endl;
    }
    else {
        cout << "\nMaaf, mahasiswa dengan NIM " << cariNIM << " tidak ditemukan." << endl;
    }

    return 0;
}
