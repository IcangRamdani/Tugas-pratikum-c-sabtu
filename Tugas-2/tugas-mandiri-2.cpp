#include <stdio.h>

int main(){
	float diameter = 15.0;
	float jari = diameter/2.0;
	float volume;
	float pi = 3.14;
	
	volume = (4.0 / 3.0)* pi * jari* jari* jari;
	
	printf("Volume bola dengan diameter %.1f cm adalah: %.2f cm^3\n", diameter, volume);
	
	return 0;
}
