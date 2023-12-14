/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	int n; //jumlah mahasiswa
	int i;
	
	//judul
	printf("=================================");
	printf("\n||Program input nama mahasiswa||");
	printf("\n=================================\n");
	
	//meminta user menginputkan jumlah mahasiswa
	printf("\nInputkan jumlah mahasiswa: ");
	scanf("%d",&n);
	getchar();
	
	char nama[n][100];
	
	//meminta user menginputkan nama mahasiswa
	printf("\nInputkan nama mahasiswa:\n");
	for(i=0; i<n; i++){
		printf("Inputkan nama mahasiswa ke-%d: ",i+1);
		gets(nama[i]);
	}
	
	//menampilkan nama mahasiswa yang telah diinputkan
	printf("\nNama mahasiswa yang diinputkan: \n");
	for(i=0; i<n; i++){
		printf("Nama mahasiswa ke-%d: %s\n",i+1,nama[i]);
	}
	
	return 0;
}
