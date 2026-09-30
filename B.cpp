#include <iostream>
#include <string>
using namespace std;

// Struct simpan data info mahasiswa
struct mahasiswa {
    string nim;
    string nama;
    string kehadiran;
};

// Struct untuk elemen list
struct mhsList {
    mahasiswa info;
    mhsList* next;
};

// Struct untuk List
struct List {
    mhsList* first;
};

// Inisialisasi list kosong
void createList(List &L) {
    L.first = nullptr;
}

// Alokasi elemen baru
mhsList* createNewElement(string nim, string nama, string kehadiran) {
    mhsList* P = new mhsList;
    P->info.nim = nim;
    P->info.nama = nama;
    P->info.kehadiran = kehadiran;
    P->next = nullptr;
    return P;
}

// Menambahkan elemen ke posisi terakhir
void insertLast(List &L, mhsList* P) {
    if (L.first == nullptr) {
        L.first = P;
    } else {
        mhsList* Q = L.first;
        while (Q->next != nullptr) {
            Q = Q->next;
        }
        Q->next = P;
    }
}

// Menampilkan isi list
void printList(List L) {
    mhsList* P = L.first;
    while (P != nullptr) {
        cout << "NIM       : " << P->info.nim << endl;
        cout << "Nama      : " << P->info.nama << endl;
        cout << "Kehadiran : " << P->info.kehadiran << endl;
        cout << "-------------------------" << endl;
        P = P->next;
    }
}

int main() {
    List L;
    createList(L);
    
    // Input data mahasiswa
    insertLast(L, createNewElement("103012500315", "Nabila", "100%"));
    insertLast(L, createNewElement("103012500276", "Tsania", "100%"));
    
    // Tampilkan isi list
    printList(L);
    
    return 0;
}
