#include <stdio.h>
#include <stdlib.h>

static int load_builder(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 68) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", load_builder(68, 68));
    return 0;
}
