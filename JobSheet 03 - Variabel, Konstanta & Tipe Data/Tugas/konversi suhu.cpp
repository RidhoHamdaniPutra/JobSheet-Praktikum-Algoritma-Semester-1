/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	double k,f,r,c;
	
	//judul
	printf("Mengkonversikan Suhu\n");
	printf("-----------------------\n");
	
	//menginputkan suhu 
	printf("Masukkan suhu dalam celcius: ");
	scanf("%lf",&c);
	
	//menghitung suhu jika di konversi kan ke kelvin
	k = c + 273.15;
	
	//menghitung suhu jika di konversikan ke fahrenheit
	f = c * 1.8 + 32;
	
	//menghitung suhu jika di konversikan ke reamur
	r = c * 0.8;
	
	//menampilkan suhu dan hasil pengkonversian suhu
	printf("\nInput suhu (celcius): %0.2lf C",c);
	printf("\nSuhu dalam kelvin: %0.2lf K",k);
	printf("\nSuhu dalam Fahrenheit: %0.2lf F",f);
	printf("\nSuhu dalam Reamur: %0.2lf R",r);

	return 0;
}
