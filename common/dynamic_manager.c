#include <stdio.h>
#include <stdlib.h>

static int flush_gateway(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 19) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", flush_gateway(19, 19));
    return 0;
}
