/*
	create by : 
	Nama: Ridho Hamdani Putra
	NIM : 23343052		
*/
#include <stdio.h>

int main() {
    int a = 4;
    
    //operator ternary
    printf("a > 1 adalah %s \n", a > 1 ? "benar": "salah");
    
    //increment a
    a++;
    printf("a++ = %d\n", a);
    
    ++a;
    printf("++a = %d\n", a);
    
    
    //decrement a
    a--;
    printf("a-- = %d\n", a);
    
    --a;
	printf("--a = %d\n", a);
    
    return 0;  
}
