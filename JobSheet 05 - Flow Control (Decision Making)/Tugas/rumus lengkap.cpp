/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	const float pi = 3.14;
	float luas,r,s,p,l,t;
	int no;
	
	//judul
	printf("Program rumus lengkap");
	printf("\n---------------------\n");
	
	//memilih rumus yang ingin digunakan
	printf("\n1.Rumus Luas Permukaan Bola");
	printf("\n2.Rumus Luas Permukaan Kubus");
	printf("\n3.Rumus Luas Permukaan Balok");
	printf("\n4.Rumus Luas Permukaan Tabung");
	printf("\nPilih nomor rumus yang ingin di gunakan: ");
	scanf("%d",&no);
	
	//proses perhitungan
	switch(no){
		case 1:
			//menginputkan jari jari
			printf("Ketikkan panjang jari jari: ");
			scanf("%f",&r);
			//menghitung luas permukaan bola
			luas = 4 * pi * r * r;
			//menampilkan luas
			printf("Luas permukaan bola adalah %0.2fcm2",luas);
			break;
		case 2:
			//menginputkan panjang sisi
			printf("Ketikkan panjang sisi: ");
			scanf("%f",&s);
			//menghitung luas permukaan kubus
			luas = 6 * s * s;
			//menampilkan luas
			printf("Luas permukaan kubus adalah %0.2fcm2",luas);
			break;
		case 3:
			//menginputkan panjang lebat dan tinggi
			printf("Inputkan panjang lebar dan tinggi (dipisah dengan spasi): ");
			scanf("%f %f %f",&p,&l,&t);
			//menghitung luas permukaan balok
			luas = 2 * (p*l+p*t+l*t);
			//menampilkan luas
			printf("Luas permukaan balok adalah %0.2fcm2",luas);
			break;
		case 4:
			//menginputkan jari jari dan tinggi
			printf("Ketikkan jari jari dan tinggi (dipisahkan dengan spasi): ");
			scanf("%f %f",&r,&t);
			//menghitung luas permukaan tabung
			luas = 2 * pi * r * (r + t);
			//menampilkan luas
			printf("Luas permukaan tabung adalah %0.2fcm2",luas);
			break;
		default:
			printf("Rumus tidak tersedia");
	}
	return 0;
}
