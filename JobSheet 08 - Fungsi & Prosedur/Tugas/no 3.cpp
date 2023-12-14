/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

float luas(float r){
	float pi = 3.14;
	
	return pi * r * r;
}

float keliling(float r){
	float pi = 3.14;
	return 2 * pi * r * r;
}

int main(){
	float r, hasil;
	
	printf("Ketikkan jari jari lingkaran: ");
	scanf("%f", &r);
	
	printf("Keliling luas = %.2f\n", hasil=luas(r));
	printf("Keliling lingkaran = %.2f\n", hasil=keliling(r));
	
	return 0;
}
