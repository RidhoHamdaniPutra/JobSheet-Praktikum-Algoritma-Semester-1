/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	char operasi;
	float a1,a2,total;
	
	//judul
	printf("Kalkulator sederhana");
	printf("\n---------------------\n");
	
	//memilih operasi aritmatika yang diinginkan
	printf("Pilih operasi aritmatika (+ - * / %%): ");
	scanf("%c",&operasi);
	
	//menginputkan 2 buah bilangan
	printf("Ketikkan 2 buah bilangan (dipisah dengan spasi): ");
	scanf("%f %f",&a1,&a2);
	
	//proses perhitungan
	switch(operasi){
		case '+':
			total = a1 + a2;
			break;
		case '-':
			total = a1 - a2;
			break;
		case '*':
			total = a1 * a2;
			break;
		case '/':
			total = a1 / a2;
			break;
		case '%':
			total = (int)a1 % (int)a2;
			break;
		default:
			printf("operasi salah");
	}
	
	//menampilkan hasil perhitungan
	printf("\nHasil dari %0.2f %c %0.2f adalah %0.2f",a1,operasi,a2,total);
	
	return 0;
}
