#include <stdio.h>
#include <stdbool.h>

bool isWithinRange(int num, int lower, int upper);
bool isEven(int num);

int main() {
    int number;
    int lower = 10;
    int upper = 50;

    printf("Enter a number: ");
    scanf("%d", &number);

    bool withinRange = isWithinRange(number, lower, upper);
    bool even = isEven(number);

    if (withinRange && even) {
        printf("The number %d is within the range [%d, %d] and is even.\n", number, lower, upper);
    } else if (withinRange) {
        printf("The number %d is within the range [%d, %d] but is not even.\n", number, lower, upper);
    } else if (even) {
        printf("The number %d is even but not within the range [%d, %d].\n", number, lower, upper);
    } else {
        printf("The number %d is neither within the range [%d, %d] nor even.\n", number, lower, upper);
    }

    return 0;
}

bool isWithinRange(int num, int lower, int upper) {
    return (num >= lower) && (num <= upper);
}

bool isEven(int num) {
    return (num % 2 == 0);
}
