/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	double rupiah,nilai;
	const double dollar =14250;
	
	//judul
	printf("Konversi mata uang rupiah ke mata uang dollar\n");
	printf("---------------------------------------------\n");
	
	//menginputkan nilai rupiah
	printf("Masukkan nilai mata uang dalam rupiah: ");
	scanf("%lf",&rupiah);
	
	//menghitung konversi rupiah ke dolar
	nilai = rupiah / dollar;
	
	//menampilkan hasil konversi rupiah ke dolar
	printf("Nilai Rp.%0.2lf dalam dollar adalah: $%0.2lf",rupiah,nilai);
	
	return 0;
}
