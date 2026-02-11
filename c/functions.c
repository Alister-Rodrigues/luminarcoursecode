#include <stdio.h>
int factorial(int num) {
    int factorial = 1;
    for (int i=1; i <= num; i++) {
        factorial *= i;
    }
    return factorial;
}

int sum(int a, int b) {
    return a+b;
}

int main() {
    int num;
    printf("Number: ");
    scanf("%d", &num);

    int result = factorial(num);
    printf("%d! = %d", num, result);

    // int a = 1, b = 2;

    // int result = sum(a, b);

    // printf("%d + %d = %d", a, b, result);

    return 0;
}
