#include <stdio.h>

int main(){
	double uang = 1000000;
	double bunga = 0.2;
	
	for (int i=1; i<=10; i++){
		uang += uang * bunga;
		printf("Saldo bulan ke-%d:  Rp %.2f\n", i,uang);
	}
	return 0;
}
