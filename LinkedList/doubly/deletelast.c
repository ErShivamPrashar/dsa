#include <stdio.h>
#include<stdlib.h>


// self referential structure
typedef struct node{
    int data;
    struct node* next;
        struct node* prev;
}DLL; // Dll denotes doubly list list program

DLL* head = NULL;
DLL* tail = NULL;



void deletelast(){
    DLL *temp = tail;
        DLL *p = temp->prev;
    if(head == NULL){
        puts("list is empty\n");
        return;
    }
    // while (temp->next->next!=NULL)
    // {
    // temp = temp->next;
    // p = p->next;
    // }

    printf("%d is deleted\n",temp->data);
    p->next = NULL;
    tail = p;
    free(temp);
    
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
temp = tail;

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

//main function to the singly linkedlist
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

    deletelast();

    display();
getch();
    return 0;
}

