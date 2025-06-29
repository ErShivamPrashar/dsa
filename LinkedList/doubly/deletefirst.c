#include <stdio.h>
#include<stdlib.h>
#include<windows.h>


// self referential structure
typedef struct node{
    int data;
    struct node* next;
     struct node* prev;
}DLL; // DlL denotes Doubly list list program

DLL* head = NULL;
DLL* tail = NULL;


void deletefirst(){
    DLL *temp = head;
    if(head == NULL){
        puts("list is empty\n");
        return;
    }
    head = temp->next;
    head->prev = NULL;
    printf("%d is deleted\n",temp->data);
    free(temp);
}

//insert value at the first position
void insertFirst(int val){
DLL* ptr = (DLL*)malloc(sizeof(DLL));

ptr->data = val;
ptr->next= NULL;
ptr->prev = NULL;

if (head == NULL)
{
   head = tail  = ptr;
   return;
}

ptr->next = head;
head->prev = ptr;
head = ptr;

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
    system("color D0");
    //insert value call
    insertFirst(10);
    insertFirst(20);
    insertFirst(30);
    insertFirst(40);
    insertFirst(50);
   
    // display value call
    display();

    deletefirst();

      display();
getch();
    return 0;
}

