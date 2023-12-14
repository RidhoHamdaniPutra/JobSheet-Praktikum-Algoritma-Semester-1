/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	char nama[50],prodi[50],fakultas[50];
	int nim,praktikum,uts,uas,nilai_akhir;
	
	//menginputkan nama
	printf("Nama : ");
	scanf("%[^\n]s", &nama);
	
	//menginputkan NIM
	printf("NIM : ");
	scanf("%i", &nim);
	
	//menginputkan prodi
	printf("Prodi : ");
	scanf("%s", &prodi);
	
	//menginputkan fakultas
	printf("Fakultas : ");
	scanf("%s", &fakultas);
	
	//menginputkan nilai praktikum
	printf("Nilai Praktikum : ");
	scanf("%i", &praktikum);
	
	//menginputkan nilai UTS
	printf("Nilai UTS : ");
	scanf("%i", &uts);
	
	//menginputkan nilai UAS
	printf("Nilai UAS : ");
	scanf("%i", &uas);
	
	//menghitung nilai akhir
	nilai_akhir = 0.3*praktikum + 0.3*uts + 0.4*uas;
	
	//menampilkan semua yang telah di inputkan tadi
	printf("\n---------------------------\n");
	printf("Nama            : %s\n", nama);
	printf("NIM             : %i\n", nim);
	printf("Prodi           : %s\n", prodi);
	printf("Fakultas        : %s\n", fakultas);
	printf("Nilai Praktikum : %i\n", praktikum);
	printf("Nilai UTS       : %i\n", uts);
	printf("Nilai UAS       : %i\n", uas);
	printf("Nilai Akhir     : %i\n", nilai_akhir);
	
	return 0;
}
