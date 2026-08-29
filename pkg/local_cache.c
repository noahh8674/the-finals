#include <stdio.h>
#include <stdlib.h>

static int run_worker(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 94) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", run_worker(94, 94));
    return 0;
}
