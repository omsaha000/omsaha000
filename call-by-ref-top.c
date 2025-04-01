//WAP to implement stack using call by reference (top).

#include <stdio.h>
#define max 10

void push(int stack[], int *top, int value) {
    if (*top == max - 1) {
        printf("Stack overflow\n");
    } else {
        stack[++(*top)] = value;
        printf("%d pushed to stack\n", value);
    }
}

void pop(int stack[], int *top) {
    if (*top == -1) {
        printf("Stack underflow\n");
    } else {
        printf("%d popped from stack\n", stack[(*top)--]);
    }
}

int peek(int stack[], int top) {
    if (top == -1) {
        printf("Stack is empty\n");
        return -1;
    } else {
        return stack[top];
    }
}

void display(int stack[], int top) {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = top; i >= 0; i--) {
            printf("%d\n", stack[i]);
        }
    }
}

int main() {
    int stack[max];
    int top = -1;
    int choice, value;

    while (1) {
        printf("\n1. Push\n2. Pop\n3. Display\n4. Peek\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice){
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(stack, &top, value);
                break;
            case 2:
                pop(stack, &top);
                break;
            case 3:
                display(stack, top);
                break;
            case 4:
                value = peek(stack, top);
                if (value != -1) {
                    printf("Top element is %d\n", value);
                }
                break;
            case 5:
                return 0;

            default:
                printf("Invalid choice\n");
        } 
            
            
    }
}

