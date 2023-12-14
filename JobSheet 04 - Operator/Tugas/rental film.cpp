/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	int durasi;
	const int jp = 15000;
	const float tb = 0.5;
	float total;
	
	//judul
	printf("Program rental film");
	printf("\n---------------------\n");
	
	//menginputkan durasi sewa
	printf("Ketikkan durasi sewa film (jam): ");
	scanf("%d",&durasi);
	
	//menghitung total biaya
	if(durasi <= 1){
		total = jp;
	} 
	else{
		total = jp + (durasi - 1) * jp * tb;
	}
	
	//menampilkan total biaya
	printf("\nTotal biaya sewa: Rp.%0.2f",total);
	
	return 0;
}
