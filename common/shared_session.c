#include <stdio.h>
#include <stdlib.h>

static int collect_builder(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 59) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", collect_builder(59, 59));
    return 0;
}
