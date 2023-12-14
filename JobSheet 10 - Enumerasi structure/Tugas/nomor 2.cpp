/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

struct TanggalLahir{
	int tanggal;
	int bulan;
	int tahun;
};

int main(){
	TanggalLahir tgl;
	
	printf("Tanggal Lahir Anda [tgl-bln-tahun] : ");
    scanf("%d-%d-%d", &tgl.tanggal, &tgl.bulan, &tgl.tahun);

	if ((tgl.bulan == 3 && tgl.tanggal >= 21) || (tgl.bulan == 4 && tgl.tanggal <= 19)) {
        printf("Zodiak Anda adalah : ARIES\n");
    } else if ((tgl.bulan == 4 && tgl.tanggal >= 20) || (tgl.bulan == 5 && tgl.tanggal <= 20)) {
        printf("Zodiak Anda adalah : TAURUS\n");
    } else if ((tgl.bulan == 5 && tgl.tanggal >= 21) || (tgl.bulan == 6 && tgl.tanggal <= 20)) {
        printf("Zodiak Anda adalah : GEMINI\n");
    } else if ((tgl.bulan == 6 && tgl.tanggal >= 21) || (tgl.bulan == 7 && tgl.tanggal <= 22)) {
        printf("Zodiak Anda adalah : CANCER\n");
    } else if ((tgl.bulan == 7 && tgl.tanggal >= 23) || (tgl.bulan == 8 && tgl.tanggal <= 22)) {
        printf("Zodiak Anda adalah : LEO\n");
    } else if ((tgl.bulan == 8 && tgl.tanggal >= 23) || (tgl.bulan == 9 && tgl.tanggal <= 22)) {
        printf("Zodiak Anda adalah : VIRGO\n");
    } else if ((tgl.bulan == 9 && tgl.tanggal >= 23) || (tgl.bulan == 10 && tgl.tanggal <= 22)) {
        printf("Zodiak Anda adalah : LIBRA\n");
    } else if ((tgl.bulan == 10 && tgl.tanggal >= 23) || (tgl.bulan == 11 && tgl.tanggal <= 21)) {
        printf("Zodiak Anda adalah : SCORPIO\n");
    } else if ((tgl.bulan == 11 && tgl.tanggal >= 22) || (tgl.bulan == 12 && tgl.tanggal <= 21)) {
        printf("Zodiak Anda adalah : SAGITTARIUS\n");
    } else if ((tgl.bulan == 12 && tgl.tanggal >= 22) || (tgl.bulan == 1 && tgl.tanggal <= 19)) {
        printf("Zodiak Anda adalah : CAPRICORN\n");
    } else if ((tgl.bulan == 1 && tgl.tanggal >= 20) || (tgl.bulan == 2 && tgl.tanggal <= 18)) {
        printf("Zodiak Anda adalah : AQUARIUS\n");
    } else if ((tgl.bulan == 2 && tgl.tanggal >= 19) || (tgl.bulan == 3 && tgl.tanggal <= 20)) {
        printf("Zodiak Anda adalah : PISCES\n");
    }
    
    return 0;
};
