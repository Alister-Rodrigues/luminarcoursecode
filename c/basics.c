#include <stdio.h>
// #include <string.h>

int main() {
    // int a = 10, b = 20;
    // printf("sum: %d",a+b);
    // printf("\ndifference: %d",a-b);
    // printf("\nmultiplication: %d", a*b);
    // printf("\ndivision: %d", a/b);

    // int val = 20!= 20;
    // printf("the value of val is %d", val);

    // int a = 2, b = 1;
    // if (a > b) {
    //     printf("%d is greater than %d", a, b);
    // } else if (a < b) {
    //     printf("%d is greater than %d", b, a);
    // } else {
    //     printf("%d and %d are equal", a, b);
    // }

    // int a = 3, b = 5,c = 7;

    // if (a > b && a > c) {
    //     if (b > c) {
    //         printf("%d > %d > %d", a, b, c);
    //     } else {
    //         printf("%d > %d > %d", a, c, b);
    //     }
    // } else if (b > a && b > c) {
    //     if (a > c) {
    //         printf("%d > %d > %d", b, a, c);
    //     } else {
    //         printf("%d > %d > %d", b, c, a);
    //     }
    // } else {
    //     if (a > b) {
    //         printf("%d > %d > %d", c, a, b);
    //     } else {
    //         printf("%d > %d > %d", c, b, a);
    //     }
    // }

    // int a = 6;
    // int remainder = a % 2;
    // if (remainder == 0) {
    //     printf("even");
    // } else {
    //     printf("odd");
    // }

    // char character = 'r';
    // if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u' || character == 'A' || character == 'E' || character == 'I' || character == 'O' || character == 'U') {
    //     printf("Vowel");
    // } else {
    //     printf("Consonent");
    // }

    // int a = 5;
    // printf("%d", ++a);

    // int a = 10, sum = 0;
    // for (int i = 1; i <= a; i++) {
    //     sum += i;
    // }
    // printf("Sum of first %d natural numbers = %d", a, sum);

    int num, factorial = 1;

    printf("Number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("%d! = %d", num, factorial);

    return 0;
}
