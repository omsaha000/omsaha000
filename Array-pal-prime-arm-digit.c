//Write a program to store N elements in array and then count:
//1. Total no of Palindrome 2. Total no of Prime no. 3. Total no of Armstrong no. 
//4. Total no of elements having the sum of their less than 10

#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, original = num;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int isPrime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int isArmstrong(int num) {
    int sum = 0, original = num, digits = 0, temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }
    temp = num;
    while (temp != 0) {
        int remainder = temp % 10;
        int power = 1;
        for (int i = 0; i < digits; i++) {
            power *= remainder;
        }
        sum += power;
        temp /= 10;
    }
    return sum == num;
}

int sumOfDigitsLessThan10(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum < 10;
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int palindromeCount = 0, primeCount = 0, armstrongCount = 0, sumLessThan10Count = 0;
    for (int i = 0; i < n; i++) {
        if (isPalindrome(arr[i])) palindromeCount++;
        if (isPrime(arr[i])) primeCount++;
        if (isArmstrong(arr[i])) armstrongCount++;
        if (sumOfDigitsLessThan10(arr[i])) sumLessThan10Count++;
    }

    int choice;
    printf("Choose an option:\n");
    printf("1. Total number of Palindromes: \n");
    printf("2. Total number of Primes: \n");
    printf("3. Total number of Armstrong numbers: \n");
    printf("4. Total number of elements with sum of digits less than 10: \n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Total number of Palindromes: %d\n", palindromeCount);
            break;
        case 2:
            printf("Total number of Primes: %d\n", primeCount);
            break;
        case 3:
            printf("Total number of Armstrong numbers: %d\n", armstrongCount);
            break;
        case 4:
            printf("Total number of elements with sum of digits less than 10: %d\n", sumLessThan10Count);
            break;
        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}