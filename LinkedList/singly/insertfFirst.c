#include <stdio.h>
#include<stdlib.h>
#include<windows.h>


// self referential structure
typedef struct node{
    int data;
    struct node* next;
}SLL; // SLL denotes singly list list program

SLL* head = NULL;


//insert value at the first position
void insertFirst(int val){
SLL* ptr = (SLL*)malloc(sizeof(SLL));

ptr->data = val;
ptr->next = NULL;

if (head == NULL)
{
   head = ptr;
   return;
}

ptr->next = head;
head = ptr;

}

// display linked list data
void display(){
SLL* temp = head;
int i=1;
while (temp!=NULL)
{
    printf("node %d Data = %d\n",i,temp->data);
    i++;
   temp = temp->next;
}

}

//main function to the singly linkedlist
int main(){
    system("color D0");
    //insert value call
    insertFirst(10);
    insertFirst(20);
    insertFirst(30);
    insertFirst(40);
    insertFirst(50);
   
    // display value call
    display();
getch();
    return 0;
}

