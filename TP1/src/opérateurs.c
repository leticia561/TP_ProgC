#include <stdio.h>

int main() {
    int a = 16;
    int b = 3;

    // Affichage des valeurs initiales
    printf("Valeurs initiales : a = %d, b = %d\n\n", a, b);

    // Opérateurs arithmétiques
    printf("=== Operateurs arithmetiques ===\n");
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);  // Division entière
    printf("a %% b = %d\n", a % b); // %% pour afficher %

    // Opérateurs logiques / de comparaison
    printf("\n=== Operateurs logiques / de comparaison ===\n");
    printf("a == b : %d\n", a == b); // 1 si vrai, 0 si faux
    printf("a > b  : %d\n", a > b);  // 1 si vrai, 0 si faux

    return 0;
}
