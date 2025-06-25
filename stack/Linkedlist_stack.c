#include <stdio.h>
#include <stdlib.h>

// Node structure for linked list stack
typedef struct Node {
    int data;
    struct Node* next;
}SLL;


 SLL *stack = NULL;

 // push function
 void push (int element){
 SLL *ptr = (SLL*)malloc(sizeof(SLL));
 ptr->data = element;
 ptr->next = NULL;

 if(stack == NULL){
    stack = ptr;
    return;
 }

 ptr->next = stack;
 stack = ptr;

 }


 // pop function
void pop(){
    SLL* temp;
if(stack == NULL){
    printf("stack is empty\n");
    return;
}

temp = stack;
printf("element %d is delete to stack\n",temp->data);
stack = temp->next;
free(temp);
}


// display function
void display(){
 SLL* temp= stack;
if(temp == NULL){
    printf("stack is empty\n");
    return;
}
while (temp!=NULL)
{
printf("%d\n",temp->data);
temp = temp->next;
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
    