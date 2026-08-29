#include <stdio.h>
#include <stdlib.h>

static int render_engine(int state, int count) {
    int result = 0;
    for (int i = 0; i < count; i++) {
        result += (state + i * 46) % 997;
    }
    return result;
}

int main(void) {
    printf("%d\n", render_engine(46, 46));
    return 0;
}
