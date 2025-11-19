cat > calculs.c << 'EOF'
#include <stdio.h>

int main() {
    int num1 = 10; // tu peux changer ces valeurs pour tester
    int num2 = 3;
    char op = '+'; // change l'opérateur pour tester

    int resultat;

    switch(op) {
        case '+':
            resultat = num1 + num2;
            break;
        case '-':
            resultat = num1 - num2;
            break;
        case '*':
            resultat = num1 * num2;
            break;
        case '/':
            if (num2 != 0)
                resultat = num1 / num2;
            else {
                printf("Erreur : division par zero\n");
                return 1;
            }
            break;
        case '%':
            if (num2 != 0)
                resultat = num1 % num2;
            else {
                printf("Erreur : modulo par zero\n");
                return 1;
            }
            break;
        case '&':
            resultat = num1 & num2;
            break;
        case '|':
            resultat = num1 | num2;
            break;
        case '~':
            resultat = ~num1; // uniquement num1
            break;
        default:
            printf("Opérateur inconnu\n");
            return 1;
    }

    printf("Résultat : %d\n", resultat);
    return 0;
}
EOF
gcc -o calculs calculs.c
./calculs


