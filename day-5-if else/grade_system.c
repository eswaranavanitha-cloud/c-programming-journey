#include <stdio.h>

int main() {
    int marks;
    scanf("%d", &marks);

    if (marks >= 90)
        printf("A Grade\n");
    else if (marks >= 75)
        printf("B Grade\n");
    else if (marks >= 50)
        printf("C Grade\n");
    else
        printf("Fail\n");

    return 0;
}
