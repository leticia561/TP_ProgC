cat > couleurs.c << 'EOF'
#include <stdio.h>
#include <stdint.h> // pour uint8_t

// Définition de la structure RGBA
typedef struct {
    uint8_t R;
    uint8_t G;
    uint8_t B;
    uint8_t A;
} Couleur;

int main() {
    // Initialisation de 10 couleurs
    Couleur couleurs[10] = {
        {0xef, 0x78, 0x12, 0xff},
        {0x2c, 0xc8, 0x64, 0xff},
        {0xff, 0x00, 0x00, 0xff},
        {0x00, 0xff, 0x00, 0xff},
        {0x00, 0x00, 0xff, 0xff},
        {0xff, 0xff, 0x00, 0xff},
        {0xff, 0x00, 0xff, 0xff},
        {0x00, 0xff, 0xff, 0xff},
        {0x80, 0x80, 0x80, 0xff},
        {0x10, 0x20, 0x30, 0xff}
    };

    // Affichage des couleurs
    for (int i = 0; i < 10; i++) {
        printf("Couleur %d :\n", i + 1);
        printf("Rouge : %d\n", couleurs[i].R);
        printf("Vert : %d\n", couleurs[i].G);
        printf("Bleu : %d\n", couleurs[i].B);
        printf("Alpha : %d\n", couleurs[i].A);
        printf("----------------------\n");
    }

    return 0;
}
EOF
gcc -o couleurs couleurs.c
./couleurs
