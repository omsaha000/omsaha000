//Implement the function which at wether the given no. is palindrome or not

#include <stdio.h>

int isPalindrome(int num) {
    int originalNum = num;
    int reversedNum = 0;
    while (num > 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }
    return originalNum == reversedNum;
}

int main() {
    int num;

    printf("Enter a Number: ");
    scanf("%d", &num);
    
    if (isPalindrome(num)) {
        printf("%d is a palindrome.\n", num);
    } else {
        printf("%d is not a palindrome.\n", num);
    }
    return 0;
}
