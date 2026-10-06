#include <stdio.h>
#include <limits.h>
int main(void) {
    printf("INT_MIN: %d\n", INT_MIN);
    printf("INT_MAX: %d\n", INT_MAX);
    printf("UINT_MAX: %u\n", UINT_MAX);
   //приведение к беззнаковому необходимо,тк int_max*2 больше int_max
   // без приведения произошло бы переполнение знакового int и ответ был бы неверным 
    printf("RANGE_OK: %d\n", (unsigned int)INT_MAX *2u +1u == UINT_MAX);
    return 0;
}

