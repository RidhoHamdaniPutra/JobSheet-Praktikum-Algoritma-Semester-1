/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main (){
	char name[20];
	
	//menginputkan nama lengkap
	printf("Hello, siapa nama lengkapmu? ");
	scanf("%[^\n]s", &name);
	
	//menampilkan kembali nama lengkap yang telah di inputkan
	printf("\n------------------------------------\n");
	printf("Selamat Datang %s dalam Pemrograman C\n", name);
	
	return 0;
}
