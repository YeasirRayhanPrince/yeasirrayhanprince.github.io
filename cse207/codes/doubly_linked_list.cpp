#include<stdio.h>
#include<stdlib.h>
#define NULL_VALUE -99999
#define SUCCESS_VALUE 99999
struct node
{
    int item ; //stores value
    struct node *next ; //will keep memory address of next node
    struct node *prev ; //will keep memory address of previous node
};

struct node * list ;
struct node * tail ;

void initialize_list()
{
    list = 0 ; //set to NULL
    tail = 0 ; //set to NULL
}

int insert_first(int item)
{
    //step-1: create a new node
    struct node *new_node ;
    new_node = (struct node*) malloc (sizeof(struct node)) ;
    new_node->item = item ;
    new_node->prev = 0;
    new_node->next = 0;

    //step-2: update the prev and next pointers of the new node
    new_node->prev = 0 ; //no previous node as this is the first item
    new_node->next = list ;

    // step-3: update linked list pointer variables: list and tail
    list = new_node ;

    // step-4: update the pointer variables of the nodes that
    //might be affected due to the insertion
    if ( new_node->next != 0 )
        new_node->next->prev = new_node ;
    else
        tail = new_node ; //this is the first node in the list

    return SUCCESS_VALUE ;
}

int insert_last(int item)
{
    //step-1: create a new node
    struct node *new_node ;
    new_node = (struct node*) malloc (sizeof(struct node)) ;
    new_node->item = item ;
    new_node->prev = 0;
    new_node->next = 0;

    //step-2: update the prev and next pointers of the new node
    new_node->prev = tail ;
    new_node->next = 0 ; //no next node as this is the last node

    // step-3: update linked list pointer variables: list and tail
    tail = new_node ;

    // step-4: update the pointer variables of the nodes that
    //might be affected due to the insertion
    if ( new_node->prev != 0 )
        new_node->prev->next = new_node ;
    else
        list = new_node ; //this is the first node in the list

    return SUCCESS_VALUE ;
}

int main(){
    initialize_list();

}
