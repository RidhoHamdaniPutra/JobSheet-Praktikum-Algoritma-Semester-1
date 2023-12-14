/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	
	double a,t,luas;
	
	//judul
	printf("Menghitung luas segitiga\n");
	printf("\n------------------------\n");
	
	//menginputkan panjang alas segitiga
	printf("\nInputkan panjang alas: ");
	scanf("%lf", &a);
	
	//menginputkan tinggi segitiga
	printf("Inputkan tinggi: ");
	scanf("%lf", &t);
	
	//menghitung luas segitiga
	luas = a*t/2;
	
	//menampilkan luas segitiga
	printf("Luas segitiga adalah: %0.2lf\n", luas);
	
	return 0;
}
