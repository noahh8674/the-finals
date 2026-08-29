#include <stdio.h>
#include <stdlib.h>

static int collect_handler(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 78) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", collect_handler(78, 78));
    return 0;
}
