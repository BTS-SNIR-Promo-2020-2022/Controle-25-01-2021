#include <stdio.h>
#include <stdlib.h>
int hauteur = 10, largeur = 20, x = 11, y = 6, increment1, increment2, increment3;
char mouvement;
void displaygrid() {
    printf("\n");
    for (increment1 = 1; increment1 <= largeur; increment1++) {
        printf(" - ");
    }
    printf("\n");
    for (increment2 = 1; increment2 < hauteur; increment2++) {
        printf("|");
        for (increment3 = 1; increment3 < largeur; increment3++) {
            if (increment3 == x && increment2 == y) {
                printf("*  ");
            }
            else {
                printf("   ");
            }
        }
        printf("|");
        printf("\n");
    }
    for (increment1 = 1;increment1 <= largeur;increment1++) {
        printf(" - ");
    }
}
void main() {
    displaygrid();
    while (1) {
        scanf(" %c", &mouvement);
        switch (mouvement) {
        case 'd':
            system("cls");
            x++;
            displaygrid();
            break;
        case 'q':
            system("cls");
            x--;
            displaygrid();
            break;
        case 'z':
            system("cls");
            y--;
            displaygrid();
            break;
        case 's':
            system("cls");
            y++;
            displaygrid();
            break;
        }
        if (x > largeur) {
            x = 2;
        }
        else if (x < 1) {
            x = largeur;
        }
        if (y > hauteur) {
            y = 2;
        }
        else if (y < 1) {
            y = hauteur;
        }
    }
}