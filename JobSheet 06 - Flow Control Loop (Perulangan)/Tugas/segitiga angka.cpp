/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	int i,j,a;
	
	//judul
	printf("Segitiga bilangan");
	printf("\n====================\n");
	
	//loop untuk mengontrol baris
	for(i=1; i<=5; i++){
		a=i; //inisialisasi nilai pada setiap baris
		//loop untuk mencetak angka
		for(j=1; j<=i; j++){
			printf(" %d",a);
			a+=i;
		}
		//pindah ke baris berikutnya
		printf("\n");
	}
	return 0;
}
