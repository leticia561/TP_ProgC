cat > etudiant.c << 'EOF'
#include <stdio.h>

int main() {
    // Déclaration des tableaux
    char noms[5][50] = {"Dupont", "Martin", "Durand", "Petit", "Leroy"};
    char prenoms[5][50] = {"Alice", "Bob", "Chloe", "David", "Emma"};
    char adresses[5][100] = {
        "1 rue de Paris",
        "2 avenue Lyon",
        "3 boulevard Marseille",
        "4 place Nice",
        "5 chemin Bordeaux"
    };
    float notes_prog[5] = {15.5, 12.0, 18.0, 14.5, 16.0};
    float notes_sys[5] = {14.0, 11.5, 17.0, 13.0, 15.0};

    // Affichage des informations des étudiants
    for (int i = 0; i < 5; i++) {
        printf("Etudiant %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Programmation C : %.2f\n", notes_prog[i]);
        printf("Note Système d'exploitation : %.2f\n", notes_sys[i]);
        printf("--------------------------\n");
    }

    return 0;
}
EOF
gcc -o etudiant etudiant.c
./etudiant
