cat > chaine.c << 'EOF'
#include <stdio.h>

int main() {
    char str1[100] = "Hello";
    char str2[100] = " World!";
    char copie[100];
    char concat[200];

    // 1. Calculer la longueur de str1
    int len1 = 0;
    while (str1[len1] != '\0') {
        len1++;
    }
    printf("Longueur de str1 : %d\n", len1);

    // 2. Copier str1 dans copie
    int i = 0;
    while (str1[i] != '\0') {
        copie[i] = str1[i];
        i++;
    }
    copie[i] = '\0'; // terminer la chaîne
    printf("Copie de str1 : %s\n", copie);

    // 3. Concaténer str1 et str2 dans concat
    i = 0;
    int j = 0;
    while (str1[i] != '\0') {
        concat[i] = str1[i];
        i++;
    }
    while (str2[j] != '\0') {
        concat[i] = str2[j];
        i++;
        j++;
    }
    concat[i] = '\0';
    printf("Concaténation : %s\n", concat);

    return 0;
}
EOF
gcc -o chaine chaine.c
./chaine
