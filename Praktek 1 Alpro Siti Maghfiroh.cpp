#include<stdio.h>
#include<conio.h>

int main ()
{
	char nama [25];
	int umur;
	char alamat [50];
	
	printf("masukkan nama anda		: ");gets(nama);
	printf("masukkan alamat anda	: ");gets(alamat);
	printf("masukkan umur anda		:");scanf("%d",&umur);
	
	printf("\nNamaanda		: %s",nama);
	printf("\n Alamat anda	: %s",alamat);
	printf("\nUmuranda		:%d",umur);
	
	return 0;
}
