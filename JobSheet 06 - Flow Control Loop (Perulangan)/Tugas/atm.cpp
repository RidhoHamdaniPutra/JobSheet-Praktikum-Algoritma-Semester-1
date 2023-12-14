/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main(){
	const int minsaldo = 50000;
	int saldo = 175000, menu, setor, tarik;
	
	//judul
	printf("Program ATM");
	printf("\n=================\n");
	
	//menampilkan menu pilihan
	do{
		printf("\n1.Cek Saldo");
		printf("\n2.Setoran");
		printf("\n3.Penarikan Tunai");
		printf("\n4.Exit");
		printf("\n\nKetikkan menu pilihan anda (1/2/3/4): ");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				printf("\nNo Rek  : 0123");
				printf("\nNama Akun : Hatori");
				printf("\nSaldo ATM : Rp.%d\n",saldo);
				break;
			case 2:
				printf("Masukkan jumlah setoran: Rp.");
				scanf("%d",&setor);
				saldo+=setor;
				printf("Setoran berhasil, saldo anda sekarang: Rp.%d\n",saldo);
				break;
			case 3:
					printf("Masukkan jumlah penarikan: Rp.");
					scanf("%d",&tarik);
				if(saldo - tarik >= minsaldo){
					saldo-=tarik;
					printf("Penarikan berhasil, saldo anda sekarang: Rp.%d\n",saldo);
				}
				else{
					printf("Penarikan gagal, saldo anda mencapai batas minimum\n");
				}
				break;
			case 4:
				printf("\nTerima kasih\n");
				break;
			default:
				printf("\nMenu pilihan tidak valid, silahkan pilih kembali\n");
				break;
		}
	}
	while(menu!=4);
	
	return 0;
}
