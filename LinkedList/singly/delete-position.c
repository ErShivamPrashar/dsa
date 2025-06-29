#include <stdio.h>
#include<stdlib.h>


// self referential structure
typedef struct node{
    int data;
    struct node* next;
}SLL; // SLL denotes singly list list program

SLL* head = NULL;



void deletepos(int pos){
    SLL *temp = head;
    SLL *p = temp->next;
    if(head == NULL){
        puts("list is empty\n");
        return;
    }

    if(pos==1){
    head = temp->next;
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
    free(p);
    
}


//insert value at the last position
void insertLast(int val){
SLL* ptr = (SLL*)malloc(sizeof(SLL));
SLL* temp;
ptr->data = val;
ptr->next = NULL;

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
    insertLast(10);
    insertLast(20);
    insertLast(30);
    insertLast(40);
    insertLast(50);
   
    // display value call
    display();

    deletepos(3);

    display();
   getch();
    return 0;
}

