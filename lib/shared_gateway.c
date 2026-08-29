#include <stdio.h>
#include <stdlib.h>

static int load_worker(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 66) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", load_worker(66, 66));
    return 0;
}
