#include <math.h>
#include <stdio.h>
int main() {
  // int a, b, c;
  // printf("Input values of a, b, and c\n");
  // scanf("%d", &a);
  // scanf("%d", &b);
  // scanf("%d", &c);

  // float discriminant = sqrt(pow(b, 2) - (4*a*c));

  // float root1 = ((-b + discriminant)) / (2*a);
  // float root2 = ((-b - discriminant)) / (2*a);

  // if (discriminant < 0) {
  //     printf("The roots of (%d)x^2 + (%d)x + (%d) are imaginary", a, b,c);
  // } else if (root1 == root2) {
  //     printf("The roots of (%d)x^2 + (%d)x + (%d) is %.0f", a, b, c, root1);
  // } else {
  //     printf("The roots of (%d)x^2 + (%d)x + (%d) are %.0f and %.0f", a, b,
  //     c, root1, root2);

  // }

  // int length;
  // printf("Input length of array: ");
  // scanf("%d", &length);
  // int arr[length];
  // printf("Input array: ");
  // for (int i = 0; i < length; i++) {
  //   scanf("%d", &arr[i]);
  // }

  // int temp;
  // for (int i = 0; i < length; i++) {
  //   for (int j = i + 1; j < length; j++) {
  //     if (arr[i] > arr[j]) {
  //       temp = arr[i];
  //       arr[i] = arr[j];
  //       arr[j] = temp;
  //     }
  //   }
  // }
  // printf("\nAscending sorted array: ");
  // for (int i = 0; i < length; i++) {
  //   printf("%d ", arr[i]);
  // }

  // for (int i = 0; i < length; i++) {
  //   for (int j = i + 1; j < length; j++) {
  //     if (arr[i] < arr[j]) {
  //       temp = arr[i];
  //       arr[i] = arr[j];
  //       arr[j] = temp;
  //     }
  //   }
  // }
  // printf("\nDescending sorted array: ");
  // for (int i = 0; i < length; i++) {
  //   printf("%d ", arr[i]);
  // }

  // float median = (length % 2 == 0)
  //                    ? (arr[length / 2] + arr[(length / 2) - 1]) / 2
  //                    : arr[(length - 1) / 2];
  // printf("\nmedian = %.1f", median);

  // Char frequency of letters in a string
  // char str[100];
  // printf("Input string: ");
  // fgets(str, 100, stdin);

  // int length = sizeof(str) / sizeof(str[0]);
  // for (int i = 0; i < length; i++) {

  // }

  // Binary and 1s counting
  // int num, decimalForm, binaryForm = 0, multiplier = 1;
  // printf("Input number: ");
  // scanf("%d", &num);

  // decimalForm = num;
  // while (decimalForm > 0) {
  //   binaryForm += (decimalForm % 2) * multiplier;
  //   decimalForm = decimalForm / 2;
  //   multiplier *= 10;
  // }
  // printf("\nBinary = %d", binaryForm);
  // int counter = 0;
  // while (binaryForm) {
  //     if ((binaryForm % 2) == 1) {
  //         counter++;
  //     }
  //     binaryForm /= 10;
  // }
  // printf("\nNumber of 1s = %d", counter);

  return 0;
}
