#include <stdio.h>

int main() {
    int a, somma = 0;

    printf("Inserisci un numero intero positivo: ");
    scanf("%d", &a);

    for (int i = 2; i <= a; i += 2) {
        somma += i;
    }
    printf("La somma dei numeri pari tra 1 e %d e': %d\n", a, somma);
}
