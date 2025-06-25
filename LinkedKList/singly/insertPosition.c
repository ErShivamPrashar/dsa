#include <stdio.h>
#include<stdlib.h>


// self referential structure
typedef struct node{
    int data;
    struct node* next;
}SLL; // SLL denotes singly list list program

SLL* head = NULL;


//insert value at the Given position
void insertPosition(int val, int pos){
SLL* ptr = (SLL*)malloc(sizeof(SLL));
SLL* p = head;
ptr->data = val;
ptr->next = NULL;


if (pos==1)
{
    ptr->next = head;
   head = ptr;
   return;
}

int i=1;
while (i<pos-1 && p != NULL)
{
      p = p->next;
      i++;
}

// Check if position is valid
if (p == NULL) {
    printf("Error: Position %d is out of bounds.\n", pos);
    free(ptr);
    return;
}

ptr->next = p->next;
p->next = ptr;

}


//insert value at the last position
void insertLast(int val){
SLL* ptr = (SLL*)malloc(sizeof(SLL));
SLL* temp;
ptr->data = val;
ptr->next = NULL;
//test

if (head == NULL)
{
   head = ptr;
   return;
}
temp = head;
while (temp->next!=NULL)
{ 
   temp = temp->next;
}

temp->next = ptr;

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
    //insert value call
    system("color D0");
    // insert previous data
    printf("previous data in linkedlist\n");
    insertLast(10);
    insertLast(20);
    insertLast(30);
    insertLast(40);
    insertLast(50);
    insertLast(60);
  

    display();
    // insert given positon
     printf("\nupdate data in linkedlist\n");
      insertPosition(420, 1);
    insertPosition(720, 3);
    insertPosition(420, 7);


    // display value call
    display();
getch();
    return 0;
}
