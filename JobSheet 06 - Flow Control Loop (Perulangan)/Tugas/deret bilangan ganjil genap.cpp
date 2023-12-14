/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	int i;
	
	//judul
	printf("Deret bilangan genap dan ganjil");
	printf("\n================================\n");
	
	//menentukan deret bilangan genap
	printf("\nBilangan genap: ");
	for(i = 0; i <= 50; i++){
		if(i % 2 == 0){
			printf(" %d",i);
		}
	}
	
	//menentukan deret bilangan ganjil
	printf("\nBilangan ganjil: ");
	for(i = 0; i <= 50; i++){
		if(i % 2 !=0){
			printf(" %d",i);
		}
	}
	
	return 0;
}
