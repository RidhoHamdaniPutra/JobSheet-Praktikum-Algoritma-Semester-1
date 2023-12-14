/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

struct mahasiswa{
	char nama[20];
	char nim[20];
	char jurusan[20];
	char prodi[20];
};

void inputData(mahasiswa mhs[],int jumlahMahasiswa){
	
	for(int i = 0;i < jumlahMahasiswa;i++){
		printf("\nMasukkan data mahasiswa ke-%d\n",i+1);
		printf("Nama\t\t: ");
		fgets(mhs[i].nama, sizeof(mhs[i].nama), stdin);
		printf("NIM \t\t: ");	
		fgets(mhs[i].nim, sizeof(mhs[i].nim), stdin);
		printf("Jurusan \t: ");
		fgets(mhs[i].jurusan, sizeof(mhs[i].jurusan), stdin);
		printf("Program Studi \t: ");
		fgets(mhs[i].prodi, sizeof(mhs[i].prodi), stdin);
		
	}
}

void tulisData(FILE *fptr,mahasiswa mhs[],int jumlahMahasiswa){
	fptr = fopen("datamahasiswa.txt","w");
	for(int i = 0;i < jumlahMahasiswa;i++){
		fprintf(fptr,"Mahasiswa ke-%d\n",i+1);
		fprintf(fptr,"Nama \t\t: %s",mhs[i].nama);
		fprintf(fptr,"NIM \t\t: %s",mhs[i].nim );
		fprintf(fptr,"Jurusan \t: %s",mhs[i].jurusan);
		fprintf(fptr,"Program Studi \t: %s",mhs[i].prodi);
	}
	fclose(fptr);
}
int main(){
	FILE *fptr;
	
	int jumlahMahasiswa;
	printf("Masukkan jumlah mahasiswa : ");
	scanf("%d",&jumlahMahasiswa);getchar();
	
	mahasiswa mhs[jumlahMahasiswa];
	
	inputData(mhs,jumlahMahasiswa);
	
	tulisData(fptr,mhs,jumlahMahasiswa);
	return 0;
}
