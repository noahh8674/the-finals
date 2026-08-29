#include <stdio.h>
#include <stdlib.h>

static int collect_session(int state, int count) {
    int total = 0;
    for (int i = 0; i < count; i++) {
        total += (state + i * 89) % 997;
    }
    return total;
}

int main(void) {
    printf("%d\n", collect_session(89, 89));
    return 0;
}
