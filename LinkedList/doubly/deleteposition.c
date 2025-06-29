
#include <stdio.h>
#include<stdlib.h>


// self referential structure
typedef struct node{
    int data;
    struct node* next;
    struct node* prev;
}DLL; // DLL denotes doubly  list program

DLL* head = NULL;
DLL* tail = NULL;



void deletepos(int pos){
    DLL *temp = head;
    DLL *p = temp->next;
    if(head == NULL){
        puts("list is empty\n");
        return;
    }

    if(pos==1){
    head = temp->next;
    head->prev = NULL;
    printf("%d is deleted\n",temp->data);
    free(temp);
        return;
    }

    int i=1;
    while (i<pos-1)
    {
        temp = temp->next;
        p = p->next;
    i++;
    }

    printf("%d is deleted\n",p->data);
    temp->next = p->next;
    temp->next->prev = temp;

    free(p);
    
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

    deletepos(2);

    display();
   getch();
    return 0;
}

