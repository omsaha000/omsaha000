//Write a program to implement tower of hanoi using recursion


#include <stdio.h>

void towerOfHanoi(int n, char source, char auxiliary, char destination) {
    if (n == 1) {
        printf("Move disk 1 from rod %c to rod %c\n", source, destination);
        return;
    }
    towerOfHanoi(n - 1, source, destination, auxiliary);
    printf("Move disk %d from rod %c to rod %c\n", n, source, destination);
    towerOfHanoi(n - 1, auxiliary, source, destination);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);
    
    printf("\nThe sequence of moves involved in the Tower of Hanoi are:\n");
    towerOfHanoi(n, 'A', 'B', 'C');
    
    return 0;
}