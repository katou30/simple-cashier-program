#include <stdio.h>
#include <string.h>

int main() {
    // data film dan nilai aspek (cerita, sinematografi, akting)
    char *namaFilm[] = {
        "Inception",
        "Mushoku Tensei",
        "Interstellar",
        "The Godfather",
        "Avengers: Endgame",
        "Joker",
        "Parasite",
        "The Dark Knight",
        "Titanic",
        "One Piece"
    };
    
    float ratingCerita[] = {92.0, 50.0, 88.0, 94.0, 80.0, 85.0, 90.0, 95.0, 78.0, 40.0};
    float ratingSinematografi[] = {89.0, 55.0, 91.0, 85.0, 88.0, 93.0, 92.0, 96.0, 84.0, 45.0};
    float ratingAkting[] = {95.0, 49.0, 90.0, 98.0, 85.0, 94.0, 97.0, 94.0, 86.0, 30.0};
    
    float skorFinal[10];
    char *kesimpulan[10];
    
    // header tabel
    printf("+----+---------------------+--------+----------------+--------+-------+-----------------+\n");
    printf("| No |      Nama Film      | Cerita | Sinematografi  | Akting | Final |   Kesimpulan    |\n");
    printf("+----+---------------------+--------+----------------+--------+-------+-----------------+\n");
    
    // perulangan buat ngitung skor dan nentuin recommended atau tidak
    for (int i = 0; i < 10; i++) {
        // perhitungan skor final
        skorFinal[i] = (ratingCerita[i] * 0.4) + (ratingSinematografi[i] * 0.3) + (ratingAkting[i] * 0.3);
        
        // penentuan film recommended atau tidak, jika skor final > 75 dan cerita, sinemato, akting >= 50 maka recommended
        if (skorFinal[i] > 75.0 && ratingCerita[i] >= 50.0 && ratingSinematografi[i] >= 50.0 && ratingAkting[i] >= 50.0) {
            kesimpulan[i] = "Recommended";
        } else {
            kesimpulan[i] = "Not Recommended";
        }

        //       No     FIlm   Story Sinematografi akting final  kesimpulan
        printf("| %2d | %-19s | %6.2f | %-14.2f | %6.2f | %5.2f | %-15s |\n",
                i + 1, namaFilm[i], ratingCerita[i], ratingSinematografi[i], ratingAkting[i], skorFinal[i], kesimpulan[i]);
    }
    
    // footer tabel
    printf("+----+---------------------+--------+----------------+--------+-------+-----------------+\n");
    
    return 0;
}
