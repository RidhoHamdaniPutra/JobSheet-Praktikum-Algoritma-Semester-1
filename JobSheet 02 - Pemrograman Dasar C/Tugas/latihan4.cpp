/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	
	int p,l,luas;
	
	//judul
	printf("Menghitung luas persegi panjang");
	printf("\n-------------------------------\n");
	
	//menginputkan panjang
	printf("Inputkan panjang: ");
	scanf("%i", &p);
	
	//menginputkan lebar
	printf("Inputkan lebar: ");
	scanf("%i", &l);
	
	//menghitung luas persegi panjang
	luas = p*l;
	
	//menampilkan luas persegi panjang
	printf("Luas persegi panjang adalah: %i\n", luas);
	
	return 0;
}
