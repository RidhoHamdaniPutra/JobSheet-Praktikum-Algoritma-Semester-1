/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	int i,j;
	
	//judul
	printf("Segitiga bintang");
	printf("\n===================\n");
	
	//loop untuk menentukan baris dan kolom serta menampilkan simbol *
	for(i = 0; i <= 5; i++){
		for(j = 0; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
