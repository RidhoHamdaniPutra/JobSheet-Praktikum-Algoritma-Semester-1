/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>
#include <string.h>

struct mahasiswa{
	char npm[20];
	char nama[20];
	char tglLahir[20];
	char alamat[20];
	char noHp[20];
};

void tampilData(mahasiswa mhs[],int jumlahData){
	for(int i = 0;i <= jumlahData;i++){
		mhs[i].npm[strcspn(mhs[i].npm, "\n")] = 0;
		mhs[i].nama[strcspn(mhs[i].nama, "\n")] = 0;
		mhs[i].tglLahir[strcspn(mhs[i].tglLahir, "\n")] = 0;
		mhs[i].alamat[strcspn(mhs[i].alamat, "\n")] = 0;
		mhs[i].noHp[strcspn(mhs[i].noHp, "\n")] = 0;
		printf("%s      ",mhs[i].npm);
		printf("%s      ",mhs[i].nama);
		printf("%s      ",mhs[i].tglLahir);
		printf("%s     	",mhs[i].alamat);
		printf("%s    \n",mhs[i].noHp);
	}
}
int main(){
	mahasiswa mhs[100];
	int i = 0;
	char ulang;
	do{	
		printf("========================\n");
		printf("||Input Data Mahasiswa||\n");
		printf("========================\n");
		printf("NPM \t\t: ");
		fgets(mhs[i].npm, sizeof(mhs[i].npm), stdin);
		printf("NAMA \t\t: ");	
		fgets(mhs[i].nama, sizeof(mhs[i].nama), stdin);
		printf("TGL LAHIR\t: ");
		fgets(mhs[i].tglLahir, sizeof(mhs[i].tglLahir), stdin);
		printf("ALAMAT\t\t: ");
		fgets(mhs[i].alamat, sizeof(mhs[i].alamat), stdin);
		printf("HP \t\t: ");
		fgets(mhs[i].noHp, sizeof(mhs[i].noHp), stdin);
		printf("Mau memasukkan data lagi[y/t]?");
		scanf(" %c",&ulang);getchar();
		i++;
	}while(ulang == 'y');
	
	printf("\n\n");
	tampilData(mhs,i);
	return 0;
}
