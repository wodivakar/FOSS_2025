#include <stdio.h>

int main() {
    int num, i, flag = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        flag = 1;
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }
    }

    if (flag == 0)
        printf("The number is prime.\n");
    else
        printf("The number is not prime.\n");

    return 0;
}

