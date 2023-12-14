/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

// Variabel global untuk menyimpan jumlah penjumlahan
int jumlah = 0;

int perkalian(int a, int b){
	if(a == 0 ||b == 0){
		return 0;
	}
	
	// Menambahkan jumlah penjumlahan
	jumlah++;
	return a + perkalian(a, b-1);
}

int main(){
	int i, a, b, hasil, temp;
	
	printf("Masukkan dua bilangan positif (dipisah dengan spasi): ");
	scanf("%d %d", &a, &b);
	
	hasil = perkalian(a, b);
	
	// Menyimpan hasil sementara ke variabel temp
	temp = hasil;
	
	printf("%d x %d = ", a, b);
	
	
	// Mencetak proses penjumlahan dengan mengurangi nilai temp sebanyak jumlah kali
	for( i = 0; i < jumlah; i++){
		printf("%d", a);
		temp -= a;
		if(temp > 0){
			printf(" + ");
		}
	}
	printf("\n%d x %d = %d", a, b, hasil);
	return 0;
}
