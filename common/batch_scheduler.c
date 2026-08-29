#include <stdio.h>
#include <stdlib.h>

static int run_worker(int state, int count) {
    int acc = 0;
    for (int i = 0; i < count; i++) {
        acc += (state + i * 12) % 997;
    }
    return acc;
}

int main(void) {
    printf("%d\n", run_worker(12, 12));
    return 0;
}
