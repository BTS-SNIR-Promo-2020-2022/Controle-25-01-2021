#include <stdlib.h>
#include <stdio.h>
//EXERCICE 2
void main() {
	int nombre1, nombre2, resultat;
	char operation, continuer = 'y';
	while (continuer == 'y') {
		system("cls");
		printf("Saisir deux nombres \n\n");
		scanf("%d %d", &nombre1, &nombre2);
		printf("Quel opération souhaitez-vous effectuer ?\n");
		scanf(" %c", &operation);
		switch (operation) {
		case '+':
			resultat = nombre1 + nombre2;
			break;
		case '-':
			resultat = nombre1 - nombre2;
			break;
		case '*':
			resultat = nombre1 * nombre2;
			break;
		case '/':
			resultat = nombre1 / nombre2;
			break;
		}
		printf("%d\nSouhaitez-vous continuer ? [y/n]", resultat);
		scanf(" %c", &continuer);
	}
}