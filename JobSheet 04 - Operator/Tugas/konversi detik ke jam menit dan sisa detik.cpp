/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	int jam,menit,detik,sisa;
	
	//judul
	printf("Mengkonversikan detik kedalam bentuk jam, menit dan sisa detik\n");
	printf("--------------------------------------------------------------\n");
	
	//menginputkan jumlah detik yang ingin di konversikan
	printf("\nKetikkan jumlah waktu dalam satuan detik: ");
	scanf("%d",&detik);
	
	//menghitung jam
	jam = detik / 3600;
	
	//menghitung sisa detik setelah dikonversi menjadi jam
	sisa = detik % 3600;
	
	//menghitung menit
	menit = sisa / 60;
	
	//menghitung sisa detik setelah dikonversikan menjadi menit
	sisa = sisa % 60;
	
	//menampilkan hasil akhir setelah di konversi
	printf("Hasil konversi: %d jam, %d menit, %d detik",jam,menit,sisa);
	
	return 0;
	
}
