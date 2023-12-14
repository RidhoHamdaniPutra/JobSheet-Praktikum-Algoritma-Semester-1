/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	int i, nilai[20],jumlahmahasiswa = 20;
	float rata, total;
	
	//judul
	printf("==============================================================");
	printf("\n||Program untuk menghitung nilai rata rata dari 20 mahasiswa||");
	printf("\n==============================================================\n");
	
	//menginputkan 20 nilai mahasiswa
	for(i=0; i<jumlahmahasiswa; i++){
		printf("Inputkan Nilai mahasiswa ke-%d: ",i+1);
		scanf("%d",&nilai[i]);
	}
	
	//menghitung nilai total
	for(i=0; i<jumlahmahasiswa; i++){
		total += nilai[i];
	}
	
	//menampilkan hasil dari nilai rata rata
	printf("\nNilai rata rata dari 20 orang mahasiswa adalah: %.2f\n",total/20);
	
	return 0;
}
