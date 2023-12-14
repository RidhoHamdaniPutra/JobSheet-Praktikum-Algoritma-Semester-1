/*
	Create by: 
	Nama : Ridho Hamdani Putra
	NIM  : 23343052
*/
#include <stdio.h>

enum hari {SENIN, SELASA, RABU, KAMIS, JUMAT, SABTU, MINGGU};

int main(){
	enum hari sekarang;
	sekarang = RABU;
	printf("sekarang hari ke-%d", sekarang+1);
}
