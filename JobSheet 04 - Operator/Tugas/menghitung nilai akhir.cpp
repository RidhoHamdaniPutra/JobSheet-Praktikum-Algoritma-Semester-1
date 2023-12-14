/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	int presensi,praktek,uts,uas,akhir;
	
	//judul
	printf("Menghitung nilai akhir");
	printf("\n--------------------\n");
	
	//menginputkan nilai presensi
	printf("\nKetikkan nilai presensi: ");
	scanf("%d",&presensi);
	
	//menginputkan nilai praktek
	printf("Ketikkan nilai praktek: ");
	scanf("%d",&praktek);
	
	//menginputkan nilai uts
	printf("Ketikkan nilai UTS: ");
	scanf("%d",&uts);
	
	//menginputkan nilai uas
	printf("Ketikkan nilai UAS: ");
	scanf("%d",&uas);
	
	//menghitung nilai akhir
	akhir = 0.1*presensi + 0.2*praktek + 0.3*uts + 0.4*uas;
	
	//menampilkan nilai akhir
	printf("\nNilai akhir adalah %d",akhir);
	
	return 0;
}
