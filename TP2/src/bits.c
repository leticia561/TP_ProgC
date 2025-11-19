cat > bits.c << 'EOF'
#include <stdio.h>

int main() {
    unsigned int d = 1048584; // tu peux changer cette valeur pour tester

    int bits_total = sizeof(d) * 8;

    // extraire le 4ème et 20ème bits de gauche
    int bit4  = (d >> (bits_total - 4)) & 1;
    int bit20 = (d >> (bits_total - 20)) & 1;

    if (bit4 == 1 && bit20 == 1)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
EOF
gcc -o bits bits.c
./bits
