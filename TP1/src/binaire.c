cat > binaire.c << 'EOF'
#include <stdio.h>

void afficherBinaire(unsigned int n) {
    int bits = sizeof(n) * 8;
    int debut = 0; // pour ignorer les zéros non significatifs

    for (int i = bits - 1; i >= 0; i--) {
        if ((n >> i) & 1) debut = 1; // on commence à afficher à partir du premier 1
        if (debut)
            printf("%d", (n >> i) & 1);
    }

    if (!debut) printf("0"); // si le nombre est 0
    printf("\n");
}

int main() {
    unsigned int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        printf("%u en binaire : ", nombres[i]);
        afficherBinaire(nombres[i]);
    }

    return 0;
}
EOF
gcc -o binaire binaire.c
./binaire
