#include <stdio.h>
#include<stdlib.h>


// self referential structure
typedef struct node{
    int data;
    struct node* next;
    struct node* prev;
}DLL; // DLL denotes Doubly list program

DLL* head = NULL;
DLL* tail = NULL;


//insert value at the Given position
void insertPosition(int val, int pos){
DLL* ptr = (DLL*)malloc(sizeof(DLL));
DLL* p = head;
ptr->data = val;
ptr->next = NULL;
ptr->next = NULL;


if (pos==1)
{
    ptr->next = head;
    head->prev = ptr;
   head = ptr;
   return;
}

int i=1;
while (i<pos-1 )
{
      p = p->next;
      i++;
}

// // Check if position is valid
// if (p == NULL) {
//     printf("Error: Position %d is out of bounds.\n", pos);
//     free(ptr);
//     return;
// }

ptr->next = p->next;
p->next->prev = ptr;
p->next = ptr;
ptr->prev = p;

}



//insert value at the last position
void insertLast(int val){
DLL* ptr = (DLL*)malloc(sizeof(DLL));
DLL* temp;
ptr->data = val;
ptr->next = NULL;
ptr->prev = NULL;

if (head == NULL)
{
   head = tail = ptr;
   return;
}
temp = head;
while (temp->next!=NULL)
{ 
   temp = temp->next;
}

temp->next = ptr;
ptr->prev = temp;
tail = ptr;

}
// display linked list data
void display(){
DLL* temp = head;
int i=1;
while (temp!=NULL)
{
    printf("node %d Data = %d\n",i,temp->data);
    i++;
   temp = temp->next;
}

}

//main function to the doubly linkedlist
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
