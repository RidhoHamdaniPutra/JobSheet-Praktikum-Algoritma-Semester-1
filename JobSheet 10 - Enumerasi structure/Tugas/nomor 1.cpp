/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

enum kondisi{
	Lebih_rendah, Lebih_tinggi, Benar
};

typedef struct pengecekan{
	int percobaan;
	int angka_kunci;
}cek;

int angkarandom(){
	return rand()%21;
} 
 
enum kondisi proses(int tebakan, int kunci){
	if (tebakan < kunci){
		printf("Nomor saya lebih besar!\n");
		return Lebih_rendah;
	}
	else if (tebakan > kunci){
		printf("Nomor saya lebih kecil!\n");
		return Lebih_tinggi;
	}
	else{
		printf("Selamat, anda benar!\n");
		return Benar;
	}
}

int main(){
	srand(time(NULL));
	
	char cobalagi = 'y';
	
	do{
		cek data;
		data.angka_kunci = angkarandom();
		data.percobaan = 0;
		
		int tebak;
		enum kondisi Kondisi;
		
		printf("\n========================\n");
		printf("+++ GAME TEBAK ANGKA +++\n");
		printf("========================");
		printf("\nTebak nomor antara 1-20: \n");
		do{
			printf("\nKetikkan tebakkan anda: ");
			scanf("%d", &tebak);
			
			Kondisi = proses (tebak, data.angka_kunci);
			data.percobaan++;
		}
		while (Kondisi != Benar);
		
		printf("\nJumlah percobaan: %d", data.percobaan);
		
		printf("\nBermain lagi? (y/t): ");
		scanf(" %c", &cobalagi);
	}
	while (cobalagi != 't');
	
	return 0;
	
}
