/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	printf("== Program Pembayaran ==\n");
	int total_belanja = 0;
	
	printf("Inputkan total belanja: ");
	scanf("%i", &total_belanja);
	
	//menggunakan blok percabangan if
	if(total_belanja > 100000){
		printf("Selamat, Anda mendapatkan hadiah!\n");
	}
	printf("Terimakasih sudah berbelanja di toko kami\n\n");
	
	return 0 ;
}