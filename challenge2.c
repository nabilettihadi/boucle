#include <stdio.h>
int main() {
    int nbrligne;
    int i;
    printf("Entrez le nombre de lignes pour la pyramide : ");
    scanf("%d", &nbrligne);

    for (i = 1; i <= nbrligne; i++) {
        int nbrpremier = i;
        while (!estPremier(nbrpremier)) {
            nbrpremier++;
        }
        
        int espaces = nbrligne - i;
        
        for (int j = 0; j < espaces; j++) {
            printf(" ");
        }
        
        
        for (int j = 0; j < nbrpremier; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}