#include <stdio.h>
#include <stdlib.h>

static int compute_registry(int state, int count) {
    int value = 0;
    for (int i = 0; i < count; i++) {
        value += (state + i * 89) % 997;
    }
    return value;
}

int main(void) {
    printf("%d\n", compute_registry(89, 89));
    return 0;
}
