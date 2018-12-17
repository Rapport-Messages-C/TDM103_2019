#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
 {
 	int n ;
 	float HT ,TVA , TTC ;
 	printf ("entrer le prix HT :");
 	scanf ("%f",&HT);
 	printf("entrez le nombre d'articles :");
 	scanf("%d",&n);
 	printf("entrez le taux de TVA");
 	scanf ("%f",&TVA);
 	TTC = n*HT*(1+TVA/100);
 	printf("le prix total est :%f",TTC);
	return 0;
}
