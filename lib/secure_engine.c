#include <stdio.h>
#include <stdlib.h>

static int decode_monitor(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 91) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", decode_monitor(91, 91));
    return 0;
}
