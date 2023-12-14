/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	char np[100],nb[100];
	int hb,jb,total;
	
	//judul
	printf("Program Kasir");
	printf("\n---------------\n");
	
	//menginputkan nama pembeli
	printf("\nKetikkan Nama: ");
	scanf("%s",&np);
	
	//menginputkan nama barang
	printf("Ketikkan nama barang: ");
	scanf("%s",&nb);
	
	//menginputkan harga barang satuan
	printf("Ketikkan harga satuan: ");
	scanf("%d",&hb);
	
	//menginputkan jumlah barang yang dibeli
	printf("Ketikkan jumlah barang: ");
	scanf("%d",&jb);
	
	//menghitung harga total
	total = hb * jb;
	
	//menampilkan harga total
	printf("\nHarga total dari %d %s adalah %d",jb,nb,total);
	
	return 0;
}
