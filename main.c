#include <stdio.h>

int main() {
    int applePrice = 16 ;
    int sodaPrice = 51 ;
    int cakePrice = 325 ;
    int selectedPrice;
    char choose;

    printf("Choisir un produit\n");
    printf("Utilisez p pour pomme,s pour soda et g pour gâteau.\n");
    scanf("%c", &choose);
    if(choose == 'p'){
        selectedPrice = applePrice * 1.2;
    }
    if(choose == 's'){
        selectedPrice = sodaPrice * 1.2;
    }
    if(choose == 'g'){
        selectedPrice = cakePrice * 1.2;
    }
    printf("%d", selectedPrice);
    return 0;

}
