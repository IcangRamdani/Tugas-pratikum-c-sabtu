#include <stdio.h>

int main(){
	int a;
	
	printf("Masukan bilangan bulat positif : ");
	scanf("%d", &a);
	
	if( a <= 0){
		printf("masukan bilangan bulat positif");
	}else{
		if(a % 2 == 0){
			printf("bilangan genap");
		} else {
			printf("bilangan ganjil");
		}
	}
	
	return 0;
}
