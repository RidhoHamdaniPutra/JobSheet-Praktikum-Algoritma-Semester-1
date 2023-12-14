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
	int i;
	
	//membuka file untuk ditulis
	fptr = fopen("puisi.txt","w");
	
	for(i=0; i<5; i++){
		//mengambil input dari user
		printf("Isi baris ke-%d: ", i+1);
		fgets(text, sizeof(text), stdin);
		
		//menulis ke text ke file
		fputs(text, fptr);
	}
	
	printf("File berhasil ditulis\n");
	
	//tutup file setelah ditulis
	fclose(fptr);
	
	//membuka kembali
	fptr = fopen("puisi.txt","r");
	
	//baca isi file 
	while(fgets(buff, sizeof(buff), fptr)){
		printf("Isi filenya sekarang: %s", buff);
	}
	
	//tutup file
	fclose(fptr);
}
