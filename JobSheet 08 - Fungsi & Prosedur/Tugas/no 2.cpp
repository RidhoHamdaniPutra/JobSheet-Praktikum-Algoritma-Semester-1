/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int jumlah(int a, int b){
	return a + b;
}

int kurang(int a, int b){
	return a - b;
}

int kali(int a, int b){
	return a * b;
}

int bagi(int a, int b){
	if (a == 0 || b == 0){
		printf("Pembagian tidak valic");
		return 0;
	}
	else{
		return a / b;
	}
}

int main(){
	int a, b, hasil;
	char pilih;
	
	printf("Ketikkan nilai bilangan pertama: ");
	scanf("%d", &a);
	
	printf("Ketikkan nilai bilangan kedua: ");
	scanf("%d", &b);
	
	printf("Pilih perhitungan (+, -, *, /): ");
	scanf(" %c", &pilih);

	switch(pilih){
		case '+':
			hasil =jumlah(a, b);
			break;
		case '-':
			hasil =kurang(a ,b);
			break;
		case '*':
			hasil =kali(a, b);
			break;
		case '/':
			hasil = bagi(a, b);
			break;
		default:
			printf("Operasi tidak valid");
			return 0;
	}
	printf("\nHasil perhitungan %d %c %d adalah %d\n", a, pilih, b, hasil);
    return 0;
}
