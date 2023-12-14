/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

// Fungsi untuk menghitung besar potongan yang akan diberikan
float potong(float total) {
    // Deklarasi variabel
    float diskon, potongan;
    // Validasi: jika total pembelian kurang dari 1 juta, tidak ada diskon
    if (total < 1000000) {
        diskon = 0;
    }
    // Jika total pembelian antara 1 juta dan 3 juta, diskon 20%
    else if (total >= 1000000 && total < 3000000) {
        diskon = 0.2;
    }
    // Jika total pembelian lebih dari 3 juta, diskon 35%
    else {
        diskon = 0.35;
    }
    // Hitung besar potongan dengan mengalikan total pembelian dengan diskon
    potongan = total * diskon;
    return potongan;
}

int main() {
    
    float total, potongan, bayar;
    
    printf("Program Hitung Potongan\n");
    printf("Total Pembelian (Rp.) : ");
    scanf("%f", &total);
  
    potongan = potong(total);
    
    bayar = total - potongan;
   
    printf("Besar Diskon : %.0f%%\n", potongan / total * 100);
    printf("Besar Potongan : Rp. %.0f\n", potongan);
    printf("Besar Yang Harus Dibayarkan : Rp. %.0f\n", bayar);
    return 0;
}

