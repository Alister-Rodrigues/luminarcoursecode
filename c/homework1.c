#include <stdio.h>
int main() {
  // Q1
  char sentence[100];
  int toggler = 0;
  printf("Input a sentence: ");
  fgets(sentence, 100, stdin);
  if (sentence[0] >= 'a' && sentence[0] <= 'z') {
    // Starts with small letters
    toggler = !toggler;
  }
  for (int i = 0; sentence[i] != '\0'; i++) {
    if (sentence[i] == ' ') {
      continue;
    }
    if (toggler) {
      // this means toggle to capital letters
      if (sentence[i] >= 'a' && sentence[i] <= 'z') {
        sentence[i] -= 32;
      }
    } else {
      // toggle to small letters
      if (sentence[i] >= 'A' && sentence[i] <= 'Z') {
        sentence[i] += 32;
      }
    }
    toggler = !toggler;
  }
  puts(sentence);

  // Q2
  // int length;
  // printf("\nInput length of array: ");
  // scanf("%d", &length);

  // int arr[length];
  // int firstLargest, secondLargest;
  // printf("\nInput array: ");
  // for (int i = 0; i < length; i++) {
  //   scanf("%d", &arr[i]);
  //   if (i == 0) {
  //     firstLargest = arr[i];
  //     secondLargest = arr[i];
  //     continue;
  //   }
  //   if (arr[i] > firstLargest) {
  //     secondLargest = firstLargest;
  //     firstLargest = arr[i];
  //   } else if (arr[i] > secondLargest) {
  //     secondLargest = arr[i];
  //   }
  // }
  // printf("\nSecond largest number = %d", secondLargest);

  return 0;
}
