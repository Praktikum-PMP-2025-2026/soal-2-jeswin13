//Modul: Modul 01 (Overview of C Language)
//Hari dan Tanggal: Rabu 15 - 04 -2026
//Nama dan NIM: Jeswinder Singh - 13224063
//Nama File: Praktikum1.c
//Deskripsi: Mengubah input bilangan integer berdasarkan kelompoknya (genap atau ganjil) untuk 
//           dimasukkan iterasi hingga diperoleh nilai 1 serta menentukan banyaknya langkah untuk memperoleh 1

#include <stdio.h>

int rekursi(int n) {
    int i = 0;
    while (n != 1) {
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = 3 * n + 1;
        }
        i = i+1; 
    }
    return i; 
}

int main() {
    int t;
    int n;
    scanf("%d", &t);
    for (int j = 0; j < t; j++) {
        scanf("%d", &n);
        int langkah = rekursi(n);
        printf("LANGKAH %d\n", langkah);
    }
    return 0;
}

