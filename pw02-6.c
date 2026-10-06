#include <stdio.h>
#include <stdint.h>
int main(void) {
    uint8_t x;
    scanf("%hhu", &x);
    uint8_t add=x+x;
    uint8_t mul2=x*2;
    uint8_t sqr= x*x;
    printf("ADD: %u\n", (unsigned int)add);
    printf("MUL2: %u\n", (unsigned int)mul2);
    printf("SQR: %u\n", (unsigned int)sqr);
    return 0;
}

