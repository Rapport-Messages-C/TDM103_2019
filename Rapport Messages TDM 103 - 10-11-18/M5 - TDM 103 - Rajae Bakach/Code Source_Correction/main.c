#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int A,B;
	printf("donnez deux nombre");
	scanf("%d", &A);
	scanf("%d", &B);
	if(A>B){
		printf("le nombre max est :%d", A);
		}else{
			printf("le nombre max est : %d", B);
			}
	return 0;
}
