#include <stdio.h>
#include <math.h>

int main (){
	float alas,tinggi,sisimiring;
	
	printf("Mencari sisi miring segitiga\n");
	printf("Masukan panjang alas segitiga (cm) : ");
	scanf("%f", &alas);
	printf("Masukan panjang tinggi segitiga (cm) : ");
	scanf("%f", &tinggi);
	
	sisimiring = sqrt((alas*alas) + (tinggi*tinggi));
	
	printf("Sisi miring segitiga adalah %.2f cm", sisimiring);
	return 0;
}
