#include "stm32f1xx.h"

/* dummy program */
int main() {
    RCC->APB2ENR |= RCC_APB2ENR_IOPCEN;
    GPIOC->CRH |= GPIO_CRH_MODE13;
    while(1) {
        GPIOC->ODR ^= (1 << 13);
    }
    return 0;
}