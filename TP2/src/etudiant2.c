cat > etudiant2.c << 'EOF'
#include <stdio.h>
#include <string.h>

// Définition de la structure Étudiant
typedef struct {
    char nom[50];
    char prenom[50];
    char adresse[100];
    float note_prog;
    float note_sys;
} Etudiant;

int main() {
    Etudiant etudiants[5];

    // Initialisation des données
    strcpy(etudiants[0].nom, "Dupont");
    strcpy(etudiants[0].prenom, "Marie");
    strcpy(etudiants[0].adresse, "20 Boulevard Niels Bohr, Lyon");
    etudiants[0].note_prog = 16.5;
    etudiants[0].note_sys = 12.1;

    strcpy(etudiants[1].nom, "Martin");
    strcpy(etudiants[1].prenom, "Pierre");
    strcpy(etudiants[1].adresse, "22 Boulevard Niels Bohr, Lyon");
    etudiants[1].note_prog = 14.0;
    etudiants[1].note_sys = 14.1;

    strcpy(etudiants[2].nom, "Durand");
    strcpy(etudiants[2].prenom, "Chloe");
    strcpy(etudiants[2].adresse, "5 rue de la République, Paris");
    etudiants[2].note_prog = 15.0;
    etudiants[2].note_sys = 16.0;

    strcpy(etudiants[3].nom, "Petit");
    strcpy(etudiants[3].prenom, "David");
    strcpy(etudiants[3].adresse, "12 avenue de Lyon, Lyon");
    etudiants[3].note_prog = 13.5;
    etudiants[3].note_sys = 11.0;

    strcpy(etudiants[4].nom, "Leroy");
    strcpy(etudiants[4].prenom, "Emma");
    strcpy(etudiants[4].adresse, "8 place de Nice, Nice");
    etudiants[4].note_prog = 17.0;
    etudiants[4].note_sys = 15.5;

    // Affichage des informations
    for(int i = 0; i < 5; i++) {
        printf("Etudiant.e %d :\n", i+1);
        printf("Nom : %s\n", etudiants[i].nom);
        printf("Prénom : %s\n", etudiants[i].prenom);
        printf("Adresse : %s\n", etudiants[i].adresse);
        printf("Note Programmation C : %.2f\n", etudiants[i].note_prog);
        printf("Note Système d'exploitation : %.2f\n", etudiants[i].note_sys);
        printf("--------------------------\n");
    }

    return 0;
}
EOF
gcc -o etudiant2 etudiant2.c
./etudiant2


