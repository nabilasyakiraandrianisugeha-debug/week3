#include <iostream>

using namespace std;

int main()
{
    string nama[40];
    string nim[40];
    float persentaseAbsen[40];

    for (int i = 0; i < 40; i++)
    {
        cin >> nim[i] >> nama[i] >> persentaseAbsen[i];
    }

    cout << endl;
    cout << "Data Mahasiswa" << endl;
    for (int i = 0; i < 40; i++)
    {
        cout << nama[i] << " / " << nim[i] << " / " << persentaseAbsen[i] << endl;
    }

    // Pencarian berdasarkan NIM.
    string cariNIM;
    cout << "\nMasukkan NIM yang ingin dicari untuk di-update: ";
    cin >> cariNIM;

    int idx = -1; 
    for (int i = 0; i < 40; i++)
    {
        if (nim[i] == cariNIM)
        {
            idx = i;
            break;
        }
    }

    if (idx != -1)
    {
        cout << "\nData ditemukan pada nomor " << idx + 1 << "!" << endl;
        cout << "Nama Sekarang: " << nama[idx] << endl;
        cout << "Kehadiran Sekarang: " << persentaseAbsen[idx] << "%" << endl;

        int kehadiranBaru;
        cout << "\nMasukkan Persentase Kehadiran yang baru (%): ";
        cin >> kehadiranBaru;
        
        persentaseAbsen[idx] = kehadiranBaru; 
        cout << "Data berhasil diperbarui!" << endl;

        // data setelah update.
        cout << "\n=== DATA MAHASISWA (SETELAH UPDATE) ===" << endl;
        for (int i = 0; i < 40; i++)
        {
            cout << i + 1 << ". " << nim[i] << " / " << nama[i] << " / " << persentaseAbsen[i] << "%" << endl;
        }
    }
    else
    {
        cout << "\nMaaf, mahasiswa dengan NIM " << cariNIM << " tidak ditemukan." << endl;
    }

    return 0;
}

