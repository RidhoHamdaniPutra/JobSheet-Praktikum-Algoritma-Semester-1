/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	char buff[255];
	char text[255];
	FILE *fptr;
	
	//membuka file
	fptr = fopen("puisi.txt","w");
	
	//mengambil input user
	printf("Inputkan isi file: ");
	fgets(text, sizeof(text), stdin);
	
	//menulis ke text ke file
	fputs(text, fptr);
	
	printf("File berhasil ditulis\n");
	
	//tutup file setelah ditulis
	fclose(fptr);
	
	//membuka file kembali
	fptr = fopen("puisi.txt", "r");
	
	//baca isi file fengan gets lalu simpan ke buff
	while(fgets(buff, sizeof(buff), fptr)){
		printf("isi filenya sekarang: %s", buff);
	}
	
	//tutup file
	fclose(fptr);
}
