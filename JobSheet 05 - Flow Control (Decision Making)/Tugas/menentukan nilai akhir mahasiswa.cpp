/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	int kehadiran,tugas,uts,uas,akhir;
	
	//judul
	printf("Menentukan nilai akhir mahasiswa");
	printf("\n-------------------------------\n");
	
	//menginputkan nilai
	printf("Ketikkan nilai kehadiran: ");
	scanf("%d",&kehadiran);
	printf("Ketikkan nilai tugas: ");
	scanf("%d",&tugas);
	printf("Ketikkan nilai uts: ");
	scanf("%d",&uts);
	printf("Ketikkan nilai uas: ");
	scanf("%d",&uas);
	
	//menghitung nilai akhir
	akhir = 0.20 * kehadiran + 0.20 * tugas + 0.25 * uts + 0.35 * uas;
	
	//menampilkan nilai akhir
	printf("Nilai akhir anda adalah: %d",akhir);
	
	//rentang nilai
	if(akhir >= 0 && akhir <=44){
		printf("\nNilai anda E");
		printf("\nMaaf, anda tidak lulus!");
	}
	else if(akhir >= 45 && akhir <= 55){
		printf("\nNilai anda D");
		printf("\nMaaf, anda tidak lulus!");
	}
	else if(akhir >= 56 && akhir <= 65){
		printf("\nNilai anda C");
		printf("\nAnda lulus, tingkarkan lagi untuk kedepannya!");
	}
	else if(akhir >= 66 && akhir <= 75){
		printf("\nNilai anda B-");
		printf("\nAnda lulus dengan baik, tingkatkan terus belajarnya!");
	}
	else if(akhir >= 76 && akhir <= 80){
		printf("\nNilai anda B");
		printf("\nAnda lulus, tingkarkan lagi untuk kedepannya!");
	}
	else if(akhir >= 81 && akhir <= 85){
		printf("\nNilai anda B+");
		printf("\nAnda lulus, tingkarkan lagi untuk kedepannya!");
	}
	else if(akhir >= 86 && akhir <= 90){
		printf("\nNilai anda A-");
		printf("\nSelamat! Anda lulus dengan nilai yang sangat memuaskan!");
	}
	else if(akhir >= 91 && akhir <= 100){
		printf("\nNilai anda A");
		printf("\nSelamat! Anda lulus dengan nilai yang sangat memuaskan!");
	}
	else{
		printf("\nNilai anda tidak di temukan :v");
	}
	
	return 0;
}
