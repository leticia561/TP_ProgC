cat > pyramide.c << 'EOF'
#include <stdio.h>

int main() {
    int n = 5; // hauteur de la pyramide, tu peux changer cette valeur
    int i, j;

    for (i = 1; i <= n; i++) {
        // afficher les espaces pour centrer les nombres
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // afficher les nombres croissants
        for (j = 1; j <= i; j++) {
            printf("%d", j);
        }

        // afficher les nombres décroissants
        for (j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }

        printf("\n");
    }

    printf("Génération de la pyramide terminée.\n");
    return 0;
}
EOF
gcc -o pyramide pyramide.c
./pyramide

