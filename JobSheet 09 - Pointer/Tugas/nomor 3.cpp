/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	int Lesley = 57082;
	int Layla1 = Lesley;
	int Balmond1 = Layla1 + 1;
	
	int *Layla2 = &Lesley;
	int Balmond2 = *Layla2 + 1;
	
	//Pertanyaan A
	printf("Jawaban Pertanyaan A\n");
	printf("a. Nilai Layla: %d\n",Layla1);
	printf("b. Nilai Balmond: %d\n",Balmond1);
	
	//Pertanyaan B
	printf("\nJawaban Pertanyaan B\n");
	printf("a. Nilai Layla: %d\n",Layla2);
	printf("b. Nilai Balmond: %d\n",Balmond2);
	
	return 0;
}
