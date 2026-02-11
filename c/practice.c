#include <stdio.h>

void swap(int *a, int *b);
int main() {
    // int a = 2;
    // char b = 'c';
    // float c= 3.14;

    // printf("integer = %d; character = %c; float = %.2f", a, b, c);

    // swap
    // int a = 3, b = 1;
    // int swap;

    // swap = a;
    // a = b;
    // b = swap;

    // printf("a = %d, b = %d", a, b);


    // char c = '2';
    // int a = c - 48;
    // printf("%d", a);

    // char a = 'd';
    // if (a >= 'a' && a <='z' || a >= 'A' && a <='Z') {
    //     printf("Alphabet");
    // } else if (a >= '0' && a <= '9') {
    //     printf("Integer");
    // } else {
    //     printf("None");
    // }

    // int num1 = 2, num2 = 3;
    // int choice;
    // printf("What to do with num1=%d and num2=%d", num1, num2);
    // printf("\n1. Add");
    // printf("\n2. Subtract");
    // printf("\n3. Multiply");
    // printf("\n4. Divide");
    // printf("\n5. Remainder");
    // do {
    //     printf("\nChoose:");
    //     scanf("%d", &choice);

    //     switch (choice) {
    //         case 1:
    //         printf("%d + %d = %d", num1, num2, num1 + num2);
    //         break;
    //         case 2:
    //         printf("%d - %d = %d", num1, num2, num1 - num2);
    //         break;
    //         case 3:
    //         printf("%d * %d = %d", num1, num2, num1 * num2);
    //         break;
    //         case 4:
    //         printf("%d / %d = %d", num1, num2, num1 / num2);
    //         break;
    //         case 5:
    //         printf("remainer of %d / %d = %d", num1, num2, num1 % num2);
    //         break;

    //     };
    // }while (choice >=1 && choice <=5);
    // printf("exit");

    // int limit = 50;
    // for (int i=2; i<=limit; i += 2) {
    //     printf("%d", i);
    //     if (i != limit) {
    //         printf(", ");
    //     }
    // }

    // int limit = 20;
    // int a = 0, b = 1, c;
    // printf("0 1 ");
    // for (int i = 1; i <= limit -2; i++) {
    //     c = a+b;
    //     a = b;
    //     b = c;
    //     printf("%d ", c);
    // }

    // int number = 1564;
    // // output = 321
    // // number = 1564;
    // // output = 4651
    // int dividend = number, remainder, final = 0;

    // for (int i = 1; i < number; i *=10) {
    //     final = (final * 10) + (dividend % 10);
    //     dividend = dividend / 10;
    // }
    // printf("Original = %d;\nSwapped = %d;", number, final);

    // a = val1 and b = val2
    // func(a,b)
    // return swap of a and b
    int a = 5, b = 10;
    swap(&a, &b);

    printf("Swapped values: %d %d", a, b);
    return 0;
}

void swap(int *a, int *b) {
    int temp = *b;
    *b = *a;
    *a = temp;
}
