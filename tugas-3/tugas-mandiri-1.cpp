#include <stdio.h>
#include <math.h>
int main(){
	float alas,tinggi;
	float luas,keliling,sisimiring;
	
	printf("Menghitung luas dan keliling segitiga\n");
	printf("Masukan alas : ");
	scanf("%f", &alas);
	printf("Masukan tinggi : ");
	scanf("%f", &tinggi);
	
	luas = 0.5 * alas * tinggi;
	
	printf("luas segitiga adalah %.2f cm^2\n", luas);
	
	sisimiring = sqrt((alas*alas) + (tinggi*tinggi));
	
	printf("sisi miring segitiga adalah %.2f cm\n", sisimiring);
	
	keliling = alas + tinggi + sisimiring;
	
	printf("maka keliling segitiga adalah %.2f cm\n", keliling);
	return 0;
}
