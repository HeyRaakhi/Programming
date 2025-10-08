//WAP to check the given number is prime or not:


#include <stdio.h>

int main() {
    int num, i, count = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num <= 1)
        printf("Not a Prime Number.\n");
    else {
        for(i = 2; i <= num / 2; i++) {
            if(num % i == 0) {
                count = 1;
                break;
            }
        }
        if(count == 0)
            printf("Prime Number.\n");
        else
            printf("Not a Prime Number.\n");
    }

    return 0;
}
