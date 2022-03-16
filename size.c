#include <stdio.h>

int main(void) {
    float a[20];
    int length;
    length = sizeof(a) / sizeof(float);
    printf("%d", length);
}
