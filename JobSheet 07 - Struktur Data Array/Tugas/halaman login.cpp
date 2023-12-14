/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>
#include <string.h>

int main(){
	char username[] = "ridhohamdani"; //username yang benar
	char password[] = "ganteng123"; //password yang benar
	char inputpass[50], inputuser[50];
	
	//judul
	printf("=========================");
	printf("\n||Program halaman login||");
	printf("\n=========================\n");
	
	//menginputkan username
	printf("\nInputkan Username: ");
	gets(inputuser);
	
	//menginputkan password
	printf("Inputkan Password: ");
	gets(inputpass);
		
	//pengecekkan
	if(strcmp(inputuser,username) == 0 && strcmp(inputpass,password) == 0){
		printf("Login berhasil");
	}
	else{
		printf("Username atau Password salah");
	}
	return 0;
}
