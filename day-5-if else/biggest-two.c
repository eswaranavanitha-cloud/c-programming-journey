#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("A is bigger\n");
    else
        printf("B is bigger\n");

    return 0;
}
