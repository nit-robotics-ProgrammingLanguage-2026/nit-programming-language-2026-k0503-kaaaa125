#include <stdio.h>

int main(void)
{
    int x;

    scanf("%d", &x);

    if (x < 0 || x >= 10 || x == 5) {
        printf("OK\n");
    } else {
        printf("NG\n");
    }

    return 0;
}