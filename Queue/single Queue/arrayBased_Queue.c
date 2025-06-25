#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int stack[MAX];
int F = -1,R = -1;

void push(int element){
 if(R == MAX-1){
    printf("queue is overflow\n");
    return;
 }
 R++;
 stack[R] = element;
}


void pop (){
 if(F == R){
    F=R=-1;
    printf("queue is empty\n");
    return;
 }
 F++;
 printf("element %d delete to Queue\n", stack[F]);
}


void display (){
 if(F == R){
    printf("queue is empty\n");
    return;
 }

 for(int i = F+1; i<=R; i++){
    printf(" %d\n",stack[i]);
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
    