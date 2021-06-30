#include<stdio.h>
#include<stdlib.h>
#define NULL_VALUE -99999
#define SUCCESS_VALUE 99999

struct node
{
    int item;
    struct node* next; // points to the next node
};

struct node* list; // points to the first node of the linked list

void initialize_list()
{
    list = 0;  //initially set to NULL
}

int insert_item(int item) //insert at the beginning
{
    //step-1: create a new node
	struct node* new_node ; //stores the address of the new node
	new_node = (struct node*) malloc (sizeof(struct node)) ;
	new_node->item = item ;
	new_node->next = list ; //point to previous first node
	//step-2:set list to point to newnode as this is now the first node
	list = new_node ;
	return SUCCESS_VALUE ;
}


int delete_item(int item)
{
	struct node* temp, *prev ;
	temp = list ; //start at the beginning
	while (temp != 0)
	{
		if (temp->item == item) break ;
		prev = temp;
		temp = temp->next ; //move to next node
	}
	if (temp == 0) return NULL_VALUE ; //item not found to delete
	if (temp == list) //delete the first node
	{
		list = list->next ;
		free(temp) ;
	}
	else
	{
		prev->next = temp->next ;
		free(temp);
	}
	return SUCCESS_VALUE ;
}


struct node* search_item(int item)
{
	struct node * temp ;
	//start from the beginning
	temp = list ;
	while (temp != 0)
	{
		if (temp->item == item) return temp ;
		temp = temp->next ; //move to next node
	}
	return 0 ;
}

int main(){

}
