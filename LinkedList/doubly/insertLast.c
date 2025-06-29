#include <stdio.h>
#include<stdlib.h>


// self referential structure
typedef struct node{
    int data;
    struct node* next;
    struct node* prev;
}DLL; // DLL denotes doubly list list program

DLL* head = NULL;
DLL* tail = NULL;


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
DLL* temp = tail;
int i=1;
while (temp!=NULL)
{
    printf("node %d Data = %d\n",i,temp->data);
    i++;
   temp = temp->prev;
}

}

//main function to the doubly linkedlist
int main(){
    //insert value call
    system("color D0");
    insertLast(10);
    insertLast(20);
    insertLast(30);
    insertLast(40);
    insertLast(50);
   
    // display value call
    display();
getch();
    return 0;
}

