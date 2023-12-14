/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	const double pi = 3.14;
	double d,r,l,v;
	
	//judul
	printf("Menghitung volume dan luas permukaan bola\n");
	printf("-----------------------------------------\n");
	
	//menginputkan diameter
	printf("Masukkan diameter bola: ");
	scanf("%lf",&d);
	
	//menghitung jari jari
	r = d / 2;
	
	//menghitung luas
	l = 4 * pi * r * r;
	
	//menghitung volume
	v = 4 * pi * r * r * r / 3;
	
	//menampilkan diameter yang diinputkan dan hasil perhitungan luas dan volume
	printf("\nDiameter: %0.2lf cm",d);
	printf("\nLuas permukaan bola adalah: %0.2lf cm2",l);
	printf("\nVolume bola adalah: %0.2lf cm3",v);
	
	return 0;
}
