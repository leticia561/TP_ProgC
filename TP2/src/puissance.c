cat > puissance.c << 'EOF'
#include <stdio.h>

int main() {
    int a = 2; // base
    int b = 3; // exposant
    int resultat = 1;

    for (int i = 0; i < b; i++) {
        resultat *= a;
    }

    printf("%d élevé à la puissance %d = %d\n", a, b, resultat);
    return 0;
}
EOF
gcc -o puissance puissance.c
./puissance
