#include <stdio.h>
#include <stdbool.h>
int main(void) {
    bool module_ready, fault_state;
    int module2,fault2; 
    scanf("%d %d", &module2, &fault2);
    module_ready= module2;
    fault_state= fault2;

    printf("MODULE_READY:%d\n",module_ready);
    printf("FAULT_STATE:%d\n",fault_state);
    printf("BOOL_SIZE: %zu\n",sizeof(bool));
    printf("FLAGS_SUM: %d\n", module_ready+fault_state);
    return 0;
}
