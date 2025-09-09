#include <stdio.h>

int main() {
    int fat=10, *fatptr;
    fatptr = &fat;

    for(int i=0;i<10;i++)
    {
        fat+= fat*i;
    }
        printf("Valor variavel: %d", fat);
        printf("\nValor ponteiro: %d", *fatptr);
}
