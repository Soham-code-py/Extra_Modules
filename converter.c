#include <stdlib.h>
#include <string.h>

void reverseArray(char arr[], int size) {
    int start = 0;            // Starting index
    int end = size;       // Ending index

    // Loop until the start index is less than the end index
    while (start < end) {
        // Swap the elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the start index forward and the end index backward
        start++;
        end--;
    }
}

/*-------------------------------------------------*/

int binary(int n) {
    char bin[20] = "";       // creating and array of characters
    int index = 0;           // setting index for bin (binary)
    int rem = n % 2;         // finding remainder (binary number)

    bin[index] = '0' + rem;  // adding the remainder to bin
    n /= 2;                  // dividing n by 2 to update value
    index++;                 // incrementing index
    while (n > 0) {
        // looping top procedure while checking if n = 0
        rem = n % 2;
        bin[index] = '0' + rem;
        n /= 2;
        index++;
    }
    int indexLen = strlen(bin) - 1;   //finding full length of array

    reverseArray(bin, indexLen);

    return atoi(bin);
}

/*-------------------------------------------------*/

int octal(int n) {
    char octal[20] = "";       // creating and array of characters
    int index = 0;           // setting index for octal
    int rem = n % 8;         // finding remainder

    octal[index] = '0' + rem;  // adding the remainder to octal
    n /= 8;                  // dividing n by 8 to update value
    index++;                 // incrementing index
    while (n > 0) {
        // looping top procedure while checking if n = 0
        rem = n % 8;
        octal[index] = '0' + rem;
        n /= 8;
        index++;
    }
    int indexLen = strlen(octal) - 1;   //finding full length of array

    reverseArray(octal, indexLen);

    return atoi(octal);
}

/*-------------------------------------------------*/

float celcius(int f) {
    return (n - 32) * 5 / 9;
}

float fahrenheit(int c) {
    return (n * 9 / 5) + 32;
}

/*-------------------------------------------------*/

