#include<stdio.h>
#define Max 4
int s[Max], top=-1, i, item;



int main() {
    int item;
    int choice;

    while(1) {
        printf("\n1: Push\n2: Pop\n3: Display\n4: Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1:
                push();
                break;
            case 2:
                item = pop();
                if (item != -1) {
            
                    printf("Item deleted is %d\n", item);
                }
                break;                                                                      
            case 3:
                display();
                break;
            case 4:
                exit(0);  
            default:
                printf("Invalid choice Please try again.\n");
        }
    }

    return 0;
}

void push(){
    if (top==Max-1){
    printf("Stack overflow");

    return;
    }
    printf("Enter the element to be pushed- ");
    scanf("%d", &item);
    top = top +1;
    s[top]=item;
    
}

void pop(){
    if (top ==-1){
    printf("Stack underflow");
    
    return(-1);
    }
    item = s[top];
    top= top-1;
    return item;
}

void display(){
    if (top==-1){
    printf("Stack is empty");
    
    return;
    }
    for (int i=0;i<=top;i++){
        printf("%d\n", s[i]);

    }
}
