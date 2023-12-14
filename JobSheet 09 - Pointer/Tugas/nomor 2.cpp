/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>
#include <string.h>

int main() {
  char kalimat[100]; 
  
  printf("Masukkan kalimat: "); 
  scanf("%[^\n]", kalimat); 
  
  int panjang = strlen(kalimat); 
  
  printf("Kebalikannya: "); 
  for (int i = panjang - 1; i >= 0; i--) { 
    printf("%c", kalimat[i]); 
  }
  printf("\n"); 
  return 0; 
}

