#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct {
	char nom[10];
	char prenom[20];
	char tel[10];
}stagiaire;
int main(int argc, char *argv[]) {
	stagiaire stagiaire1;
	strcpy(stagiaire1.nom,"Madani");
	strcpy(stagiaire1.prenom,"Ali");
	puts(stagiaire1.nom);
	puts(stagiaire1.prenom);
	return 0;
}
