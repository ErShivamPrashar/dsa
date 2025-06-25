#include <stdio.h>
#include <stdlib.h>

// Node structure for linked list Queue
typedef struct Node {
    int data;
    struct Node* next;
}SLL;


 SLL *Queue = NULL;

// push function
void push (int element){
    SLL *temp;
SLL *ptr = (SLL*)malloc(sizeof(SLL));
ptr->data = element;
ptr->next = NULL;

if(Queue == NULL){
    Queue = ptr;
    return;
}

temp = Queue;
while (temp->next!= NULL)
{
   temp = temp->next;
}

temp->next = ptr;

}


//pop function

void pop(){
    SLL *temp = Queue;
  if (Queue == NULL)
    {
       printf("Queue is empty\n");
       return;
    }
 Queue = temp->next;
 free(temp);
    
}


// display function
void display(){
    if (Queue == NULL)
    {
       printf("Queue is empty\n");
       return;
    }
    
SLL *temp = Queue;
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
            printf("enter element when push in Queue : ");
            scanf("%d", &element);
            push(element); // Assuming a push function is defined elsewhere
            break;
        case 2:
            pop(); // Assuming a pop function is defined elsewhere
          
            break;
        
        case 3:
            printf("\nYou chose to display the elements in the Queue.\n");
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
    