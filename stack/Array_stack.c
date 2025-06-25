#include<stdio.h>
#include<stdlib.h>
#define MAX 100
int stack[MAX];
int top = -1;

// push element into stack
void push(int element){
    if(top == MAX-1){
        printf("stack overflow\n");
        return ;
    }
    top++;
    stack[top] = element;

    printf("element %d is pushed inn stack\n",element);
    
}

// pop element into stack
void pop(){
if(top == -1){
    printf("stack is empty\n");
    return;
}

printf("element delete %d to stack\n",stack[top]);
top--;


}

// display all stack value
void display(){
    if(top == -1){
        printf("stack is empty\n");
        return;
    }
    for (int i = top; i>=0; i--){
        printf("%d\n",stack[i]);
    }
    
}


// main function
int main() {
 while(1){
       int choice, element;
    printf("1. push\n");
    printf("2. pop\n");
    printf("3. display\n");
    printf("4. exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("enter element when push in stack : ");
            scanf("%d", &element);
            push(element); // Assuming a push function is defined elsewhere
            break;
        case 2:
            pop(); // Assuming a pop function is defined elsewhere
          
            break;
        
        case 3:
            printf("\nYou chose to display the elements in the stack.\n");
            display(); // Assuming a display function is defined elsewhere
            break;
        case 4:
            printf("Exiting...\n");
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
    }

 }

}
    