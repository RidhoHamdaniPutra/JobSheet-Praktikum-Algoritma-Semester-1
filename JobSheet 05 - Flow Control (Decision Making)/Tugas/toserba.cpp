/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	int tb,diskon,total;
	
	//judul
	printf("Program TOSERBA");
	printf("\n-----------------\n");
	
	//menginputkan total belanja
	printf("\nKetikkan total belanja anda: ");
	scanf("%d",&tb);
	
	//menghitung diskon
	if(tb <= 75000){
		diskon = tb * 0.05;
		total = tb - diskon;
		
		//menampilkan setelah didiskon
		printf("\nRp.%d didiskon sebesar %d menjadi Rp.%d",tb,diskon,total);
	}
	else if(tb > 125000){
		diskon = tb * 0.25 ;
		total = tb - diskon + 5000;
		
		//menampilkan setelah didiskon
		printf("\nRp.%d didiskon sebesar %d dan mendapatkan cashback 5000 menjadi Rp.%d",tb,diskon,total);
	}
	else if(tb > 75000){
		diskon = tb * 0.15;
		total = tb - diskon;
		
		//menampilkan setelah didiskon
		printf("\nRp.%d didiskon sebesar %d menjadi Rp.%d",tb,diskon,total);
	}
	
	return 0;
}
