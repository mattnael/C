#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 101

int main() {
    int T;
    char command[MAX_LENGTH];

    // Membaca waktu simulasi
    scanf("%d", &T);
    getchar(); // Menghapus newline setelah membaca T

    while (T > 0) {
        // Membaca perintah
        fgets(command, MAX_LENGTH, stdin);
        command[strcspn(command, "\n")] = 0; // Menghapus newline

        // Jika perintah adalah "wobble waffle"
        if (strcmp(command, "wobble waffle") == 0) {
            printf("Meshui Returned Back to Normal.\n");
            return 0;
        }

        // Mengurangi waktu 30 detik untuk setiap perintah salah
        T -= 30;
    }

    // Jika waktu habis dan tidak ada "wobble waffle"
    printf("May Chaos Take the World!\n");
    return 0;
}

