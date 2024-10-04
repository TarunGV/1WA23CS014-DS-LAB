#include <stdio.h>
#define Max 4

void push(int s[], int *top);
int pop(int s[], int *top);
void display(int s[], int top);

int main() {
    int s[Max];
    int top = -1;
    int choice;

    while (1) {
        printf("\n1: Push\n2: Pop\n3: Display\n4: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                push(s, &top);
                break;
            case 2:
                {
                    int item = pop(s, &top);
                    if (item != -1) {
                        printf("Item deleted is %d\n", item);
                    }
                }
                break;
            case 3:
                display(s, top);
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}

void push(int s[], int *top) {
    if (*top == Max - 1) {
        printf("Stack Overflow\n");
        return;
    }
    int item;
    printf("Enter the element to be pushed: ");
    scanf("%d", &item);
    (*top)++;
    s[*top] = item;
}

int pop(int s[], int *top) {
    if (*top == -1) {
        printf("Stack Underflow\n");
        return -1; 
    }
    return s[(*top)--]; 
}

void display(int s[], int top) {
    if (top == -1) {
        printf("Stack is empty\n");
        return;
    }
    printf("Stack elements are:\n");
    for (int i = 0; i <= top; i++) {
        printf("%d\n", s[i]);
    }
}

