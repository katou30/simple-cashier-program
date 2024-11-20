// Program Sistem Kasir Sederhana
// Develop by Farhan
#include <stdio.h>

int main() {
    // deklarasi variabel dan array yang diperlukan program
    char *namaBarang[] = {"Buku", "Pensil", "Pulpen", "Penghapus", "Penggaris"};
    float hargaBarang[] = {20000, 5000, 7000, 3000, 10000};
    int kodeBarang, jumlahBarang;
    float totalHarga = 0, diskon = 0;
    float totalHargaDiskon;
    char pilihan;

    do {
        // program menampilkan daftar barang beserta detailnya
        // seperti kode barang, nama barang dan harga barang
        printf("====|Daftar Barang|=====\n");
        printf("1. Buku       - Rp 20000\n");
        printf("2. Pensil     - Rp 5000\n");
        printf("3. Pulpen     - Rp 7000\n");
        printf("4. Penghapus  - Rp 3000\n");
        printf("5. Penggaris  - Rp 10000\n");
        printf("=========================\n");

        // penginputan kode barang oleh user
        printf("Masukkan kode barang (1-5): ");
        scanf("%d", &kodeBarang);

        // program memvalidasi kode barang
        // jika kode barang tidak sesuai atau tidak terdaftar
        // maka program akan mengeluarkan output seperti dibawah ini
        if (kodeBarang < 1 || kodeBarang > 5) {
            printf("Kode barang tidak valid. Silakan coba lagi.\n");
            continue;
        }

        // user input jumlah barang
        printf("Masukkan jumlah barang: ");
        scanf("%d", &jumlahBarang);

        // program menghitung total harga barang yang dipilih
        totalHarga += hargaBarang[kodeBarang - 1] * jumlahBarang;

        // program bertanya apakah ingin menambah barang lagi
        printf("Apakah Anda ingin menambahkan barang lagi? (y/n): ");
        scanf(" %c", &pilihan); // spasi sebelum %c untuk mengabaikan karakter newline
    } while (pilihan == 'y' || pilihan == 'Y');

    // program memvalidasi dan menghitung diskon jika total belanja mencapai Rp 100.000
    if (totalHarga >= 100000) {
        diskon = totalHarga * 0.10; // 10% diskon
        totalHargaDiskon = totalHarga - diskon;
    }

    // program mencetak/memberi output total harga
    if (diskon > 0) { // ketika total belanja >= 100000 maka output dibawah akan dicetak
        printf("\nTotal harga belanja Anda sebelum diskon: Rp %.2f\n", totalHarga);
        printf("\nAnda mendapatkan diskon sebesar: Rp %.2f\n", diskon);
        printf("Total harga belanja Anda setelah diskon: Rp %.2f\n", totalHargaDiskon);
    } else if (diskon == 0) { // ketika total belanja < 100000 maka output dibawah akan dicetak
        printf("\nTotal harga belanja Anda sebesar: Rp %.2f\n", totalHarga);
    }
    return 0;
}
