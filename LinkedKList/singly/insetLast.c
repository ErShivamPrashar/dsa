#include <stdio.h>
#include<stdlib.h>


// self referential structure
typedef struct node{
    int data;
    struct node* next;
}SLL; // SLL denotes singly list list program

SLL* head = NULL;


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
getch();
    return 0;
}

