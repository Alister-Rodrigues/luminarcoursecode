#include <stdio.h>

int main() {
    // Q1
    printf("\n\nQ1");
    int num, result = 0;
    printf("\nSelect a number: ");
    scanf("%d", &num);

    int temp = num;
    for (int i = 1; i <= num; i *= 10) {
        result += temp % 10;
        temp /= 10;
    }
    printf("\nResult = %d", result);
    // Q1 - end
    // Q2
    printf("\n\nQ2");
    int lines;
    printf("\nPrint lines: ");
    scanf("%d", &lines);

    for (int i = 1; i <= lines; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
    // Q2 - end
    // Q3, Q4, Q5, Q6
    printf("\n\nQ3, Q4, Q5, Q6");
    int max, min, length, sum = 0, ave = 0;
    int evenNums = 0, oddNums = 0;
    printf("\nSelect number of numbers in the array: ");
    scanf("%d", &length);
    int array[length], reversedArray[length];
    printf("\nMake array of %d numbers:", length);
    for(int i = 0; i < length; i++) {
        scanf("%d", &array[i]);
        if (i == 0) {
            max = array[i];
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        } else if (array[i] < min) {
            min = array[i];
        }

        if (array[i] % 2) {
            oddNums++;
        } else {
            evenNums++;
        }
        sum += array[i];
    }
    ave = sum / length;
    printf("\n(Q3) max = %d; min = %d", max, min);
    printf("\n(Q4) sum = %d; average = %d", sum, ave);

    for (int i = length - 1; i >= 0; i--) {
        reversedArray[length - i - 1] = array[i];
    }
    printf("\n(Q5) reversed array: \n");
    for (int i =0; i < length; i++) {
        printf("%d ", reversedArray[i]);
    }

    printf("\n(Q6) odd numbers = %d; even numbers = %d", oddNums, evenNums);
    // Q3, Q4, Q5, Q6 - end
    // Q7
    printf("\n\nQ7");
    int arrayLength;
    printf("Select number of numbers in the array: ");
    scanf("%d", &arrayLength);
    int integerArray[arrayLength], uniqueArray[arrayLength], len = 0;
    printf("\nMake array of %d numbers:", arrayLength);
    for(int i = 0; i < arrayLength; i++) {
        scanf("%d", &array[i]);
        int flag = 1;
        for (int j = 0; j < arrayLength; j++) {
            if (uniqueArray[j] == integerArray[i]) {
                flag = 0;
            }
        }

        if (flag) {
            uniqueArray[len++] = integerArray[i];
        }
    }
    uniqueArray[len] = '\0';
    printf("\nUnique Array: ");
    for (int i = 0; i < len; i++) {
        printf("%d ", uniqueArray[i]);
    }
    // Q7 - end
    // Q8, Q9
    printf("\n\nQ8, Q9");
    char sentence[] = "This is a random string hahaha";
    printf("\nString is ");
    puts(sentence);
    int stringLength = sizeof(sentence) - 1;
    int count = 0;
    for (int i = 0; sentence[i] != '\0'; i++) {
        if((i == 0 && sentence[i] != ' ') || (sentence[i] == ' ' || sentence[i] == '.' && sentence[i - 1] != ' ' && sentence[i + 1] != '\0')) {
            count++;
        }
    }
    printf("\n(Q9) Number of words = %d", count);
    char reversedString[stringLength];

    for (int i = stringLength - 1; i >= 0; i--) {
        reversedString[stringLength -1 - i] = sentence[i];
    }
    reversedString[stringLength] = '\0';

    printf("\n(Q8) Reversed String: ");
    puts(reversedString);
    // Q8, Q9 - end
    return 0;
}
