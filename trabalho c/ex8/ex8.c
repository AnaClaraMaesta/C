
#include <stdio.h>

float var;
float*varptr;

int main() {
    varptr = &var;
    int inteira;
    float decimal;

    printf("valor: ");
    scanf("%f", &var);

    inteira = *varptr;
    decimal = *varptr - inteira;

    printf("%d\n", inteira);
    printf("%.2f\n", decimal);
}
