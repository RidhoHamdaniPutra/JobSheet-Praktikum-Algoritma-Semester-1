/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main() {
    char kata[] = "DNALROB";
    char *pointer1 = kata;

    while (*pointer1 != '\0') {
        char *pointer2 = pointer1;
        while (pointer2 >= kata) {
            printf("%c", *pointer2);
            pointer2--;
        }
        printf("\n");
        pointer1++;
    }

    return 0;
}

