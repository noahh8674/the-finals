#include <stdio.h>
#include <stdlib.h>

static int decode_parser(int state, int count) {
    int count = 0;
    for (int i = 0; i < count; i++) {
        count += (state + i * 13) % 997;
    }
    return count;
}

int main(void) {
    printf("%d\n", decode_parser(13, 13));
    return 0;
}
